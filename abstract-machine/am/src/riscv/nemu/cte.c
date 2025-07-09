#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

#define ET_ECALL_FROM_MMODE 11

static Context* (*user_handler)(Event, Context*) = NULL;

// 进入异常处理入口后就会进入这个函数，这个函数会给event赋值，然后调用callback函数（软件提供）进行处理
Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
			case ET_ECALL_FROM_MMODE: 
				if (c->GPR1 == -1) { 
					ev.event = EVENT_YIELD;
				} break;
      default: ev.event = EVENT_ERROR; break;
    }
 		c->mepc += 4; 
    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
	// 这里将__am_asm_trap的值写入到mtvec寄存器中，而mtvec寄存器存储的是异常处理入口地址
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
	// 这里注册了一个事件处理的callback函数，该函数由程序提供
  user_handler = handler;

  return true;
}

// 创建cp
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	Context *cp = (Context *)kstack.end - sizeof(Context);
	cp->mepc = (uintptr_t)entry;
	cp->mstatus = 0x1800;
	cp->GPR2 = (uintptr_t)arg;	// a0
  return cp;
}

// 这个函数用来触发自陷，存入的a7是错误码，用来识别yield事件，然后就会进入__am_asm_trap
void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
