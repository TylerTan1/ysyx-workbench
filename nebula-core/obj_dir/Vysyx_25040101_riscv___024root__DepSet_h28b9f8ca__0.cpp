// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040101_riscv.h for the primary calling header

#include "Vysyx_25040101_riscv__pch.h"
#include "Vysyx_25040101_riscv___024root.h"

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___ico_sequent__TOP__0(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void Vysyx_25040101_riscv___024root___eval_ico(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25040101_riscv___024root___eval_triggers__ico(Vysyx_25040101_riscv___024root* vlSelf);

bool Vysyx_25040101_riscv___024root___eval_phase__ico(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25040101_riscv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25040101_riscv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25040101_riscv___024root___eval_act(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_sequent__TOP__0(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0;
    __Vdlyvdim0__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0;
    __Vdlyvval__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0;
    __Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 0U;
    if (((IData)(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_wen) 
         & (0U != (IData)(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_addr)))) {
        vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_he253d8b9__0 
            = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_data;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_addr) 
                                - (IData)(1U))))) {
            __Vdlyvval__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 
                = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_he253d8b9__0;
            __Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 1U;
            __Vdlyvdim0__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_addr) 
                            - (IData)(1U)));
        }
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x7ffffffcU
                   : vlSelf->ysyx_25040101_riscv__DOT__pc_reg1__DOT__next_pc);
    if (__Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0) {
        vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[__Vdlyvdim0__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0] 
            = __Vdlyvval__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0;
    }
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs2_data));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data));
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_sequent__TOP__1(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_addr 
        = (0x1fU & (vlSelf->inst >> 7U));
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_data 
        = vlSelf->ysyx_25040101_riscv__DOT__rd_data;
    vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__rd_wen 
        = ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hceffc67e__0) 
           | (IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl));
    vlSelf->ysyx_25040101_riscv__DOT__pc_reg1__DOT__next_pc 
        = vlSelf->ysyx_25040101_riscv__DOT__next_pc;
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_sequent__TOP__2(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_sequent__TOP__2\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_sequent__TOP__3(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_sequent__TOP__3\n"); );
    // Body
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

void Vysyx_25040101_riscv___024root___eval_nba(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vysyx_25040101_riscv___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vysyx_25040101_riscv___024root___eval_triggers__act(Vysyx_25040101_riscv___024root* vlSelf);

bool Vysyx_25040101_riscv___024root___eval_phase__act(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25040101_riscv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vysyx_25040101_riscv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25040101_riscv___024root___eval_phase__nba(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25040101_riscv___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__ico(Vysyx_25040101_riscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__nba(Vysyx_25040101_riscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040101_riscv___024root___dump_triggers__act(Vysyx_25040101_riscv___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040101_riscv___024root___eval(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval\n"); );
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
            Vysyx_25040101_riscv___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/riscv.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25040101_riscv___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vysyx_25040101_riscv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/riscv.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040101_riscv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/riscv.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vysyx_25040101_riscv___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vysyx_25040101_riscv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25040101_riscv___024root___eval_debug_assertions(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
