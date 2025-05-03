include $(NPC_HOME)/scripts/build.mk

# top module
TOP_MODULE = ysyx_25040101_riscv

# Commands to execute nebula-core
BINARY := $(OBJ_DIR)/V$(TOP_MODULE) 
ARGS ?= 
IMG ?=
DIF = --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so
NPC_EXEC := $(BINARY) $(ARGS) $(IMG) $(DIF)

run: sim
	@echo "$(COLOR_YELLOW)Running...$(COLOR_END)"
	@$(NPC_EXEC)

run-batch: sim
	@$(NPC_EXEC) -b

wave: run-batch
	@gtkwave $(OBJ_DIR)/waveform.fst

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run run-batch wave clean-tools clean-all $(clean-tools)
