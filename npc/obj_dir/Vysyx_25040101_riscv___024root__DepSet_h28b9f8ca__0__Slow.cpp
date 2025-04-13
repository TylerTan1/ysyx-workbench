// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040101_riscv.h for the primary calling header

#include "Vysyx_25040101_riscv__pch.h"
#include "Vysyx_25040101_riscv___024root.h"

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_static(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_initial__TOP(Vysyx_25040101_riscv___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_initial(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_initial\n"); );
    // Body
    Vysyx_25040101_riscv___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_initial__TOP(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[0U] = 0x131U;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[1U] = 0x130U;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[0U] = 0x13U;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[1U] = 0x13U;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[0U] = 0x9893U;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[1U] = 0x9813U;
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_final(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__stl(Vysyx_25040101_riscv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25040101_riscv___024root___eval_phase__stl(Vysyx_25040101_riscv___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_settle(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vysyx_25040101_riscv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/riscv.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25040101_riscv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__stl(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25040101_riscv___024root___ico_sequent__TOP__0(Vysyx_25040101_riscv___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_stl(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_triggers__stl(Vysyx_25040101_riscv___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25040101_riscv___024root___eval_phase__stl(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25040101_riscv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25040101_riscv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__ico(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__act(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__nba(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___ctor_var_reset(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__srcb_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key = VL_RAND_RESET_I(11);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(7);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__srcb = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
