#include <dlfcn.h>
#include <cpu.h>
#include <color.h>
#include <utils.h>
#include <memory.h>
#include <generated/autoconf.h>

#include "difftest.h"

#ifdef CONFIG_DIFFTEST

typedef void (*dl_difftest_memcpy)(word_t, uint8_t*, size_t, bool);
typedef void (*dl_difftest_regcpy)(uint32_t*, bool);
typedef void (*dl_difftest_exec)(uint64_t);
typedef void (*dl_difftest_init)();

static dl_difftest_memcpy ref_difftest_memcpy;
static dl_difftest_regcpy ref_difftest_regcpy;
static dl_difftest_exec   ref_difftest_exec;

void cpu::init_difftest(SimulationContext& ctx, char *ref_so_file, long img_size) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (dl_difftest_memcpy)dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (dl_difftest_regcpy)dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (dl_difftest_exec)dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  dl_difftest_init ref_difftest_init = (dl_difftest_init)dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

	std::cout << "Differential testing: " << GREEN << "ON" << RESET_COLOR << std::endl;

  ref_difftest_init();

	uint8_t *rom_ptr = (uint8_t *)ctx.rom.data();
	// 赋值内存
  ref_difftest_memcpy(0x80000000, rom_ptr, img_size, DIFFTEST_TO_REF);

	// 这里把reg初始化为npc里寄存器的数据
	word_t regs[32];
	regs[0] = ctx.dut->pc;
	// printf("ctx.dut->pc = 0x%x\n", ctx.dut->pc);
	for (int i = 0; i < 31; i++) {
		regs[i+1] = ctx.dut->regs_data[i];
	}
	// 赋值寄存器
  ref_difftest_regcpy(regs, DIFFTEST_TO_REF);
}

static int checkregs(SimulationContext& ctx, uint32_t* regs) {
	int ret = 0;
	bool dif[32] = {false};
	if (ctx.dut->pc != regs[0]) {
		dif[0] = true;
		ret = -1;
	}

	for (int i = 0; i < 31; i++) {
		if (ctx.dut->regs_data[i] != regs[i + 1]) {
			dif[i + 1] = true;
			ret = -1;
		}
	}
	if (ret == 0) return 0;
	std::cout << std::endl;
	std::cout << RED << "DIFFTEST triggered. Automatically aborted." << std::endl;
	utils::print_disasm(ctx);
	std::cout << RESET_COLOR << std::endl;
	std::cout << "Register  " << "NEMU" << "          " << "Nebula-core" << std::endl;
	/* output pc */
	std::cout << "PC        0x" << std::hex << std::setw(8) << std::setfill('0') << regs[0]
						<< "    ";
	if (dif[0]) std::cout << RED;
  std::cout	<< "0x" << std::hex << std::setw(8) << std::setfill('0') << std::right << ctx.dut->pc 
						<< RESET_COLOR << std::endl;
	/* output reg[0] */
	std::cout << std::left << std::setw(10) << std::setfill(' ') << registers[0] 
						<< "0x" << std::hex << std::setw(8) << std::setfill('0') << 0 << "    ";
	std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << 0
							 << std::endl;

	/* output reg[1] to reg[31] and highlight those different from ref */
	for (int i = 0; i < 31; i++) {
		std::cout << std::left << std::setw(10) << std::setfill(' ') << registers[i + 1] 
							<< std::right << "0x" << std::hex << std::setw(8) << std::setfill('0') << regs[i + 1] << "    ";
		if (dif[i + 1]) std::cout << RED;	
		std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << ctx.dut->regs_data[i]
							<< RESET_COLOR << std::endl;
	}
	return ret;	
}

int difftest_step(SimulationContext& ctx) {
	if (is_device) {
 		is_device = false;
		word_t regs[32];
		regs[0] = ctx.dut->pc;
		for (int i = 0; i < 31; i++) {
			regs[i+1] = ctx.dut->regs_data[i];
		}
  	ref_difftest_regcpy(regs, DIFFTEST_TO_REF);
		return 0;
	} else {
		uint32_t regs[32];
		ref_difftest_exec(1);
		// 将ref的寄存器赋值到regs数组
		ref_difftest_regcpy(regs, DIFFTEST_TO_DUT);
		return checkregs(ctx, regs);	
	}
}
#else
void cpu::init_difftest(SimulationContext& ctx, char *ref_so_file, long img_size) { return; };
int difftest_step(SimulationContext& ctx) { return 0; };
#endif
