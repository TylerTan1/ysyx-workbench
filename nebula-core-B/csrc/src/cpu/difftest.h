#pragma once

#include <common.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

int difftest_step(SimulationContext& ctx); 
