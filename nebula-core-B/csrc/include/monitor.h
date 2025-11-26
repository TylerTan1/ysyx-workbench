#pragma once

#include <common.h>

namespace monitor {
	void initialize(int argc, char *argv[], SimulationContext& ctx);
	void mainloop(SimulationContext& ctx);
}
