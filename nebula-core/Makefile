VERILATOR_FLAGS = --cc --exe --build --trace-fst --sv

# all verilog files
VERILOG_DIR = $(NPC_HOME)/vsrc
VERILOG_SRCS = $(shell find $(VERILOG_DIR) -name "*.v")  

# all cpp files
CPP_DIR = $(NPC_HOME)/csrc
CPP_SRCS = $(shell find $(CPP_DIR) -name "*.cpp")

# dir to all headfiles
HEAD_DIR = $(NPC_HOME)/csrc/include

# top module
TOP_MODULE = ysyx_25040101_riscv

# object dir
OBJ_DIR = obj_dir

# IMG file
IMG ?=

# arguments
ARGS ?= 

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLAGS) $(VERILOG_SRCS) $(CPP_SRCS) --top-module $(TOP_MODULE) --CFLAGS "-I$(HEAD_DIR) -g"

run: sim
	obj_dir/V$(TOP_MODULE) $(IMG) $(ARGS)

gdb: sim
	gdb obj_dir/V$(TOP_MODULE) $(IMG) $(ARGS)

clean:
	rm -rf obj_dir waveform.fst waveform.fst.hier

.PHONY: clean sim wave run

include ../Makefile
