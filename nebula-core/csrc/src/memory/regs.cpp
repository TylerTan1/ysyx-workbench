#include <memory.h>

#include "svdpi.h"

const std::string registers[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void memory::display_regs(SimulationContext& ctx) {
	std::cout << std::setw(8) << std::setfill(' ') << std::left << registers[0] 
						<< "0x" << std::hex << std::setw(8) << 0 << std::endl;

	for  (int i = 1; i < 32; i++) {
		std::cout << std::setw(8) << std::left << registers[i] 
							<< "0x" << std::hex << std::setw(8) << ctx.dut->regs_data[i - 1] << std::endl; 
	}	
}
