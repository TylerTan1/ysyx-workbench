VERILATOR_FLASS = --cc --exe --build --trace-fst

# dir to all verilog file
VERILOG_DIR = $(NPC_HOME)/vsrc

# all verilog file
VERILOG_SRCS = $(shell find $(VERILOG_DIR) -name "*.v")

# dir to all cpp file
CPP_DIR = $(NPC_HOME)/csrc

# all cpp file
CPP_SRCS = $(shell find $(CPP_DIR) -name "*.cpp")

# top module
TOP_MODULE = ysyx_25040101_riscv

#IMG file
IMG ?=

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLASS) $(VERILOG_SRCS) $(CPP_SRCS) --top-module $(TOP_MODULE)

run: sim
	obj_dir/V$(TOP_MODULE) $(IMG)

wave: sim run
	gtkwave waveform.fst


clean:
	rm -rf obj_dir waveform.fst waveform.fst.hier

.PHONY: clean sim wave

include ../Makefile
