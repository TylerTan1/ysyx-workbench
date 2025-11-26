# YSYX Workbench - Nebula Core RISC-V Implementation

## Overview

This repository contains my implementation of the "One Student One Chip" (一生一芯) project, a comprehensive RISC-V processor design and verification framework. The project was developed from **February 2025 to August 2025** as part of the YSYX program.

**Project Website**: https://ysyx.oscc.cc/

> **Note**: This repository is forked from the original [OSCPU/ysyx-workbench](https://github.com/OSCPU/ysyx-workbench) with significant enhancements and custom implementations.

## Project Structure

### 🚀 Core Components

#### **nebula-core** - Custom RTL-level RISC-V Processor
- **Complete RISC-V 32I ISA implementation** in Verilog
- **Advanced features**:
  - Exception handling mechanism
  - Process context switching support
  - Integrated terminal debugger with:
    - Instruction-level trace
    - Memory access trace
    - Difftest functionality
- **Verification**: Passes comprehensive test programs and can run RT-Thread and other operating systems
- **Peripheral integration**: VGA display and keyboard controllers
- **Demo applications**: Capable of running games like Super Mario

#### **nemu** - Enhanced RISC-V Instruction Set Simulator
- **Complete RISC-V 32I ISA emulation** in C
- **Enhanced features**:
  - Custom-built internal debugger
  - Exception handling instructions
  - Modified source code with improvements
- **Verification**: Passes all standard tests and supports RT-Thread OS

#### **nv-board** - NJU Virtual FPGA Development Board
- Virtual development environment supporting project development and testing

#### **abstract-machine** - Hardware Abstraction Layer
- Minimal, modularized, and machine-independent hardware abstraction layer
- **Custom modifications**: Adapted to support bare-metal execution on nebula-core
- Enables direct program execution on the custom processor

## Technical Highlights

### RTL Implementation
- **Verilog-based processor design** from ground up
- **Verilator compilation**: RTL code compiled to C++ for simulation
- **Exception handling**: Robust interrupt and exception management
- **Process management**: Full context switching capabilities

### Verification & Testing
- **Comprehensive test suite** covering all RISC-V 32E instructions
- **OS compatibility**: Successfully runs RT-Thread operating system
- **Peripheral testing**: Functional VGA and keyboard interfaces

### Debugging Capabilities
- **Dual debugger system**:
  - NEMU internal debugger
  - Nebula-core integrated terminal debugger
- **Advanced tracing**:
  - Instruction-level execution trace
  - Comprehensive memory access monitoring
  - Difftest for verification against reference models

### Prerequisites
- Verilator (for RTL simulation)
- Standard C/C++ development tools

## Project Timeline
- **February 2025**: Project initiation and environment setup
- **March-May 2025**: RISC-V ISA implementation and basic verification
- **June 2025**: Exception handling and process switching
- **July 2025**: Peripheral integration and debugger development
- **August 2025**: System integration, testing, and demonstration

## Acknowledgments

This project is based on the **"Yisheng Yixin" (一生一芯)** initiative, which aims to educate students in full-stack computer system design. Special thanks to the OSCPU team for providing the foundational workbench framework.

## License

This project follows the original repository's licensing terms. Please refer to the individual component directories for specific license information.

---

**Developer**: Tyler Tan
**Project Duration**: February 2025 - August 2025  
**Institution**: YSYX Program
