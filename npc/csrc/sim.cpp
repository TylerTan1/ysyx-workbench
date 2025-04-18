#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Vysyx_25040101_riscv.h"
#include "verilated.h"
#include "verilated_fst_c.h"

using word_t = uint32_t;

const std::vector<word_t> inst = {
	0x00200093, // addi x1, x0, 2
	0x00408093, // addi x1, x1, 4
	0x00108213, // addi x4, x1, 4
	0x00408093,	// addi x1, x1, 4
	0x00000013,	// NOP
	0x00100073	// ebreak
};

struct SimulationContext {
	std::unique_ptr<Vysyx_25040101_riscv> dut;   // top
	std::unique_ptr<VerilatedFstC> trace;				 // wave trace	
	std::unique_ptr<VerilatedContext> context;   //	sim environment 
	std::string img_file;												 // image file
	std::vector<word_t> rom;							 			 // memory
	
	/* allocate memory and open trace */
	void init_hardware() {
		dut = std::make_unique<Vysyx_25040101_riscv>();
		Verilated::traceEverOn(true);
		trace = std::make_unique<VerilatedFstC>();
		context = std::make_unique<VerilatedContext>();
		dut->trace(trace.get(), 99);
		trace->open("waveform.fst");
	}

	/* automatically release allocated memory and close trace */
	~SimulationContext() {		
		if (trace) trace->close();
	}
};
	
/* for ebreak */
bool is_trapped = false;

/* get the binary file based on the arguments */ 
static void parse_args(const int argc, char *argv[], SimulationContext& ctx) {
/*	const struct option table[] = {};
	int o;
	while ((o = getopt_long(argc,argv, "-", table, NULL) != -1) 
			switch (o) {
				case 1: img_file = optarg; return;
				default: assert(0);
			}	*/

	if (argc > 1) ctx.img_file = argv[1]; 
}

/* initialize memory and load img */
static void init_mem(SimulationContext& ctx) {
	if (ctx.img_file.empty()) {			
		/* load default img */
		ctx.rom = inst;
		return;
	}

	/* open image file */
	std::ifstream file (ctx.img_file, std::ios::binary);
	if (!file) throw std::runtime_error("Failed to open file: " + ctx.img_file);
    
	/* record the size of the file */
	file.seekg(0, std::ios::end);
	const auto file_size = file.tellg();
	file.seekg(0, std::ios::beg);			 

	/* define rom based on the size of the file */	
	ctx.rom.resize(file_size / sizeof(word_t));

	/* load the img file */
	file.read(reinterpret_cast<char*>(ctx.rom.data()), file_size);
	if (!file) throw std::runtime_error("Failed to read file: " + ctx.img_file);
}

/* trace the wave of simulation */
static void trace(SimulationContext& ctx) {
	ctx.trace->dump(ctx.context->time());
	ctx.context->timeInc(1);
}

/* send clock signal to execute once */
static void exe_once(SimulationContext& ctx) {
	ctx.dut->clk = 1;
	ctx.dut->eval();
	trace(ctx);

	ctx.dut->clk = 0;
	ctx.dut->eval();
	trace(ctx);
};

/* send reset signal */
static void reset (SimulationContext& ctx) {
	ctx.dut->rst = 0;
	ctx.dut->clk = 0;
	ctx.dut->inst = 0x00000013; // NOP
	exe_once(ctx);

	ctx.dut->rst = 1;
	exe_once(ctx);
	ctx.dut->rst = 0;
}

/* return virtual address */
static word_t guest_to_host(word_t addr) {
	return addr - 0x80000000;
}

/* set inst based on pc */
static void pmem_read(SimulationContext& ctx) {
	word_t paddr = guest_to_host(ctx.dut->pc);
	ctx.dut->inst = ctx.rom.at(paddr / 4);
}

/* DPI-C to end the simulation */
extern "C" void ebreak() {		
	is_trapped = true;
}

int main(int argc, char *argv[]) {
	try {
		/* some initialization */
		SimulationContext ctx;
		parse_args(argc, argv, ctx);
		ctx.init_hardware();
		init_mem(ctx);

		/* send reset signal */
		reset(ctx);

		/* send clock signal and execute until ebreak */
		while (!is_trapped) {
			pmem_read(ctx);
			exe_once(ctx);
		}
		/* output trap information */
		std::cout << "Trap at PC: 0x" << std::hex << std::setw(8) << std::setfill('0') << ctx.dut->pc << "\n";
	} catch (const std::exception& e) {
		/* output error information */
		std::cerr << "Error: " << e.what() << "\n";
		return 1;
	}
	return 0;
}
