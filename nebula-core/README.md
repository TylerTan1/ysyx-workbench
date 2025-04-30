### Nebula-core is a riscv32 processor core written by TylerTan

nebula-core
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
│   └── generated
├── scripts
│   ├── build.mk
│   ├── config.mk
│   └── native.mk
├── tags
├── tools
│   ├── capstone
│   └── kconfig
└── vsrc
    ├── filelist.mk
    ├── riscv.v
    ├── src
    │   ├── alu.v
    │   ├── ctrl\_unit.v
    │   ├── extend.v
    │   ├── mux\_pc\_srca.v
    │   ├── mux\_pc\_srcb.v
    │   ├── mux\_srca.v
    │   ├── mux\_srcb.v
    │   ├── pc\_plus.v
    │   ├── pc\_reg.v
    │   └── regs.v
    └── templates
        ├── dff.v
        └── mux.v
