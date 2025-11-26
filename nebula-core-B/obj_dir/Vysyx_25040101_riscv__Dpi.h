// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25040101_RISCV__DPI_H_
#define VERILATED_VYSYX_25040101_RISCV__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/src/alu_memio_handle.v:20:39
    extern unsigned int pmem_read(unsigned int raddr, int num_byte, svBit sext);
    // DPI import at vsrc/src/alu_memio_handle.v:21:31
    extern void pmem_write(unsigned int waddr, unsigned int data, int num_byte);

#ifdef __cplusplus
}
#endif

#endif  // guard
