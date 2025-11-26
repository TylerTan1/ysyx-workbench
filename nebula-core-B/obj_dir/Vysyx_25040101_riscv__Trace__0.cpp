// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25040101_riscv__Syms.h"


void Vysyx_25040101_riscv___024root__trace_chg_0_sub_0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25040101_riscv___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25040101_riscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040101_riscv___024root*>(voidSelf);
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25040101_riscv___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25040101_riscv___024root__trace_chg_0_sub_0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_10;
    VlWide<10>/*319:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_32;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[7]),8);
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+11,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[5]),5);
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+23,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h01f54624__0) 
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
                                                                                | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs)))))))))))))))))))))))))))));
        bufp->chgCData(oldp+24,(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl),8);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl),2);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl),5);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh));
        bufp->chgBit(oldp+36,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw));
        bufp->chgBit(oldp+37,(vlSelf->ysyx_25040101_riscv__DOT__rd_unsigned_less_ctrl));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25040101_riscv__DOT__is_ecall));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25040101_riscv__DOT__csr_wen));
        bufp->chgCData(oldp+47,((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I) 
                                  << 5U) | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S) 
                                             << 4U) 
                                            | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt))))))),6);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040101_riscv__DOT__imm),32);
        bufp->chgBit(oldp+49,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S));
        bufp->chgBit(oldp+60,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu));
        bufp->chgBit(oldp+68,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw));
        bufp->chgBit(oldp+85,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt));
        bufp->chgBit(oldp+86,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U));
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type),32);
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit));
        __Vtemp_1[0U] = vlSelf->ysyx_25040101_riscv__DOT__imm;
        __Vtemp_1[1U] = 9U;
        __Vtemp_1[2U] = 0U;
        bufp->chgWData(oldp+93,(__Vtemp_1),66);
        bufp->chgQData(oldp+96,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+98,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgBit(oldp+102,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+104,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+105,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+107,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[1]),32);
        bufp->chgQData(oldp+111,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+113,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+115,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[2]),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        __Vtemp_10[0U] = 0U;
        __Vtemp_10[1U] = (0x10U | (vlSelf->ysyx_25040101_riscv__DOT__csr_data 
                                   << 5U));
        __Vtemp_10[2U] = (0x100U | (((IData)(vlSelf->__VdfgTmp_h5205a0bc__0) 
                                     << 0xaU) | (vlSelf->ysyx_25040101_riscv__DOT__csr_data 
                                                 >> 0x1bU)));
        __Vtemp_10[3U] = 0x21000U;
        __Vtemp_10[4U] = (0x10000U | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                      << 0x14U));
        __Vtemp_10[5U] = (0x100000U | ((vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                                        << 0x19U) | 
                                       (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                        >> 0xcU)));
        __Vtemp_10[6U] = (vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                          >> 7U);
        bufp->chgWData(oldp+120,(__Vtemp_10),222);
        bufp->chgQData(oldp+127,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+129,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+131,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+133,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+135,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+137,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[5]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25040101_riscv__DOT__pc_srca),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25040101_riscv__DOT__srca_data),32);
        bufp->chgBit(oldp+147,((vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                                >> 0x1fU)));
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25040101_riscv__DOT__raw_next_pc),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25040101_riscv__DOT__next_pc),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25040101_riscv__DOT__rd_data),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25040101_riscv__DOT__alu_result),32);
        bufp->chgBit(oldp+155,((1U & (~ (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+156,((((((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt) 
                                     & (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less)) 
                                    | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu) 
                                       & (~ (IData)(
                                                    (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                                     >> 0x20U))))) 
                                   | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge) 
                                      & (~ (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less)))) 
                                  | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu) 
                                     & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                                >> 0x20U)))) 
                                 | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne) 
                                    & (0U != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data))) 
                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq) 
                                   & (~ (IData)((0U 
                                                 != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data)))))));
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25040101_riscv__DOT__csr_wdata),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_25040101_riscv__DOT__srcb_data),32);
        bufp->chgIData(oldp+160,((vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                  ^ (- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub))))),32);
        bufp->chgQData(oldp+161,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result),33);
        bufp->chgIData(oldp+163,((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result)),32);
        bufp->chgBit(oldp+164,((vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                              >> 0x1fU)))));
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor),32);
        __Vtemp_24[0U] = (IData)((0x8000000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor))));
        __Vtemp_24[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or 
                           << 8U) | (IData)(((0x8000000000ULL 
                                              | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor))) 
                                             >> 0x20U)));
        __Vtemp_24[2U] = (0x4000U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and 
                                      << 0x10U) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or 
                                                   >> 0x18U)));
        __Vtemp_24[3U] = (0x200000U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift 
                                        << 0x18U) | 
                                       (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and 
                                        >> 0x10U)));
        __Vtemp_24[4U] = (0x10000000U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift 
                                         >> 8U));
        __Vtemp_24[5U] = vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift;
        __Vtemp_24[6U] = (8U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift 
                                << 8U));
        __Vtemp_24[7U] = (0x400U | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                     << 0x10U) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift 
                                                  >> 0x18U)));
        __Vtemp_24[8U] = (0x20000U | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                       << 0x18U) | 
                                      ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                       >> 0x10U)));
        __Vtemp_24[9U] = (0x1000000U | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                        >> 8U));
        bufp->chgWData(oldp+172,(__Vtemp_24),320);
        bufp->chgQData(oldp+182,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+184,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+186,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+188,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+190,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+192,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+194,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgQData(oldp+196,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[7]),40);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+207,((1U & (~ (IData)((0U 
                                                 != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data))))));
        bufp->chgBit(oldp+208,(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less));
        bufp->chgBit(oldp+209,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm));
        bufp->chgIData(oldp+210,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+211,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+212,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result),32);
        __Vtemp_26[0U] = (IData)((0x100000000ULL | (QData)((IData)(
                                                                   (0xfffffffeU 
                                                                    & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result)))));
        __Vtemp_26[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
                           << 1U) | (IData)(((0x100000000ULL 
                                              | (QData)((IData)(
                                                                (0xfffffffeU 
                                                                 & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result)))) 
                                             >> 0x20U)));
        __Vtemp_26[2U] = (vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
                          >> 0x1fU);
        bufp->chgWData(oldp+214,(__Vtemp_26),66);
        bufp->chgQData(oldp+217,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+219,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+224,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[0]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[1]),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[2]),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[3]),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[4]),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[5]),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[6]),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[7]),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[8]),32);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[9]),32);
        bufp->chgIData(oldp+234,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[10]),32);
        bufp->chgIData(oldp+235,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[11]),32);
        bufp->chgIData(oldp+236,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[12]),32);
        bufp->chgIData(oldp+237,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[13]),32);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[14]),32);
        bufp->chgIData(oldp+239,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[15]),32);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[16]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[17]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[18]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[19]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[20]),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[21]),32);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[22]),32);
        bufp->chgIData(oldp+247,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[23]),32);
        bufp->chgIData(oldp+248,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[24]),32);
        bufp->chgIData(oldp+249,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[25]),32);
        bufp->chgIData(oldp+250,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[26]),32);
        bufp->chgIData(oldp+251,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[27]),32);
        bufp->chgIData(oldp+252,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[28]),32);
        bufp->chgIData(oldp+253,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[29]),32);
        bufp->chgIData(oldp+254,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[30]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+255,(vlSelf->ysyx_25040101_riscv__DOT__mtvec),32);
        bufp->chgIData(oldp+256,(vlSelf->ysyx_25040101_riscv__DOT__mepc),32);
        bufp->chgIData(oldp+257,(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause),32);
        bufp->chgIData(oldp+258,(vlSelf->ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus),32);
    }
    bufp->chgBit(oldp+259,(vlSelf->clk));
    bufp->chgBit(oldp+260,(vlSelf->rst));
    bufp->chgIData(oldp+261,(vlSelf->pc),32);
    bufp->chgIData(oldp+262,(vlSelf->inst),32);
    bufp->chgWData(oldp+263,(vlSelf->regs_data),992);
    bufp->chgBit(oldp+294,(vlSelf->is_ebreak));
    bufp->chgIData(oldp+295,(vlSelf->ysyx_25040101_riscv__DOT__rs1_data),32);
    bufp->chgIData(oldp+296,(vlSelf->ysyx_25040101_riscv__DOT__rs2_data),32);
    bufp->chgBit(oldp+297,((((vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                              >> 0x1fU) != (vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                            >> 0x1fU)) 
                            & ((1U & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                              >> 0x1fU))) 
                               != (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                                   >> 0x1fU)))));
    bufp->chgBit(oldp+298,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0) 
                            & (IData)((0x30200000U 
                                       == (0xffff8f80U 
                                           & vlSelf->inst))))));
    bufp->chgIData(oldp+299,(vlSelf->ysyx_25040101_riscv__DOT__csr_data),32);
    bufp->chgSData(oldp+300,((vlSelf->inst >> 0x14U)),12);
    bufp->chgBit(oldp+301,((3U == (vlSelf->inst >> 0x1cU))));
    bufp->chgBit(oldp+302,((4U == (0xfU & (vlSelf->inst 
                                           >> 0x18U)))));
    bufp->chgBit(oldp+303,((0U == (0xfU & (vlSelf->inst 
                                           >> 0x18U)))));
    bufp->chgBit(oldp+304,((0U == (0xfU & (vlSelf->inst 
                                           >> 0x14U)))));
    bufp->chgBit(oldp+305,((1U == (0xfU & (vlSelf->inst 
                                           >> 0x14U)))));
    bufp->chgBit(oldp+306,((2U == (0xfU & (vlSelf->inst 
                                           >> 0x14U)))));
    bufp->chgBit(oldp+307,((5U == (0xfU & (vlSelf->inst 
                                           >> 0x14U)))));
    bufp->chgCData(oldp+308,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+309,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgBit(oldp+310,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->chgBit(oldp+311,((3U == (3U & vlSelf->inst))));
    bufp->chgBit(oldp+312,((0U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+313,((1U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+314,((3U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+315,((4U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+316,((5U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+317,((0U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+318,((1U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+319,((3U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+320,((0U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+321,((1U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+322,((2U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+323,((3U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+324,((4U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+325,((5U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+326,((6U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+327,((7U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+328,((1U & (~ (vlSelf->inst >> 0x1eU)))));
    bufp->chgBit(oldp+329,((0U == (0x1fU & (vlSelf->inst 
                                            >> 7U)))));
    bufp->chgIData(oldp+330,((vlSelf->inst >> 7U)),25);
    bufp->chgIData(oldp+331,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+332,((0x3fU & (vlSelf->inst 
                                       >> 0x14U))),32);
    __Vtemp_28[0U] = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data))));
    __Vtemp_28[1U] = ((vlSelf->pc << 1U) | (IData)(
                                                   ((0x100000000ULL 
                                                     | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data))) 
                                                    >> 0x20U)));
    __Vtemp_28[2U] = (vlSelf->pc >> 0x1fU);
    bufp->chgWData(oldp+333,(__Vtemp_28),66);
    __Vtemp_32[0U] = 0U;
    __Vtemp_32[1U] = (2U | (vlSelf->pc << 2U));
    __Vtemp_32[2U] = (4U | ((vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                             << 4U) | (vlSelf->pc >> 0x1eU)));
    __Vtemp_32[3U] = (vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                      >> 0x1cU);
    bufp->chgWData(oldp+336,(__Vtemp_32),102);
    bufp->chgCData(oldp+340,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+341,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+342,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
}

void Vysyx_25040101_riscv___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25040101_riscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040101_riscv___024root*>(voidSelf);
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
