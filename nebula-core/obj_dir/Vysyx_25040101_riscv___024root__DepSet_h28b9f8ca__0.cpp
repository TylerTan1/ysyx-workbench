// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040101_riscv.h for the primary calling header

#include "Vysyx_25040101_riscv__pch.h"
#include "Vysyx_25040101_riscv___024root.h"

void Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ num_byte, CData/*0:0*/ sext, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___ico_sequent__TOP__0(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ data, IData/*31:0*/ num_byte);

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
    if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_write_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, vlSelf->ysyx_25040101_riscv__DOT__rs2_data, 1U);
    } else if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_write_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, vlSelf->ysyx_25040101_riscv__DOT__rs2_data, 2U);
    } else if (vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw) {
        Vysyx_25040101_riscv___024root____Vdpiimwrap_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_write_TOP(vlSelf->ysyx_25040101_riscv__DOT__alu_result, vlSelf->ysyx_25040101_riscv__DOT__rs2_data, 4U);
    }
    __Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 0U;
    if ((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h01f54624__0) 
          | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
             | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr) 
                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw) 
                   | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu) 
                      | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub) 
                         | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add) 
                            | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai) 
                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi) 
                                  | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli) 
                                     | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu) 
                                        | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli) 
                                           | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or) 
                                              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor) 
                                                 | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu) 
                                                    | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh) 
                                                       | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu) 
                                                          | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll) 
                                                             | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori) 
                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra) 
                                                                   | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl) 
                                                                      | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and) 
                                                                         | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori) 
                                                                            | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt) 
                                                                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb) 
                                                                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti) 
                                                                                | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs))))))))))))))))))))))))))) 
         & (0U != (0x1fU & (vlSelf->inst >> 7U))))) {
        vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0 
            = vlSelf->ysyx_25040101_riscv__DOT__rd_data;
        if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 7U) 
                                - (IData)(1U))))) {
            __Vdlyvval__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 
                = vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0;
            __Vdlyvset__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 = 1U;
            __Vdlyvdim0__ysyx_25040101_riscv__DOT__regs1__DOT__regs__v0 
                = (0x1fU & ((vlSelf->inst >> 7U) - (IData)(1U)));
        }
    }
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
    vlSelf->__VdfgTmp_h896f813e__0 = ((0x1eU >= (0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0x14U) 
                                                    - (IData)(1U))))
                                       ? vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                      [(0x1fU & ((vlSelf->inst 
                                                  >> 0x14U) 
                                                 - (IData)(1U)))]
                                       : 0U);
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[5U] 
        = (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs2_data));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h5205a0bc__0)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2U] 
        = vlSelf->__VdfgTmp_h5205a0bc__0;
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_sequent__TOP__1(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mtvec = 0U;
        vlSelf->ysyx_25040101_riscv__DOT__mepc = 0U;
        vlSelf->pc = 0x80000000U;
    } else {
        if (vlSelf->ysyx_25040101_riscv__DOT__is_ecall) {
            vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause = 0xbU;
            vlSelf->ysyx_25040101_riscv__DOT__mepc 
                = vlSelf->pc;
        } else if (vlSelf->ysyx_25040101_riscv__DOT__csr_wen) {
            if (vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause) {
                vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause 
                    = vlSelf->ysyx_25040101_riscv__DOT__csr_wdata;
            }
            if (vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc) {
                vlSelf->ysyx_25040101_riscv__DOT__mepc 
                    = vlSelf->ysyx_25040101_riscv__DOT__csr_wdata;
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyx_25040101_riscv__DOT__is_ecall)))) {
            if (vlSelf->ysyx_25040101_riscv__DOT__csr_wen) {
                if (vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus) {
                    vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus 
                        = vlSelf->ysyx_25040101_riscv__DOT__csr_wdata;
                }
                if (vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec) {
                    vlSelf->ysyx_25040101_riscv__DOT__mtvec 
                        = vlSelf->ysyx_25040101_riscv__DOT__csr_wdata;
                }
            }
        }
        vlSelf->pc = vlSelf->ysyx_25040101_riscv__DOT__next_pc;
    }
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_comb__TOP__0(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_comb__TOP__0\n"); );
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
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_sequent__TOP__2(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_sequent__TOP__2\n"); );
    // Body
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
    vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__csr_data)));
}

VL_INLINE_OPT void Vysyx_25040101_riscv___024root___nba_comb__TOP__1(Vysyx_25040101_riscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root___nba_comb__TOP__1\n"); );
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
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_25040101_riscv___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
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
