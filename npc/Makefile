VERILATOR_FLASS = --cc --exe --build --trace-fst

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLASS) verilog.v test.cpp

wave:
	obj_dir/Vverilog
	gtkwave wave.fst


clean:
	rm -rf obj_dir

.PHONY: clean sim wave

include ../Makefile
