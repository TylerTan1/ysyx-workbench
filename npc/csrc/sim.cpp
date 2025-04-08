#include "Vysyx_25040101_riscv.h"
#include "verilated.h"
#include "verilated_fst_c.h"

const uint32_t inst[] = {
	0x00200093, // addi x1, x0, 2
	0x00408093, // addi x1, x1, 4
	0x00108213, // addi x4, x1, 4
	0x00408093,	// addi x1, x1, 4
	0x00000013,	// NOP
	0x00100073	// ebreak
};

Vysyx_25040101_riscv* dut;   // top
uint32_t* rom;							 // memory
VerilatedFstC *m_trace;			 // wave trace										
VerilatedContext *contextp;  //	sim environment 
bool trap = false;				 // trap

uint32_t* init_mem(size_t size) {
	rom = new uint32_t[size];
	assert(rom != NULL);
	memcpy(rom, inst, sizeof(inst));
	return rom;
}

void trace(void) {
	m_trace->dump(contextp->time());
	contextp->timeInc(1);
}

void exe_once() {
	dut->clk = 1;
	dut->eval();
	trace();

	dut->clk = 0;
	dut->eval();
	trace();
};

void reset (void) {
	dut->rst = 0;
	dut->clk = 0;
	dut->inst = 0x00000013; // NOP
	exe_once();
	dut->rst = 1;
	exe_once();
	dut->rst = 0;
}

uint32_t guest_to_host(uint32_t addr) {
	return addr - 0x80000000;
}

uint32_t pmem_read(uint32_t* memory, uint32_t vaddr) {
	uint32_t paddr = guest_to_host(vaddr);
	return rom[paddr / 4];
}

extern "C" void ebreak() {
	trap = true;
}

int main() {
	dut = new Vysyx_25040101_riscv;
	init_mem(6);

	Verilated::traceEverOn(true);
	contextp = new VerilatedContext;
	m_trace = new VerilatedFstC;
	dut->trace(m_trace, 99);
	m_trace->open("waveform.fst");

	reset();

	while (!trap) {
		dut->inst = pmem_read(rom, dut->pc);
		exe_once();
	}
	
	printf("Trap in %x\n", dut->pc);
	m_trace->close();
	delete dut;
	delete m_trace;
	delete rom;

	return 0;
}
