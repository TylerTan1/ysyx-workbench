#include <cpu.h>
#include <memory.h>
#include <utils.h>
#include <color.h>

const int max_print = 10;

void print_disarm();

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
	if (!ctx.dut->regs_data[9]) {
		std::cout << GREEN << "Hit Good Trap ";
	} else {
		std::cout << RED << "[31mHit Bad Trap ";
	}
	std::cout << YELLOW << "at pc = 0x" << ss.str() << RESET_COLOR << std::endl;
}

int cpu::execute(uint32_t steps, SimulationContext& ctx) {
	word_t inst;
	bool print_inst = (steps < max_print);
	std::cout << YELLOW << "Executing..." << RESET_COLOR << std::endl;
	/* send clock signal and execute untill ebreak */
	for (uint32_t i = 0; i < steps; i++) {
		ctx.dut->inst = memory::read(ctx.dut->pc + 4, ctx);
		exe_once(ctx);
		/* output instructions being executed */
		if (print_inst) {
			utils::print_disasm(ctx);
		}
		if (ctx.dut->is_ebreak) {
			print_info(ctx);
			return -1;
		}
	}
	return 0;
}
