# Nebula-Core: A RISC-V 32-bit Processor Core

Nebula-Core is a comprehensive RISC-V 32-bit processor implementation designed for educational and research purposes. This project provides a complete hardware-software co-simulation environment built with industry-standard tools.

## Overview

Nebula-Core implements the RISC-V 32-bit instruction set architecture with support for:
- Full 32-bit RISC-V integer instruction set
- Memory operations with byte, halfword, and word access
- Control flow instructions including branches and jumps
- CSR (Control and Status Register) operations
- System calls (ECALL) and exceptions
- Hardware breakpoints (EBREAK)

## Project Structure

```
nebula-core/
├── csrc/                    # C++ simulation framework
│   ├── include/            # Header files
│   │   ├── common.h        # Common definitions and simulation context
│   │   ├── cpu.h          # CPU interface definitions
│   │   ├── memory.h       # Memory interface
│   │   ├── monitor.h      # Simulation monitor
│   │   └── utils.h        # Utility functions
│   ├── src/               # Implementation files
│   │   ├── cpu/           # CPU simulation components
│   │   ├── memory/        # Memory system implementation
│   │   ├── monitor/       # Simulation control and monitoring
│   │   └── utils/         # Utility implementations
│   └── main.cpp           # Main simulation entry point
├── vsrc/                    # Verilog RTL implementation
│   ├── riscv.v            # Top-level processor module
│   ├── src/               # Core components
│   │   ├── alu.v          # Arithmetic Logic Unit
│   │   ├── ctrl_unit.v    # Control unit (instruction decoder)
│   │   ├── regs.v         # Register file
│   │   ├── csr_regs.v     # Control and Status Registers
│   │   ├── pc_reg.v       # Program counter
│   │   └── extend.v       # Immediate value extension
│   └── templates/         # Reusable hardware templates
├── include/                 # Generated configuration headers
│   ├── config/            # Configuration files
│   └── generated/         # Auto-generated headers
├── tools/                   # External tools and dependencies
│   ├── capstone/          # Disassembly library for RISC-V
│   └── kconfig/           # Configuration system
└── scripts/                 # Build system scripts
    ├── build.mk           # Main build rules
    ├── config.mk          # Configuration management
    └── native.mk          # Native compilation rules
```

## Key Features

### Hardware Implementation
- **Modular Design**: Clean separation between ALU, control unit, register file, and memory interface
- **Pipeline Architecture**: Efficient instruction execution pipeline
- **Memory Interface**: Support for byte, halfword, and word operations with proper sign extension
- **CSR Support**: Complete Control and Status Register implementation for system-level operations

### Simulation Framework
- **Verilator Integration**: Industry-standard Verilog simulation using Verilator
- **FST Waveform Generation**: High-performance waveform tracing for debugging
- **Memory System**: Flexible memory interface supporting various memory models
- **Trace Support**: Comprehensive instruction and data tracing capabilities

### Build System
- **Kconfig Configuration**: Linux kernel-style configuration system
- **Automated Dependency Management**: Automatic handling of external tools (Capstone disassembler)
- **Cross-Platform Support**: Designed to work on various development environments

## Prerequisites

- **Verilator**: Version 4.0 or higher for Verilog simulation
- **GCC/Clang**: Modern C++ compiler with C++17 support
- **Git**: For dependency management
- **Make**: Build system
- **Kconfig Tools**: Configuration system (included in tools/)

## Quick Start

### 1. Configuration
```bash
make menuconfig    # Configure the processor features
```

### 2. Build
```bash
make sim           # Build the simulation environment
```

### 3. Run Simulation
```bash
./obj_dir/Vysyx_25040101_riscv <program_file>  # Run with your RISC-V program
```

## Usage

The processor accepts RISC-V 32-bit binary programs and provides:
- Instruction execution tracing
- Register state monitoring
- Memory access tracking
- Waveform generation for detailed analysis

### Simulation Output
- **Console Output**: Program execution results and debug information
- **Waveform Files**: FST format waveforms for GTKWave or similar tools
- **Trace Logs**: Detailed instruction and data traces

## Development

### Adding New Instructions
1. Update the control unit in `vsrc/src/ctrl_unit.v`
2. Implement ALU operations in `vsrc/src/alu.v`
3. Add simulation support in `csrc/src/cpu/`

### Memory System Extension
- Memory interface is defined in `vsrc/src/alu_memio_handle.v`
- Add new memory types by extending the memory controller

### Debugging
- Use `make sim` to generate waveform files
- Open `obj_dir/waveform.fst` with GTKWave for visual debugging
- Enable trace features through Kconfig for detailed logging

## Configuration Options

The project uses Kconfig for feature configuration:
- **Trace Support**: Enable instruction/data tracing
- **Memory Size**: Configure available memory
- **Debug Features**: Enable various debugging aids

## Contributing

This is an educational project designed for learning computer architecture and hardware design. Contributions are welcome in areas such as:
- Additional RISC-V instruction support
- Performance optimizations
- Enhanced debugging features
- Documentation improvements

## License

This project is developed for educational purposes as part of computer architecture coursework.

## Technical Details

### Supported Instructions
- **Arithmetic**: ADD, SUB, ADDI, LUI, AUIPC
- **Logical**: AND, OR, XOR, ANDI, ORI, XORI
- **Shift**: SLL, SRL, SRA, SLLI, SRLI, SRAI
- **Memory**: LB, LH, LW, LBU, LHU, SB, SH, SW
- **Branch**: BEQ, BNE, BLT, BGE, BLTU, BGEU
- **Jump**: JAL, JALR
- **System**: ECALL, EBREAK, MRET
- **CSR**: CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI

### Performance Characteristics
- Single-cycle execution for most instructions
- Efficient branch prediction through immediate calculation
- Optimized memory access with proper alignment checking

---

**Author**: TylerTan  
**Project**: RISC-V 32-bit Processor Core Implementation  
**Purpose**: Educational processor design for computer architecture study
