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
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[0U] = 0x200000000ULL;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0U] = 0x10U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1U] = 8U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[3U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0U] = 0x1000000000ULL;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[3U] = 0x200000004ULL;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0U] = 0x80U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1U] = 0x40U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2U] = 0x20U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3U] = 0x10U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[4U] = 8U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[5U] = 4U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[7U] = 1U;
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

void Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ num_byte, CData/*0:0*/ sext, IData/*31:0*/ &pmem_read__Vfuncrtn);

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
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->inst >> 0x14U)) | 
              (0x1fU & (vlSelf->inst >> 7U))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->inst << 4U)) | ((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))));
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x15U) 
           | ((0x100000U & (vlSelf->inst >> 0xbU)) 
              | ((0xff000U & vlSelf->inst) | ((0x800U 
                                               & (vlSelf->inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U))))));
    vlSelf->__VdfgTmp_h896f813e__0 = ((0x1eU >= (0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0x14U) 
                                                    - (IData)(1U))))
                                       ? vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                      [(0x1fU & ((vlSelf->inst 
                                                  >> 0x14U) 
                                                 - (IData)(1U)))]
                                       : 0U);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h6643ae7e__0 
        = (IData)((0x34000000U == (0xff000000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h601a8f48__0 
        = (IData)((0x30000000U == (0xff000000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h5dbc5f53__0 
        = (IData)((0x1000U == (0x40007000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hff25f348__0 
        = (IData)((0x23U == (0x63U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0 
        = (IData)((0x63U == (0x63U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hfcf102ab__0 
        = (IData)((3U == (0x63U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data));
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->ysyx_25040101_riscv__DOT__rs2_data = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[5U] = 0U;
        vlSelf->__VdfgTmp_h5205a0bc__0 = 0U;
    } else {
        vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
            = vlSelf->__VdfgTmp_h896f813e__0;
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[5U] 
            = vlSelf->__VdfgTmp_h896f813e__0;
        vlSelf->__VdfgTmp_h5205a0bc__0 = (0x1fU & vlSelf->__VdfgTmp_h896f813e__0);
    }
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h6643ae7e__0) 
           & (0x100000U == (0xf00000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h6643ae7e__0) 
           & (0x200000U == (0xf00000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h601a8f48__0) 
           & (0U == (0xf00000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h601a8f48__0) 
           & (0x500000U == (0xf00000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hff25f348__0) 
           & (0x14U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hff25f348__0) 
           & (0U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hff25f348__0) 
           & (0x10U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0) 
           & (0xcU == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0) 
           & (4U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0) 
           & (0U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0) 
           & (0x10U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hfcf102ab__0) 
           & (0x14U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hfcf102ab__0) 
           & (0U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hfcf102ab__0) 
           & (0x10U == (0x1cU & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[5U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs2_data));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h5205a0bc__0)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2U] 
        = vlSelf->__VdfgTmp_h5205a0bc__0;
    vlSelf->ysyx_25040101_riscv__DOT__csr_data = ((
                                                   (- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc))) 
                                                   & vlSelf->ysyx_25040101_riscv__DOT__mepc) 
                                                  | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause))) 
                                                      & vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause) 
                                                     | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus))) 
                                                         & vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus) 
                                                        | ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec))) 
                                                           & vlSelf->ysyx_25040101_riscv__DOT__mtvec))));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc))) 
            & vlSelf->ysyx_25040101_riscv__DOT__mepc) 
           | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause))) 
               & vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause) 
              | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus))) 
                  & vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus) 
                 | ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec))) 
                    & vlSelf->ysyx_25040101_riscv__DOT__mtvec))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S) 
           & (0x2000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S) 
           & (0x1000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (IData)((0x4000U == (0x40007000U & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (IData)((0x7000U == (0x40007000U & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (IData)((0x6000U == (0x40007000U & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (IData)((0x3000U == (0x40007000U & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (IData)((0x2000U == (0x40007000U & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc63158b9__0 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h5dbc5f53__0));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hf3be9605__0 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R) 
           & (0x5000U == (0x7000U & vlSelf->inst)));
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
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
           & (0x1000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
           & (0x4000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
           & (0x5000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
           & (0x6000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
           & (0x7000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
           & (0x2000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
           & (0x1000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load) 
           & (0x2000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load) 
           & (0x4000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load) 
           & (0x5000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load) 
           & (0x1000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load) 
              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
                 | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0x4000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0x7000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0x6000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0x3000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0x2000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h5dbc5f53__0));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h312cb554__0 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
           & (0x5000U == (0x7000U & vlSelf->inst)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_data)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add 
        = ((~ (vlSelf->inst >> 0x1eU)) & (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc63158b9__0));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc63158b9__0) 
           & (vlSelf->inst >> 0x1eU));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl 
        = ((~ (vlSelf->inst >> 0x1eU)) & (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hf3be9605__0));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hf3be9605__0) 
           & (vlSelf->inst >> 0x1eU));
    vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl = (
                                                   ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc) 
                                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl)));
    vlSelf->is_ebreak = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0) 
                         & (IData)((0x100000U == (0xffff8f80U 
                                                  & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__is_ecall = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0) 
                                                  & (IData)(
                                                            (0U 
                                                             == 
                                                             (0xffff8f80U 
                                                              & vlSelf->inst))));
    vlSelf->ysyx_25040101_riscv__DOT__csr_wen = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs) 
                                                 | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw));
    vlSelf->__VdfgTmp_h983fc119__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor) 
                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori));
    vlSelf->__VdfgTmp_hbae26c43__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi) 
                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and));
    vlSelf->__VdfgTmp_h4fa9a3b7__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or) 
                                      | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori) 
                                         | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs)));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h01f54624__0 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc) 
              | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui)));
    vlSelf->ysyx_25040101_riscv__DOT__rd_unsigned_less_ctrl 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu));
    vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti));
    vlSelf->__VdfgTmp_h1aa0ff7e__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli) 
                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli 
        = ((~ (vlSelf->inst >> 0x1eU)) & (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h312cb554__0));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h312cb554__0) 
           & (vlSelf->inst >> 0x1eU));
    vlSelf->__VdfgTmp_h2083fca3__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi) 
                                      | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
                                         | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc) 
                                            | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
                                                  | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw) 
                                                     | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw) 
                                                        | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add) 
                                                           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu) 
                                                              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh) 
                                                                 | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu) 
                                                                    | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb) 
                                                                       | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh) 
                                                                          | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb) 
                                                                             | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw)))))))))))))));
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
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne) 
              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub) 
                 | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq) 
                    | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge) 
                       | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt) 
                          | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu) 
                             | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu) 
                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu) 
                                   | (IData)(vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl))))))))));
    vlSelf->__VdfgTmp_h4c8f29b4__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli) 
                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl));
    vlSelf->__VdfgTmp_he55eb7e7__0 = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai) 
                                      | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra));
    vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl = (
                                                   ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll) 
                                                           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra) 
                                                              | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl))) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h01f54624__0) 
                                                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw) 
                                                                  | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw) 
                                                                     | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu) 
                                                                        | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai) 
                                                                           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi) 
                                                                              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb) 
                                                                                | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti)))))))))))))))))))));
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli) 
              | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli)));
    vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl = (((IData)(vlSelf->__VdfgTmp_h983fc119__0) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h4fa9a3b7__0) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->__VdfgTmp_hbae26c43__0) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->__VdfgTmp_h1aa0ff7e__0) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->__VdfgTmp_h4c8f29b4__0) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->__VdfgTmp_he55eb7e7__0) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->__VdfgTmp_h2083fca3__0))))))));
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
              [5U]));
    if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt) {
        vlSelf->ysyx_25040101_riscv__DOT__imm = (0x3fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U));
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[0U] 
            = (0x3fU & (vlSelf->inst >> 0x14U));
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[4U] 
            = (0x3fU & (vlSelf->inst >> 0x14U));
    } else {
        vlSelf->ysyx_25040101_riscv__DOT__imm = (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I))) 
                                                  & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type) 
                                                 | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S))) 
                                                     & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type) 
                                                    | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B))) 
                                                        & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type) 
                                                       | ((0xfffff000U 
                                                           & ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U))) 
                                                              & vlSelf->inst)) 
                                                          | ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J))) 
                                                             & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type)))));
        vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[0U] 
            = (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I))) 
                & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type) 
               | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S))) 
                   & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type) 
                  | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B))) 
                      & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type) 
                     | ((0xfffff000U & ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U))) 
                                        & vlSelf->inst)) 
                        | ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J))) 
                           & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type)))));
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[4U] 
            = (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I))) 
                & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type) 
               | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S))) 
                   & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type) 
                  | (((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B))) 
                      & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type) 
                     | ((0xfffff000U & ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U))) 
                                        & vlSelf->inst)) 
                        | ((- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J))) 
                           & vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type)))));
    }
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
           == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
              == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm)));
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040101_riscv__DOT__srcb_data = vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           ^ vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           | vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           & vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25040101_riscv__DOT__srca_data, vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[4U] 
        = VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25040101_riscv__DOT__srca_data, vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[5U] 
        = VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_25040101_riscv__DOT__srca_data, vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift 
        = VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_25040101_riscv__DOT__srca_data, vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift 
        = VL_SHIFTR_III(32,32,32, vlSelf->ysyx_25040101_riscv__DOT__srca_data, vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift 
        = VL_SHIFTL_III(32,32,32, vlSelf->ysyx_25040101_riscv__DOT__srca_data, vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           & vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           | vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor 
        = (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
           ^ vlSelf->ysyx_25040101_riscv__DOT__srcb_data);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__srca_data)) 
                             + ((QData)((IData)((vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                                 ^ 
                                                 (- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub)))))) 
                                + (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub)))));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[4U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2U] 
        = (0x2000000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1U] 
        = (0x4000000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0U] 
        = (0x8000000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[7U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result)));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[6U] 
        = (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[7U] 
        = (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result);
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
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl) 
                          == vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_25040101_riscv__DOT__alu_result = vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
    if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, 1U, 0U, vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__0__Vfuncout);
        vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
            = vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__0__Vfuncout;
    } else if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, 1U, 1U, vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
            = vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__1__Vfuncout;
    } else if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, 2U, 0U, vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__2__Vfuncout);
        vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
            = vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__2__Vfuncout;
    } else if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, 2U, 1U, vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__3__Vfuncout);
        vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
            = vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__3__Vfuncout;
    } else if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, 4U, 0U, vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__4__Vfuncout);
        vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
            = vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__4__Vfuncout;
    } else {
        vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
            = vlSelf->ysyx_25040101_riscv__DOT__alu_result;
    }
    vlSelf->ysyx_25040101_riscv__DOT__csr_wdata = 0U;
    if ((1U & (~ (IData)(vlSelf->ysyx_25040101_riscv__DOT__rd_unsigned_less_ctrl)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl)))) {
            if (vlSelf->ysyx_25040101_riscv__DOT__csr_wen) {
                vlSelf->ysyx_25040101_riscv__DOT__csr_wdata 
                    = vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data;
            }
        }
    }
    vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less 
        = (1U & ((vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data 
                  >> 0x1fU) ^ (((vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                                 >> 0x1fU) != (vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                               >> 0x1fU)) 
                               & ((1U & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                                 >> 0x1fU))) 
                                  != (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                                      >> 0x1fU)))));
    vlSelf->ysyx_25040101_riscv__DOT__rd_data = vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data;
    if (vlSelf->ysyx_25040101_riscv__DOT__rd_unsigned_less_ctrl) {
        vlSelf->ysyx_25040101_riscv__DOT__rd_data = 
            (1U & (~ (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                              >> 0x20U))));
    } else if (vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl) {
        vlSelf->ysyx_25040101_riscv__DOT__rd_data = vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less;
    } else if (vlSelf->ysyx_25040101_riscv__DOT__csr_wen) {
        vlSelf->ysyx_25040101_riscv__DOT__rd_data = vlSelf->ysyx_25040101_riscv__DOT__csr_data;
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm 
        = ((((((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt) 
                 & (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less)) 
                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu) 
                   & (~ (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                 >> 0x20U))))) | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge) 
                                                  & (~ (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less)))) 
              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu) 
                 & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                            >> 0x20U)))) | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne) 
                                            & (0U != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data))) 
            | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq) 
               & (~ (IData)((0U != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data))))) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm) 
           == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm) 
              == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm) 
                       == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm) 
                          == vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb = vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_25040101_riscv__DOT__pc_srca 
           + vlSelf->ysyx_25040101_riscv__DOT__pc_srcb);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
        = (vlSelf->ysyx_25040101_riscv__DOT__pc_srca 
           + vlSelf->ysyx_25040101_riscv__DOT__pc_srcb);
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result))));
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result));
    vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result);
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
    vlSelf->ysyx_25040101_riscv__DOT__raw_next_pc = vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_25040101_riscv__DOT__next_pc = vlSelf->ysyx_25040101_riscv__DOT__raw_next_pc;
    if (vlSelf->ysyx_25040101_riscv__DOT__is_ecall) {
        vlSelf->ysyx_25040101_riscv__DOT__next_pc = vlSelf->ysyx_25040101_riscv__DOT__mtvec;
    } else if (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0) 
                & (IData)((0x30200000U == (0xffff8f80U 
                                           & vlSelf->inst))))) {
        vlSelf->ysyx_25040101_riscv__DOT__next_pc = vlSelf->ysyx_25040101_riscv__DOT__mepc;
    }
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root___eval_stl(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
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
    vlSelf->ysyx_25040101_riscv__DOT__raw_next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__rd_unsigned_less_ctrl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__pc_srca = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__pc_srcb = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__srca_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__srcb_data = VL_RAND_RESET_I(32);
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm = VL_RAND_RESET_I(1);
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
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h01f54624__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hff25f348__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hfcf102ab__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc63158b9__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h5dbc5f53__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hf3be9605__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h312cb554__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type = VL_RAND_RESET_I(32);
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
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h6643ae7e__0 = 0;
    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h601a8f48__0 = 0;
    vlSelf->__VdfgTmp_h896f813e__0 = 0;
    vlSelf->__VdfgTmp_h983fc119__0 = 0;
    vlSelf->__VdfgTmp_h4fa9a3b7__0 = 0;
    vlSelf->__VdfgTmp_hbae26c43__0 = 0;
    vlSelf->__VdfgTmp_h1aa0ff7e__0 = 0;
    vlSelf->__VdfgTmp_h4c8f29b4__0 = 0;
    vlSelf->__VdfgTmp_he55eb7e7__0 = 0;
    vlSelf->__VdfgTmp_h2083fca3__0 = 0;
    vlSelf->__VdfgTmp_h5205a0bc__0 = 0;
    vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__3__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__4__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
