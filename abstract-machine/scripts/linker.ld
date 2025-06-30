/* 表示程序入口是_start */
ENTRY(_start)
/* 定义两个程序头Header，一个是text，一个是data */
PHDRS { text PT_LOAD; data PT_LOAD; }

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
	/* . = 设置的当前pc值 */
  . = _pmem_start + _entry_offset;
	/* 定义text代码段 */
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
	/* 定义只读数据段 */
  .rodata : {
    *(.rodata*)
  }
	/* 定义数据段 */
  .data : {
    *(.data)
  } : data
  edata = .;
  _data = .;
	/* 定义未初始化数据段 */
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
	/* 定义栈 */
	/* 栈顶对齐4KB */
  _stack_top = ALIGN(0x1000);
	/* 分配32KB */
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
	/* 堆顶对齐4KB */
  _heap_start = ALIGN(0x1000);
}
