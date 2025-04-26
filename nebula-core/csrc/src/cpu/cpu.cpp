#include <cpu.h>
#include <memory.h>

const int max_print = 10;

/* trace the wave of simulation */
static void trace(SimulationContext& ctx) {
	ctx.trace->dump(ctx.context->time());
	ctx.context->timeInc(1);
}

/* send clock signal to execute once */
static void exe_once(SimulationContext& ctx) {
	ctx.dut->clk = 0;
	ctx.dut->eval();
	trace(ctx);

	ctx.dut->clk = 1;
	ctx.dut->eval();
	trace(ctx);
}

/* send reset signal */
void cpu::reset(SimulationContext& ctx) {
	ctx.dut->inst = 0x00000013; // NOP
															
	ctx.dut->rst = 0;
	exe_once(ctx);

	ctx.dut->rst = 1;
	exe_once(ctx);

	ctx.dut->rst = 0;
}

/* output hit trap information */
static void print_info(SimulationContext& ctx) {
	std::stringstream ss;
	ss << std::hex << std::setw(8) << std::setfill('0') << ctx.dut->pc;
	if (!ctx.dut->regs_data[9]) std::cout << "\033[32mHit Good Trap \033[0m";
	else 			 std::cout << "\033[31mHit Bad Trap \033[0m";
	std::cout << "at pc = 0x" << ss.str() << std::endl;
}

int cpu::execute(uint32_t steps, SimulationContext& ctx) {
	word_t inst;
	bool print_inst = (steps < max_print);
	std::stringstream ss;
	std::cout << "Executing..." << std::endl;
	/* send clock signal and execute untill ebreak */
	for (uint32_t i = 0; i < steps; i++) {
		ctx.dut->inst = memory::read(ctx.dut->pc + 4, ctx);
		exe_once(ctx);
		/* output instructions being executed */
		if (print_inst) {
			ss << std::hex << std::setw(8) << std::setfill('0') << ctx.dut->pc;
			std::cout << "0x" << ss.str();
			/* clear the stringstream */
			ss.str("");
			ss << std::hex << std::setw(8) << std::setfill('0') << ctx.dut->inst;
			std::cout << ": 0x" << ss.str() << std::endl;
			/* clear again */
			ss.str("");
		}
		if (ctx.dut->is_ebreak) {
			/* output hit trap information */
			std::stringstream ss;
			ss << std::hex << std::setw(8) << std::setfill('0') << ctx.dut->pc;
			/* regs_data[9] is code stored in a0 register */
			if (!ctx.dut->regs_data[9]) {
				std::cout << "\033[32mHit Good Trap \033[0m";
			} else { 
				std::cout << "\033[31mHit Bad Trap \033[0m";
			}
			std::cout << "at pc = 0x" << ss.str() << "\n";
			/* return value = -1 means quit */
			return -1;
		}
	}
	return 0;
}
