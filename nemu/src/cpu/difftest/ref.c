/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void paddr_write(paddr_t addr, int len, word_t data);

__EXPORT void difftest_memcpy(paddr_t addr, uint8_t *buf, size_t n, bool direction) {
	if (direction == DIFFTEST_TO_DUT) assert(0);		
	uint8_t *ptr = buf;
	for (int i = 0; i < n; i++) {
		paddr_write(addr, 1, *ptr);
		addr++;
		ptr++;
	}
}

__EXPORT void difftest_regcpy(uint32_t *dut, bool direction) {
	if (direction == DIFFTEST_TO_DUT) assert(0);
	dut[0] = cpu.pc;
	for (int i = 1; i < 32; i++) {
		dut[i] = cpu.gpr[i];
	}
}

__EXPORT void difftest_exec(uint64_t n) {
	void cpu_exec(uint64_t n);
	cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init() {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
