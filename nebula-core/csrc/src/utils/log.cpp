#include <utils.h>

#include <fstream>
#include <filesystem>

#include "disasm.h"

static std::ofstream log_file;

void utils::init_log() {
#ifdef CONFIG_ITRACE
   std::string log_dir = "obj_dir";
   std::string log_path = log_dir + "/npc-log.txt";

   if (!std::filesystem::exists(log_dir)) {
     std::filesystem::create_directory(log_dir);
   }

   log_file.open(log_path, std::ios::out | std::ios::trunc);
   if (!log_file.is_open()) {
     std::cerr << "Error: Failed to open log file: " << log_path << std::endl;
     exit(1);
   }

   std::cout << "Initializing ITRACE log file " << log_path << std::endl;
#endif
}

void utils::record_log(SimulationContext& ctx) {
#ifdef CONFIG_ITRACE
  if (!log_file.is_open()) {
    std::cerr << "Error: Log file is not open. Call utils::init_log() first." << std::endl;
    return;
  }
	std::string disasm_result = disasm(ctx);
	
	log_file << disasm_result << std::endl;
#endif
}
