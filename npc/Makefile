VERILATOR_FLASS = --cc --exe --build --trace-fst

# dir to all verilog file
VERILOG_DIR = $(NPC_HOME)/vsrc
TEMPLATES_DIR = $(VERILOG_DIR)/templates

# all verilog file
VERILOG_SRCS = $(wildcard $(VERILOG_DIR)/*.v) $(wildcard $(TEMPLATES_DIR)/*.v)

# dir to all cpp file
CPP_DIR = $(NPC_HOME)/csrc

# all cpp file
CPP_SRCS = $(wildcard $(CPP_DIR)/*.cpp)

# top module
TOP_MODULE = ysyx_25040101_riscv

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLASS) $(VERILOG_SRCS) $(CPP_SRCS) --top-module $(TOP_MODULE)

wave: sim
	obj_dir/V$(TOP_MODULE)
	gtkwave waveform.fst


clean:
	rm -rf obj_dir waveform.fst

.PHONY: clean sim wave

include ../Makefile
