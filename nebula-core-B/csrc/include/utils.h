#pragma once

#include <common.h>

namespace utils {
	void init_disasm();
	void print_disasm(SimulationContext& ctx);
	void init_log();
	void record_log(SimulationContext& ctx);
}
