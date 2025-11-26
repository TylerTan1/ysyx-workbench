#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "Vysyx_25040101_riscv.h"  
#include "verilated_fst_c.h" 
#include "verilated.h"

#include <generated/autoconf.h>

using word_t  = uint32_t;
using sword_t = int32_t;

struct SimulationContext {
	std::unique_ptr<Vysyx_25040101_riscv> dut;   // top
	std::unique_ptr<VerilatedFstC> trace;				 // wave trace	
	std::unique_ptr<VerilatedContext> context;   //	sim environment 
	std::string img_file;												 // image file
	std::vector<uint8_t> rom;							 			 // memory
	
	/* allocate memory and open trace */
	void init_hardware() {
		std::cout << "Initializing hardware..." << std::endl;
		dut = std::make_unique<Vysyx_25040101_riscv>();
		Verilated::traceEverOn(true);
		trace = std::make_unique<VerilatedFstC>();
		context = std::make_unique<VerilatedContext>();
		dut->trace(trace.get(), 99);
		trace->open("obj_dir/waveform.fst");
	}
};
