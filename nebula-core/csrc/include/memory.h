#pragma once 

#include <common.h>

namespace memory {
	void init_rom(SimulationContext& ctx);
	word_t read(word_t address, SimulationContext& ctx);
	void display_regs(SimulationContext& ctx);
}
