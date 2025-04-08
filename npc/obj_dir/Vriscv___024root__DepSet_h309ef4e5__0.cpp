// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "Vriscv__pch.h"
#include "Vriscv___024root.h"

VL_INLINE_OPT void Vriscv___024root___ico_sequent__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0x80000U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU)) 
                                                | ((0x7f800U 
                                                    & (vlSelf->inst 
                                                       >> 1U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->inst 
                                                          >> 0xaU)) 
                                                      | (0x3ffU 
                                                         & (vlSelf->inst 
                                                            >> 0x15U)))))))));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | (vlSelf->inst 
                                                >> 0xcU)))));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
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
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 7U)))))));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->inst 
                                                >> 0x14U)))));
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->riscv__DOT__rs2_data = 0U;
        vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] = 0U;
    } else if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 0x14U) 
                                   - (IData)(1U))))) {
        vlSelf->riscv__DOT__rs2_data = vlSelf->riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0x14U) - (IData)(1U)))];
        vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] 
            = vlSelf->riscv__DOT__regs1__DOT__regs[
            (0x1fU & ((vlSelf->inst >> 0x14U) - (IData)(1U)))];
    } else {
        vlSelf->riscv__DOT__rs2_data = 0U;
        vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] = 0U;
    }
    vlSelf->riscv__DOT__rs1_data = ((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0U : ((0x1eU 
                                              >= (0x1fU 
                                                  & ((vlSelf->inst 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                              ? vlSelf->riscv__DOT__regs1__DOT__regs
                                             [(0x1fU 
                                               & ((vlSelf->inst 
                                                   >> 0xfU) 
                                                  - (IData)(1U)))]
                                              : 0U));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | ((0x80000U & (vlSelf->inst >> 0xcU)) | 
              ((0x7f800U & (vlSelf->inst >> 1U)) | 
               ((0x400U & (vlSelf->inst >> 0xaU)) | 
                (0x3ffU & (vlSelf->inst >> 0x15U))))));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | (vlSelf->inst >> 0xcU));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xbU) 
           | ((0x400U & (vlSelf->inst << 3U)) | ((0x3f0U 
                                                  & (vlSelf->inst 
                                                     >> 0x15U)) 
                                                 | (0xfU 
                                                    & (vlSelf->inst 
                                                       >> 8U)))));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->inst >> 0x14U)) | 
              (0x1fU & (vlSelf->inst >> 7U))));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key 
        = ((0x7f0U & (vlSelf->inst << 4U)) | ((0xeU 
                                               & (vlSelf->inst 
                                                  >> 0xbU)) 
                                              | (1U 
                                                 & (vlSelf->inst 
                                                    >> 0x1eU))));
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->riscv__DOT__rs2_data));
    vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key) 
           == vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key) 
              == vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key) 
                       == vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key) 
                          == vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out 
        = vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out;
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                  >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                  >> 4U)) == vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit) 
           | ((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 4U)) == vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                  >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit) 
           | ((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                     >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                              >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 1U)) == vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->riscv__DOT__imm = vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out;
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->riscv__DOT__imm)));
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0U] 
        = vlSelf->riscv__DOT__imm;
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = ((- (IData)(((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                              >> 4U)) == vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 4U)) == vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->riscv__DOT__srcb_data = vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelf->riscv__DOT__rs1_data 
                                             & vlSelf->riscv__DOT__srcb_data))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->riscv__DOT__rs1_data 
                                             | vlSelf->riscv__DOT__srcb_data))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->riscv__DOT__rs1_data & vlSelf->riscv__DOT__srcb_data);
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->riscv__DOT__rs1_data | vlSelf->riscv__DOT__srcb_data);
    vlSelf->riscv__DOT__alu1__DOT__srcb = (vlSelf->riscv__DOT__srcb_data 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                                            >> 5U)))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->riscv__DOT__rs1_data + (vlSelf->riscv__DOT__alu1__DOT__srcb 
                                           + (1U & 
                                              ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                               >> 5U))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->riscv__DOT__rs1_data + (vlSelf->riscv__DOT__alu1__DOT__srcb 
                                           + (1U & 
                                              ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                               >> 5U))));
    vlSelf->riscv__DOT__alu1__DOT__result_add_sub = 
        (vlSelf->riscv__DOT__rs1_data + (vlSelf->riscv__DOT__alu1__DOT__srcb 
                                         + (1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                                  >> 5U))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                              >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->riscv__DOT__rd_data = vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->riscv__DOT__alu1__DOT__result_add_sub)));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->riscv__DOT__alu1__DOT__result_add_sub));
}

