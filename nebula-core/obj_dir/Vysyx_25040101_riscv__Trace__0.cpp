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
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_28;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4]),5);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[2]),2);
        bufp->chgBit(oldp+17,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+19,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hceffc67e__0) 
                               | (IData)(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl))));
        bufp->chgCData(oldp+20,(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl),2);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl),2);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl),2);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl));
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb),32);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_25040101_riscv__DOT__imm_type),5);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25040101_riscv__DOT__imm),32);
        bufp->chgBit(oldp+28,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
                               | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc))));
        bufp->chgQData(oldp+36,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+38,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+40,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+42,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+44,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit));
        __Vtemp_1[0U] = vlSelf->ysyx_25040101_riscv__DOT__imm;
        __Vtemp_1[1U] = 9U;
        __Vtemp_1[2U] = 0U;
        bufp->chgWData(oldp+54,(__Vtemp_1),66);
        bufp->chgQData(oldp+57,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+59,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25040101_riscv__DOT__rs1_data),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25040101_riscv__DOT__rs2_data),32);
        __Vtemp_5[0U] = 4U;
        __Vtemp_5[1U] = (2U | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                               << 2U));
        __Vtemp_5[2U] = (4U | ((vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                                << 4U) | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                          >> 0x1eU)));
        __Vtemp_5[3U] = (vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                         >> 0x1cU);
        bufp->chgWData(oldp+70,(__Vtemp_5),102);
        bufp->chgQData(oldp+74,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+76,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+78,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2]),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+83,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+85,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[1]),32);
        bufp->chgQData(oldp+89,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+91,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+93,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[2]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25040101_riscv__DOT__next_pc),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25040101_riscv__DOT__rd_data),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25040101_riscv__DOT__pc_srca),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25040101_riscv__DOT__srca_data),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub),32);
        __Vtemp_7[0U] = (IData)((0x200000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub))));
        __Vtemp_7[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                          << 2U) | (IData)(((0x200000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub))) 
                                            >> 0x20U)));
        __Vtemp_7[2U] = (4U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                               >> 0x1eU));
        bufp->chgWData(oldp+103,(__Vtemp_7),68);
        bufp->chgQData(oldp+106,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+108,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result),32);
        __Vtemp_9[0U] = (IData)((0x100000000ULL | (QData)((IData)(
                                                                  (0xfffffffeU 
                                                                   & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result)))));
        __Vtemp_9[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
                          << 1U) | (IData)(((0x100000000ULL 
                                             | (QData)((IData)(
                                                               (0xfffffffeU 
                                                                & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result)))) 
                                            >> 0x20U)));
        __Vtemp_9[2U] = (vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
                         >> 0x1fU);
        bufp->chgWData(oldp+116,(__Vtemp_9),66);
        bufp->chgQData(oldp+119,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+121,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[0]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[1]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[2]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[3]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[4]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[5]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[6]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[7]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[8]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[9]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[10]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[11]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[12]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[13]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[14]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[15]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[16]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[17]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[18]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[19]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[20]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[21]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[22]),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[23]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[24]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[25]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[26]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[27]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[28]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[29]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[30]),32);
    }
    bufp->chgBit(oldp+157,(vlSelf->clk));
    bufp->chgBit(oldp+158,(vlSelf->rst));
    bufp->chgIData(oldp+159,(vlSelf->pc),32);
    bufp->chgIData(oldp+160,(vlSelf->inst),32);
    bufp->chgWData(oldp+161,(vlSelf->regs_data),992);
    bufp->chgBit(oldp+192,(vlSelf->is_ebreak));
    bufp->chgIData(oldp+193,(vlSelf->ysyx_25040101_riscv__DOT__srcb_data),32);
    bufp->chgCData(oldp+194,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+195,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgBit(oldp+196,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->chgBit(oldp+197,((3U == (3U & vlSelf->inst))));
    bufp->chgBit(oldp+198,((0U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+199,((1U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+200,((3U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+201,((4U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+202,((5U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+203,((0U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+204,((1U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+205,((3U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+206,((0U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+207,((1U & (~ (vlSelf->inst >> 0x1eU)))));
    bufp->chgBit(oldp+208,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0x10U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+209,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+210,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+211,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+212,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
                            | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                                & (0U == (0x1cU & vlSelf->inst))) 
                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system) 
                                  | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr))))));
    bufp->chgIData(oldp+213,((vlSelf->inst >> 7U)),25);
    __Vtemp_22[0U] = (IData)((0x100000000ULL | (QData)((IData)(
                                                               (((- (IData)(
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
                                                                               >> 0x14U))))))))));
    __Vtemp_22[1U] = ((0xfffe0000U & (vlSelf->inst 
                                      << 5U)) | (IData)(
                                                        ((0x100000000ULL 
                                                          | (QData)((IData)(
                                                                            (((- (IData)(
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
                                                                                >> 0x14U))))))))) 
                                                         >> 0x20U)));
    __Vtemp_22[2U] = (0x40U | (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->inst 
                                                 << 0xdU)) 
                                             | ((0xfc000U 
                                                 & (vlSelf->inst 
                                                    >> 0xbU)) 
                                                | ((0x3c00U 
                                                    & (vlSelf->inst 
                                                       << 2U)) 
                                                   | (0x1ffffU 
                                                      & (vlSelf->inst 
                                                         >> 0x1bU)))))));
    __Vtemp_22[3U] = (0x1000U | (((- (IData)((vlSelf->inst 
                                              >> 0x1fU))) 
                                  << 0x1bU) | ((0x7f00000U 
                                                & (vlSelf->inst 
                                                   >> 5U)) 
                                               | ((0xf8000U 
                                                   & (vlSelf->inst 
                                                      << 8U)) 
                                                  | (0x3ffU 
                                                     & ((- (IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x1fU))) 
                                                        >> 0xbU))))));
    __Vtemp_22[4U] = (0x40000U | ((0xfff00000U & vlSelf->inst) 
                                  | (0x7fffU & ((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                >> 5U))));
    __Vtemp_22[5U] = (0x1000000U | (0xfffffU & (- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU)))));
    bufp->chgWData(oldp+214,(__Vtemp_22),185);
    __Vtemp_24[0U] = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data))));
    __Vtemp_24[1U] = ((vlSelf->pc << 1U) | (IData)(
                                                   ((0x100000000ULL 
                                                     | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data))) 
                                                    >> 0x20U)));
    __Vtemp_24[2U] = (vlSelf->pc >> 0x1fU);
    bufp->chgWData(oldp+220,(__Vtemp_24),66);
    __Vtemp_28[0U] = 0U;
    __Vtemp_28[1U] = (2U | (vlSelf->pc << 2U));
    __Vtemp_28[2U] = (4U | ((vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                             << 4U) | (vlSelf->pc >> 0x1eU)));
    __Vtemp_28[3U] = (vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                      >> 0x1cU);
    bufp->chgWData(oldp+223,(__Vtemp_28),102);
    bufp->chgIData(oldp+227,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
    bufp->chgCData(oldp+228,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+229,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+230,((0x1fU & (vlSelf->inst 
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
}
