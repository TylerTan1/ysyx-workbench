# all cpp files
CPP_SRCS += $(shell find ./csrc/src -name "*.cpp")
CPP_SRCS += csrc/main.cpp

# include all headers
INC_HEADER += -I$(NPC_HOME)/csrc/include
INC_HEADER += -I$(NPC_HOME)/include
