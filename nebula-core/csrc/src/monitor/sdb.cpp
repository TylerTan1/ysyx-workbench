#include <monitor.h>
#include <memory.h>
#include <cpu.h>
#include <color.h>

#include "sdb.h"

static bool is_batch_mode= false;

void set_batch_mode() {
	std::cout << YELLOW << "Running in batch mode..." << RESET_COLOR << std::endl;
	is_batch_mode = true;
}

static int cmd_c(const std::string& args, SimulationContext& ctx) {
	return cpu::execute(-1, ctx);
}


static int cmd_q(const std::string& args, SimulationContext& ctx) {
  return -1;
}

static int cmd_s(const std::string& args, SimulationContext& ctx) {
	int step_count = 1;
	if (!args.empty()) {
		try {
			step_count = std::stoi(args);
		} catch (const std::invalid_argument&) {
			std::cout << "Usage: s [N]" << std::endl;
			return 0;
		}
	}
	return cpu::execute(step_count, ctx);
}

static int cmd_i(const std::string& args, SimulationContext& ctx) {
	/* display register status */
	memory::display_regs(ctx);
	return 0;
}

static int cmd_x(const std::string& args, SimulationContext& ctx) {
	if (args.empty()) {
		std::cout << "Usage: x [N] address" << std::endl;
		return 0;
	}
	/* get address_count and address */
	std::istringstream iss(args);
	int step_count;
	word_t address;
	iss >> step_count >> std::hex >> address;
	if (iss.fail()) {
		std::cout << "Usage: x [N] address" << std::endl;
		return 0;
	}
	word_t data;
	for (int i = 0; i < step_count; i++) {
		/* read the address to get the data */
		data = memory::read(address + 4 * i, ctx);
		/* output the data */
		std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') 
							<< (address + 4 * i) << ": "
							<< "0x" << std::hex << std::setw(8) << std::setfill('0')
							<< data << std::endl;
	}
	return 0;
}

static int cmd_help(const std::string& args, SimulationContext& ctx);

const std::map<std::string, std::pair<std::string, std::function<int(const std::string&, SimulationContext& ctx)>>> cmd_table = {
  { "help", { "Display information about all supported commands"						, cmd_help} },
  { "c"		, { "Continue the execution of the program"												, cmd_c		} },
  { "q"		, { "Exit the simulation"																					, cmd_q		} },
	{ "s"		, { "Execute N steps instructions (default N = 1)"								, cmd_s		} },
	{ "i"		, { "Print register status"																				, cmd_i		} },
	{ "x"		, { "Scan memory and outputs consecutive N*4 bytes in hexadecimal", cmd_x		} },
};

static int cmd_help(const std::string& args, SimulationContext& ctx) {
	const std::vector<std::string> cmd_order = {
    "help", "c", "q", "s", "i", "x"
	};
   if (args.empty()) {
     for (const auto& name : cmd_order) {
       auto it = cmd_table.find(name);
       if (it != cmd_table.end()) {
         std::cout << it->first << " - " << it->second.first << std::endl;
       }
    }
  } else {
    auto it = cmd_table.find(args);
    if (it != cmd_table.end()) {
      std::cout << it->first << " - " << it->second.first << std::endl;
    } else {
      std::cout << "Unknown command '" << args << "'" << std::endl;
    }
	}
  return 0;
}

void monitor::mainloop(SimulationContext& ctx) {
  if (is_batch_mode) {
    cmd_c("", ctx);
    return;
  }
	
	std::string input;
	std::cout << CYAN << "(nebula) " << RESET_COLOR;
	while (std::getline(std::cin, input)) {
		std::istringstream iss(input);
		std::string cmd, args;
		/* get command */
		iss >> cmd;
		/* get arguments */
		std::getline(iss, args);
		/* erase spaces */
		args.erase(0, args.find_first_not_of(' '));
		
		/* find and execute command */
		auto it = cmd_table.find(cmd);
		if (it != cmd_table.end()) {
			if (it->second.second(args, ctx) < 0) { 
				std::cout << "----------------------------------------" << std::endl;
				return;
			}
		}	else {
			std::cout << "Unknown command '" << cmd << "'" << std::endl;
		}
		std::cout << CYAN << "(nebula) " << RESET_COLOR;
	}
}
