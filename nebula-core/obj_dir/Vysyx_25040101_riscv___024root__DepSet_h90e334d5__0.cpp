// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040101_riscv.h for the primary calling header

#include "Vysyx_25040101_riscv__pch.h"
#include "Vysyx_25040101_riscv__Syms.h"
#include "Vysyx_25040101_riscv___024root.h"

extern "C" unsigned int pmem_read(unsigned int raddr, int num_byte, svBit sext);

VL_INLINE_OPT void Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ num_byte, CData/*0:0*/ sext, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP\n"); );
    // Body
    unsigned int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int num_byte__Vcvt;
    for (size_t num_byte__Vidx = 0; num_byte__Vidx < 1; ++num_byte__Vidx) num_byte__Vcvt = num_byte;
    svBit sext__Vcvt;
    for (size_t sext__Vidx = 0; sext__Vidx < 1; ++sext__Vidx) sext__Vcvt = sext;
    unsigned int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, num_byte__Vcvt, sext__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(unsigned int waddr, unsigned int data, int num_byte);

VL_INLINE_OPT void Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ data, IData/*31:0*/ num_byte) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_write_TOP\n"); );
    // Body
    unsigned int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    unsigned int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int num_byte__Vcvt;
    for (size_t num_byte__Vidx = 0; num_byte__Vidx < 1; ++num_byte__Vidx) num_byte__Vcvt = num_byte;
    pmem_write(waddr__Vcvt, data__Vcvt, num_byte__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__ico(Vysyx_25040101_riscv___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040101_riscv___024root___eval_triggers__ico(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25040101_riscv___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__act(Vysyx_25040101_riscv___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040101_riscv___024root___eval_triggers__act(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25040101_riscv___024root___dump_triggers__act(vlSelf);
    }
#endif
}
