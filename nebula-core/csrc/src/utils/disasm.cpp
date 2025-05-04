#include <utils.h>

#include <dlfcn.h>
#include <capstone/capstone.h>

#include "disasm.h"

typedef size_t (*cs_disasm_dl)(csh, const uint8_t*, size_t, uint64_t, size_t, cs_insn **);
typedef void (*cs_free_dl)(cs_insn*, size_t);

static cs_disasm_dl csdisasm;
static cs_free_dl csfree;
static csh handle;

void utils::init_disasm() {
	std::cout << "Initializing disassemble function..." << std::endl;
	void *dl_handle;
	dl_handle = dlopen("tools/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  assert(dl_handle);

	typedef cs_err (*cs_open_dl)(cs_arch, cs_mode, csh*);
  cs_open_dl csopen = (cs_open_dl)dlsym(dl_handle, "cs_open");
  assert(csopen);

  csdisasm = (cs_disasm_dl)dlsym(dl_handle, "cs_disasm");
  assert(csdisasm);

  csfree = (cs_free_dl)dlsym(dl_handle, "cs_free");
  assert(csfree);

	cs_arch arch = CS_ARCH_RISCV;
	cs_mode mode = CS_MODE_RISCV32;

	int ret = csopen(arch, mode, &handle);
  assert(ret == CS_ERR_OK);
}

uint32_t last_pc = 0x80000000;
std::string disasm(SimulationContext& ctx) {
	cs_insn *insn;
	size_t count = csdisasm(handle, (uint8_t *)&ctx.dut->inst, 8, last_pc, 0, &insn);
	assert(count == 1);
	last_pc = ctx.dut->pc;

	std::ostringstream oss;
	oss << "0x" << std::hex << std::setw(8) << std::setfill('0') << insn[0].address
						<< ":\t" << insn[0].mnemonic << "\t\t" << insn[0].op_str;
	csfree(insn, count);
	return oss.str();
}

void utils::print_disasm(SimulationContext& ctx) {
	std::cout << disasm(ctx) << std::endl; 
}
