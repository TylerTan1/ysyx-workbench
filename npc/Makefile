VERILATOR_FLASS = --cc --exe --build --trace-fst

# dir to all verilog file
RTL_DIR = rtl
TEMPLATES_DIR = $(RTL_DIR)/templates

# all verilog file
VERILOG_SRCS = $(wildcard $(RTL_DIR)/*.v) $(wildcard $(TEMPLATES_DIR)/*.v)

# test cpp file
TEST_CPP = sim.cpp

# top module
TOP_MODULE = riscv

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLASS) $(VERILOG_SRCS) $(TEST_CPP) --top-module $(TOP_MODULE)

wave:
	obj_dir/V$(TOP_MODULE)
	gtkwave waveform.fst


clean:
	rm -rf obj_dir waveform.fst

.PHONY: clean sim wave

include ../Makefile
