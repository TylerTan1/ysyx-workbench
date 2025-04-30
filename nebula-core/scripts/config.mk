COLOR_RED    := $(shell echo "\033[1;31m")
COLOR_GREEN  := $(shell echo "\033[1;32m")
COLOR_YELLOW := $(shell echo "\033[1;33m")
COLOR_BLUE   := $(shell echo "\033[1;34m")
COLOR_END    := $(shell echo "\033[0m")

ifeq ($(wildcard .config),)
$(warning $(COLOR_RED)Warning: .config does not exist!$(COLOR_END))
$(warning $(COLOR_RED)To build the projec, first run 'make menuconfig'. $(COLOR_END))
endif

KCONFIG_PATH := $(NPC_HOME)/tools/kconfig
Kconfig			 := $(NPC_HOME)/Kconfig
rm-distclean += include/generated include/config .config .config.old
silent 			 := -s

CONF   := $(KCONFIG_PATH)/build/conf
MCONF  := $(KCONFIG_PATH)/build/mconf

$(CONF):
	@$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=conf

$(MCONF):
	@$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=mconf

menuconfig: $(MCONF) $(CONF)
	@$(MCONF) $(Kconfig)
	@$(CONF) $(silent) --syncconfig $(Kconfig)

distclean: clean
	-@rm -rf $(rm-distclean)

.PHONY: menuconfig distclean
