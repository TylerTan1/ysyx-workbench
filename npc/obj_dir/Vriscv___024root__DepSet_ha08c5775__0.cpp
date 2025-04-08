// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "Vriscv__pch.h"
#include "Vriscv__Syms.h"
#include "Vriscv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv___024root___dump_triggers__ico(Vriscv___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv___024root___eval_triggers__ico(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv___024root___dump_triggers__act(Vriscv___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv___024root___eval_triggers__act(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv___024root___dump_triggers__act(vlSelf);
    }
#endif
}