void Vriscv___024root___eval_ico(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vriscv___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vriscv___024root___eval_triggers__ico(Vriscv___024root* vlSelf);

bool Vriscv___024root___eval_phase__ico(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vriscv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vriscv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vriscv___024root___eval_act(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vriscv___024root___nba_sequent__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__riscv__DOT__regs1__DOT__regs__v0;
    __Vdlyvset__riscv__DOT__regs1__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__riscv__DOT__regs1__DOT__regs__v31;
    __Vdlyvdim0__riscv__DOT__regs1__DOT__regs__v31 = 0;
    IData/*31:0*/ __Vdlyvval__riscv__DOT__regs1__DOT__regs__v31;
    __Vdlyvval__riscv__DOT__regs1__DOT__regs__v31 = 0;
    CData/*0:0*/ __Vdlyvset__riscv__DOT__regs1__DOT__regs__v31;
    __Vdlyvset__riscv__DOT__regs1__DOT__regs__v31 = 0;
    // Body
    __Vdlyvset__riscv__DOT__regs1__DOT__regs__v0 = 0U;
    __Vdlyvset__riscv__DOT__regs1__DOT__regs__v31 = 0U;
    if (vlSelf->rst) {
        vlSelf->riscv__DOT__regs1__DOT__i = 0x20U;
        vlSelf->pc = 0x80000000U;
        __Vdlyvset__riscv__DOT__regs1__DOT__regs__v0 = 1U;
    } else {
        vlSelf->pc = ((IData)(4U) + vlSelf->pc);
        if (((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
             & (0U != (0x1fU & (vlSelf->inst >> 7U))))) {
            vlSelf->riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0 
                = vlSelf->riscv__DOT__rd_data;
            if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 7U) 
                                    - (IData)(1U))))) {
                __Vdlyvval__riscv__DOT__regs1__DOT__regs__v31 
                    = vlSelf->riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0;
                __Vdlyvset__riscv__DOT__regs1__DOT__regs__v31 = 1U;
                __Vdlyvdim0__riscv__DOT__regs1__DOT__regs__v31 
                    = (0x1fU & ((vlSelf->inst >> 7U) 
                                - (IData)(1U)));
            }
        }
    }
    if (__Vdlyvset__riscv__DOT__regs1__DOT__regs__v0) {
        vlSelf->riscv__DOT__regs1__DOT__regs[0U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[1U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[2U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[3U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[4U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[5U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[6U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[7U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[8U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[9U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0xaU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0xbU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0xcU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0xdU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0xeU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0xfU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x10U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x11U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x12U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x13U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x14U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x15U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x16U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x17U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x18U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x19U] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x1aU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x1bU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x1cU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x1dU] = 0U;
        vlSelf->riscv__DOT__regs1__DOT__regs[0x1eU] = 0U;
    }
    if (__Vdlyvset__riscv__DOT__regs1__DOT__regs__v31) {
        vlSelf->riscv__DOT__regs1__DOT__regs[__Vdlyvdim0__riscv__DOT__regs1__DOT__regs__v31] 
            = __Vdlyvval__riscv__DOT__regs1__DOT__regs__v31;
    }
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->riscv__DOT__rs2_data = 0U;
        vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] = 0U;
    } else if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 0x14U) 
                                   - (IData)(1U))))) {
        vlSelf->riscv__DOT__rs2_data = vlSelf->riscv__DOT__regs1__DOT__regs
            [(0x1fU & ((vlSelf->inst >> 0x14U) - (IData)(1U)))];
        vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] 
            = vlSelf->riscv__DOT__regs1__DOT__regs[
            (0x1fU & ((vlSelf->inst >> 0x14U) - (IData)(1U)))];
    } else {
        vlSelf->riscv__DOT__rs2_data = 0U;
        vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1U] = 0U;
    }
    vlSelf->riscv__DOT__rs1_data = ((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0U : ((0x1eU 
                                              >= (0x1fU 
                                                  & ((vlSelf->inst 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                              ? vlSelf->riscv__DOT__regs1__DOT__regs
                                             [(0x1fU 
                                               & ((vlSelf->inst 
                                                   >> 0xfU) 
                                                  - (IData)(1U)))]
                                              : 0U));
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->riscv__DOT__rs2_data));
}

VL_INLINE_OPT void Vriscv___024root___nba_sequent__TOP__1(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = ((- (IData)(((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                              >> 4U)) == vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out 
           | ((- (IData)(((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 4U)) == vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->riscv__DOT__srcb_data = vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelf->riscv__DOT__rs1_data 
                                             & vlSelf->riscv__DOT__srcb_data))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->riscv__DOT__rs1_data 
                                             | vlSelf->riscv__DOT__srcb_data))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->riscv__DOT__rs1_data & vlSelf->riscv__DOT__srcb_data);
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->riscv__DOT__rs1_data | vlSelf->riscv__DOT__srcb_data);
    vlSelf->riscv__DOT__alu1__DOT__srcb = (vlSelf->riscv__DOT__srcb_data 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                                            >> 5U)))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->riscv__DOT__rs1_data + (vlSelf->riscv__DOT__alu1__DOT__srcb 
                                           + (1U & 
                                              ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                               >> 5U))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->riscv__DOT__rs1_data + (vlSelf->riscv__DOT__alu1__DOT__srcb 
                                           + (1U & 
                                              ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                               >> 5U))));
    vlSelf->riscv__DOT__alu1__DOT__result_add_sub = 
        (vlSelf->riscv__DOT__rs1_data + (vlSelf->riscv__DOT__alu1__DOT__srcb 
                                         + (1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                                  >> 5U))));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                              >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
        = (vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                 >> 5U)) == vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->riscv__DOT__rd_data = vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->riscv__DOT__alu1__DOT__result_add_sub)));
    vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->riscv__DOT__alu1__DOT__result_add_sub));
}

void Vriscv___024root___eval_nba(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vriscv___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vriscv___024root___eval_triggers__act(Vriscv___024root* vlSelf);

bool Vriscv___024root___eval_phase__act(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vriscv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vriscv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vriscv___024root___eval_phase__nba(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vriscv___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv___024root___dump_triggers__ico(Vriscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv___024root___dump_triggers__nba(Vriscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv___024root___dump_triggers__act(Vriscv___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv___024root___eval(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vriscv___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/riscv.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vriscv___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vriscv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/riscv.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vriscv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/riscv.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vriscv___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vriscv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vriscv___024root___eval_debug_assertions(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
