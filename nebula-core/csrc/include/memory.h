#pragma once 

#include <common.h>

extern const std::string registers[32]; 

namespace memory {
	size_t init_rom(SimulationContext& ctx);
	word_t read(word_t address, SimulationContext& ctx);
	void display_regs(SimulationContext& ctx);
}
