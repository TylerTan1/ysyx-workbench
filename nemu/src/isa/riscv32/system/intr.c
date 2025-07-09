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

vaddr_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
	cpu.mepc = epc;
	cpu.mcause = NO;
	IFDEF(CONFIG_ETRACE, printf("ecall, mepc = 0x%08x\n", epc));
  return cpu.mtvec;
}

vaddr_t isa_ret_intr() {
	// printf("cpu.mepc = 0x%x", cpu.mepc);
	IFDEF(CONFIG_ETRACE, printf("mret, mepc = 0x%08x\n", cpu.mepc));	
	return cpu.mepc;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
