### Nebula-core is a riscv32 processor core written by TylerTan

nebula-core
├── Kconfig
├── Makefile
├── README
├── csrc
│   ├── include
│   │   ├── common.h
│   │   ├── cpu.h
│   │   ├── memory.h
│   │   └── monitor.h
│   ├── main.cpp
│   └── src
│       ├── cpu
│       │   ├── cpu.cpp
│       │   ├── disarm.cpp
│       │   └── disarm.h
│       ├── memory
│       │   ├── memory.cpp
│       │   └── regs.cpp
│       └── monitor
│           ├── monitor.cpp
│           ├── sdb.cpp
│           └── sdb.h
├── tags
└── vsrc
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
