#include <monitor.h>
#include <cpu.h> 
#include <memory.h>
#include <utils.h>
#include <color.h>

#include <cassert>
#include <getopt.h>

#include "sdb.h"

/* parse the arguments */ 
static void parse_args(const int argc, char *argv[], SimulationContext& ctx) {
	const struct option table[] = {
		{"batch"	, no_argument			, NULL, 'b'},
	};
	int o;
	while ((o = getopt_long(argc, argv, "-b", table, NULL)) != -1) { 
		switch (o) {
			case 'b': set_batch_mode();  		 break;
			case 1: 	ctx.img_file = optarg; break;
			default:  assert(0);
		}	
	}
}

static void welcome() {
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << YELLOW << "Welcome to riscv32-nebula-core!" << std::endl;
	std::cout << "For help, type \"help\"" << RESET_COLOR << std::endl;
}

void monitor::initialize(int argc, char *argv[], SimulationContext& ctx) {
	/* parse arguments */
	parse_args(argc, argv, ctx);
	
	/* initialize wave tracer, dut and context */
	ctx.init_hardware();
	
	/* initialize memory */
	memory::init_rom(ctx);

	/* initialize disassemble */
	utils::init_disasm();

	/* send reset signal */
	cpu::reset(ctx);

	/* output welcome message */
	welcome();
}
