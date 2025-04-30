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
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[1U] = 4ULL;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4U] = 0x10U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[0U] = 0x200000000ULL;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0U] = 0x200000004ULL;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[1U] = 0U;
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

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___stl_sequent__TOP__0(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->regs_data[0U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0U];
    vlSelf->regs_data[1U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [1U];
    vlSelf->regs_data[2U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [2U];
    vlSelf->regs_data[3U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [3U];
    vlSelf->regs_data[4U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [4U];
    vlSelf->regs_data[5U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [5U];
    vlSelf->regs_data[6U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [6U];
    vlSelf->regs_data[7U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [7U];
    vlSelf->regs_data[8U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [8U];
    vlSelf->regs_data[9U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [9U];
    vlSelf->regs_data[0xaU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0xaU];
    vlSelf->regs_data[0xbU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0xbU];
    vlSelf->regs_data[0xcU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0xcU];
    vlSelf->regs_data[0xdU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0xdU];
    vlSelf->regs_data[0xeU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0xeU];
    vlSelf->regs_data[0xfU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0xfU];
    vlSelf->regs_data[0x10U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x10U];
    vlSelf->regs_data[0x11U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x11U];
    vlSelf->regs_data[0x12U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x12U];
    vlSelf->regs_data[0x13U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x13U];
    vlSelf->regs_data[0x14U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x14U];
    vlSelf->regs_data[0x15U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x15U];
    vlSelf->regs_data[0x16U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x16U];
    vlSelf->regs_data[0x17U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x17U];
    vlSelf->regs_data[0x18U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x18U];
    vlSelf->regs_data[0x19U] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x19U];
    vlSelf->regs_data[0x1aU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x1aU];
    vlSelf->regs_data[0x1bU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x1bU];
    vlSelf->regs_data[0x1cU] = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
        [0x1cU];
    vlSelf->regs_data[0x1dU] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                                         [0x1eU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                                          [0x1dU]))));
    vlSelf->regs_data[0x1eU] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                                          [0x1eU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                                           [0x1dU]))) 
                                        >> 0x20U));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | ((0x100000U 
                                                 & (vlSelf->inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->inst 
                                                            >> 0x14U)))))))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x400U 
                                                 & (vlSelf->inst 
                                                    << 3U)) 
                                                | ((0x3f0U 
                                                    & (vlSelf->inst 
                                                       >> 0x15U)) 
                                                   | (0xfU 
                                                      & (vlSelf->inst 
                                                         >> 8U))))))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 7U)))))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4U] 
        = (0x1000000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelf->inst 
                                                 >> 0x14U)))));
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->ysyx_25040101_riscv__DOT__rs2_data = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2U] = 0U;
    } else if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 0x14U) 
                                   - (IData)(1U))))) {
        vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
            = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0x14U) - (IData)(1U)))];
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2U] 
            = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0x14U) - (IData)(1U)))];
    } else {
        vlSelf->ysyx_25040101_riscv__DOT__rs2_data = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2U] = 0U;
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    if ((0U == (0x1fU & (vlSelf->inst >> 0xfU)))) {
        vlSelf->ysyx_25040101_riscv__DOT__rs1_data = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[2U] = 0U;
    } else if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 0xfU) 
                                   - (IData)(1U))))) {
        vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
            = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0xfU) - (IData)(1U)))];
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[0U] 
            = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0xfU) - (IData)(1U)))];
        vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[2U] 
            = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0xfU) - (IData)(1U)))];
    } else {
        vlSelf->ysyx_25040101_riscv__DOT__rs1_data = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[2U] = 0U;
    }
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x15U) 
           | ((0x100000U & (vlSelf->inst >> 0xbU)) 
              | ((0xff000U & vlSelf->inst) | ((0x800U 
                                               & (vlSelf->inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U))))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xbU) 
           | ((0x400U & (vlSelf->inst << 3U)) | ((0x3f0U 
                                                  & (vlSelf->inst 
                                                     >> 0x15U)) 
                                                 | (0xfU 
                                                    & (vlSelf->inst 
                                                       >> 8U)))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->inst >> 0x14U)) | 
              (0x1fU & (vlSelf->inst >> 7U))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0 
        = (IData)((0x23U == (0x63U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0 
        = (IData)((3U == (0x63U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0 
        = (IData)((0x63U == (0x63U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs2_data));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
           & (0x14U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
           & (0x10U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
           & (0x14U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
           & (0x10U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
           & (0xcU == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
           & (4U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->is_ebreak = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
                         & (IData)((0U == (0x40007000U 
                                           & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
           == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
           == vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
              == vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                       == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__pc_srca = vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__imm_type = ((
                                                   ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
                                                    | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                                                        & (0U 
                                                           == 
                                                           (0x1cU 
                                                            & vlSelf->inst))) 
                                                       | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
                                                          | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                                                       & (0U 
                                                          == 
                                                          (0x1cU 
                                                           & vlSelf->inst))) 
                                                      << 3U) 
                                                     | ((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                                                          & (0U 
                                                             == 
                                                             (0x1cU 
                                                              & vlSelf->inst))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
                                                             | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc)) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J)))));
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr));
    vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi) 
                                                  | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
                                                     | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc) 
                                                        | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                                                           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui)))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hceffc67e__0 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc) 
              | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui)));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
           == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
              == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
              == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
              == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
              == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
                       == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
                          == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
                          == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
                          == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm_type) 
                          == vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040101_riscv__DOT__imm = vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl) 
           == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl = (
                                                   ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc) 
                                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
           == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl = (
                                                   ((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hceffc67e__0));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040101_riscv__DOT__imm;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040101_riscv__DOT__imm;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl) 
           == vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl) 
                       == vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__srca_data = vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
           == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl) 
                       == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb = vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
                       == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__srcb_data = vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__pc_srca 
           + vlSelf->ysyx_25040101_riscv__DOT__pc_srcb);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
        = (vlSelf->ysyx_25040101_riscv__DOT__pc_srca 
           + vlSelf->ysyx_25040101_riscv__DOT__pc_srcb);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           + vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           + vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           + vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result))));
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result));
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                       == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__rd_data = vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                       == vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                          == vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__next_pc = vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out;
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_stl(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
    VL_RAND_RESET_W(992, vlSelf->regs_data);
    vlSelf->is_ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__pc_srca = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__imm_type = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040101_riscv__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__srca_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__srcb_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__reg_a0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__pc_reg1__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_he253d8b9__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hceffc67e__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
