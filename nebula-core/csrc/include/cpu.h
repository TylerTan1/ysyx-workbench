#pragma once 

#include <common.h>

namespace cpu {
	void reset(SimulationContext& ctx);	
	int execute(uint32_t steps, SimulationContext& ctx);
}
