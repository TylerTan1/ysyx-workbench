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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

#define REGNUM 32

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool is_equal = true;
	if (ref_r->pc != cpu.pc) {
		is_equal = false;
	}
	
	for (int i = 0; i < REGNUM; i++) 
		if (gpr(i) != ref_r->gpr[i]) { 
			printf("DIFF! ref:%3s = 0x%08x while dut: %3s = 0x%08x\n", regs[i], ref_r->gpr[i], regs[i], gpr(i));
			is_equal = false;
		}

	if (!is_equal) {
		printf("ref: pc = %x\n", ref_r->pc);
		printf("dut: pc = %x\n", cpu.pc);
		printf("ref:\n");
		for (int i = 0; i < REGNUM; i++) 
		 	printf("%-8s 0x%08x %10u\n", regs[i], ref_r->gpr[i], ref_r->gpr[i]);
		printf("dut:\n");
	}	

	return is_equal;
}

void isa_difftest_attach() {
}
