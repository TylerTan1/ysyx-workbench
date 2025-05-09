.DEFALUT_GOAL = sim

# top module
TOP_MODULE = ysyx_25040101_riscv

# object dir
OBJ_DIR = obj_dir

# dynamic-linked library
LIBS := -ldl

# flags for varilator
VFLAGS := --cc --exe --build --trace-fst
CFLAGS := -O2 $(INC_HEADER) $(LIBS) $(CFLAGS)

sim:
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "$(COLOR_YELLOW)Verilator compiling...$(COLOR_END)"
	@verilator $(VFLAGS) $(VERILOG_SRCS) $(CPP_SRCS) --top-module $(TOP_MODULE) --CFLAGS "$(CFLAGS)"

clean:
	@-rm -rf $(OBJ_DIR) 
	@echo "$(COLOR_YELLOW)Cleaning successfully$(COLOR_END)"

.PHONY: sim clean
