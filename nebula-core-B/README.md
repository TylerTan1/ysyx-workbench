### Nebula-core is a riscv32 processor core written by TylerTan

.
├── Kconfig
├── Makefile
├── README.md
├── csrc
│   ├── filelist.mk
│   ├── include
│   │   ├── color.h
│   │   ├── common.h
│   │   ├── cpu.h
│   │   ├── memory.h
│   │   ├── monitor.h
│   │   └── utils.h
│   ├── main.cpp
│   └── src
│       ├── cpu
│       ├── memory
│       ├── monitor
│       └── utils
├── include
│   ├── config
│   │   ├── auto.conf
│   │   ├── auto.conf.cmd
│   │   ├── difftest.h
│   │   ├── ftrace.h
│   │   ├── itrace.h
│   │   ├── mtrace
│   │   └── trace.h
│   └── generated
│       └── autoconf.h
├── scripts
│   ├── build.mk
│   ├── config.mk
│   └── native.mk
├── tags
├── tools
│   ├── capstone
│   │   ├── Makefile
│   │   └── repo
│   └── kconfig
│       ├── Makefile
│       ├── build
│       ├── conf.c
│       ├── confdata.c
│       ├── expr.c
│       ├── expr.h
│       ├── lexer.l
│       ├── list.h
│       ├── lkc.h
│       ├── lkc\_proto.h
│       ├── lxdialog
│       ├── mconf.c
│       ├── menu.c
│       ├── parser.y
│       ├── preprocess.c
│       ├── symbol.c
│       └── util.c
└── vsrc
    ├── filelist.mk
    ├── riscv.v
    ├── src
    │   ├── alu.v
    │   ├── alu\_memio\_handle.v
    │   ├── alu\_result\_handle.v
    │   ├── csr\_regs.v
    │   ├── ctrl\_unit.v
    │   ├── extend.v
    │   ├── mux\_pc\_srca.v
    │   ├── mux\_pc\_srcb.v
    │   ├── mux\_srca.v
    │   ├── mux\_srcb.v
    │   ├── next\_pc\_mux.v
    │   ├── pc\_plus.v
    │   ├── pc\_reg.v
    │   └── regs.v
    └── templates
        ├── dff.v
        └── mux.v

22 directories, 56 files
