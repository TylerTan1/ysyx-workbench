#pragma once 

#include <common.h>

namespace cpu {
	void reset(SimulationContext& ctx);	
	int execute(uint32_t steps, SimulationContext& ctx);
	void init_difftest(SimulationContext& ctx, char *ref_so_file, long img_size); 
}
