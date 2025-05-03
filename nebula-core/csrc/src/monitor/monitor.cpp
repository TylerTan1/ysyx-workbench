#include <monitor.h>
#include <cpu.h> 
#include <memory.h>
#include <utils.h>
#include <color.h>

#include <cassert>
#include <getopt.h>

#include "sdb.h"

char *diff_so_file;

/* parse the arguments */ 
static void parse_args(const int argc, char *argv[], SimulationContext& ctx) {
	const struct option table[] = {
		{"batch"	, no_argument			 , NULL, 'b'},
		{"diff"		, required_argument, NULL, 'd'},
	};
	int o;
	while ((o = getopt_long(argc, argv, "-bd:", table, NULL)) != -1) { 
		switch (o) {
			case 'b': set_batch_mode();  		 		break;
			case 'd': diff_so_file = optarg;		break;
			case 1: 	ctx.img_file = optarg; 		break;
			default: 
				std::cout << "Usage: " << argv[0] << "[OPTION...] IMAGE [args]" << std::endl << std::endl
									<< "\t-b, --batch		     run with batch mode" << std::endl
									<< "\t-d, --diff=REF_SO  run with Difftest" << std::endl
									<< std::endl;
				exit(0);
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
	
	std::cout << "Initializing simulation environment..." << std::endl;

	/* initialize wave tracer, dut and context */
	ctx.init_hardware();
	
	/* initialize memory */
	size_t img_size = memory::init_rom(ctx);

	/* initialize disassemble */
	utils::init_disasm();

	/* initialize log file */
#ifdef CONFIG_ITRACE
	utils::init_log();
#endif

	/* initialize difftest */
#ifdef CONFIG_DIFFTEST
	cpu::init_difftest(ctx, diff_so_file, img_size);
#endif

	/* send reset signal */
	cpu::reset(ctx);

	/* output welcome message */
	welcome();
}
