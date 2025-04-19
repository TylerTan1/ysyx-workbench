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
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_29;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4]),5);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[2]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+17,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hb9a8e204__0) 
                               | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J))));
        bufp->chgCData(oldp+18,(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl),4);
        bufp->chgBit(oldp+19,(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl));
        bufp->chgCData(oldp+20,(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl),2);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_25040101_riscv__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_25040101_riscv__DOT__imm_type),5);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25040101_riscv__DOT__imm),32);
        bufp->chgBit(oldp+24,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J));
        bufp->chgBit(oldp+30,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui) 
                               | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc))));
        bufp->chgQData(oldp+31,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+33,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+35,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+37,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+39,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25040101_riscv__DOT__next_pc),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25040101_riscv__DOT__rd_data),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25040101_riscv__DOT__rs1_data),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25040101_riscv__DOT__rs2_data),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25040101_riscv__DOT__srca_data),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25040101_riscv__DOT__srcb_data),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub),32);
        __Vtemp_6[0U] = (IData)((0x800000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_data))));
        __Vtemp_6[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                          << 4U) | (IData)(((0x800000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__srcb_data))) 
                                            >> 0x20U)));
        __Vtemp_6[2U] = (0x40U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                   << 8U) | (vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                             >> 0x1cU)));
        __Vtemp_6[3U] = (0x200U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                    << 0xcU) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                                >> 0x18U)));
        __Vtemp_6[4U] = (0x1000U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                    >> 0x14U));
        bufp->chgWData(oldp+58,(__Vtemp_6),144);
        bufp->chgQData(oldp+63,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+65,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+67,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+69,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+76,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+78,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out),32);
        __Vtemp_10[0U] = 4U;
        __Vtemp_10[1U] = (2U | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                << 2U));
        __Vtemp_10[2U] = (4U | ((vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                                 << 4U) | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                           >> 0x1eU)));
        __Vtemp_10[3U] = (vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                          >> 0x1cU);
        bufp->chgWData(oldp+83,(__Vtemp_10),102);
        bufp->chgQData(oldp+87,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+89,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+91,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+97,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+99,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+101,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[0]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[1]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[2]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[3]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[4]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[5]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[6]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[7]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[8]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[9]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[10]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[11]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[12]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[13]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[14]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[15]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[16]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[17]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[18]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[19]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[20]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[21]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[22]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[23]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[24]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[25]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[26]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[27]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[28]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[29]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[30]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__i),32);
    }
    bufp->chgBit(oldp+140,(vlSelf->clk));
    bufp->chgBit(oldp+141,(vlSelf->rst));
    bufp->chgIData(oldp+142,(vlSelf->pc),32);
    bufp->chgIData(oldp+143,(vlSelf->inst),32);
    bufp->chgCData(oldp+144,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+145,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgBit(oldp+146,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->chgBit(oldp+147,((3U == (3U & vlSelf->inst))));
    bufp->chgBit(oldp+148,((0U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+149,((1U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+150,((3U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+151,((4U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+152,((5U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+153,((0U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+154,((1U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+155,((3U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+156,((0U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+157,((1U & (~ (vlSelf->inst >> 0x1eU)))));
    bufp->chgBit(oldp+158,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0x10U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+159,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+160,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0x10U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+161,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+162,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+163,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
                            & (0U == (0x7000U & vlSelf->inst)))));
    bufp->chgBit(oldp+164,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0x10U == (0x4000701cU 
                                         & vlSelf->inst)))));
    bufp->chgBit(oldp+165,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
                            | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                                & (0U == (0x1cU & vlSelf->inst))) 
                               | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                                   & (0x10U == (0x1cU 
                                                & vlSelf->inst))) 
                                  | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr))))));
    bufp->chgIData(oldp+166,((vlSelf->inst >> 7U)),25);
    __Vtemp_23[0U] = (IData)((0x100000000ULL | (QData)((IData)(
                                                               (((- (IData)(
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
                                                                               >> 0x15U))))))))));
    __Vtemp_23[1U] = ((0xfffe0000U & (vlSelf->inst 
                                      << 5U)) | (IData)(
                                                        ((0x100000000ULL 
                                                          | (QData)((IData)(
                                                                            (((- (IData)(
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
                                                                                >> 0x15U))))))))) 
                                                         >> 0x20U)));
    __Vtemp_23[2U] = (0x40U | (((- (IData)((vlSelf->inst 
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
    __Vtemp_23[3U] = (0x1000U | (((- (IData)((vlSelf->inst 
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
    __Vtemp_23[4U] = (0x40000U | ((0xfff00000U & vlSelf->inst) 
                                  | (0x7fffU & ((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                >> 5U))));
    __Vtemp_23[5U] = (0x1000000U | (0xfffffU & (- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU)))));
    bufp->chgWData(oldp+167,(__Vtemp_23),185);
    __Vtemp_25[0U] = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->pc))));
    __Vtemp_25[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                       << 1U) | (IData)(((0x100000000ULL 
                                          | (QData)((IData)(vlSelf->pc))) 
                                         >> 0x20U)));
    __Vtemp_25[2U] = (vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                      >> 0x1fU);
    bufp->chgWData(oldp+173,(__Vtemp_25),66);
    __Vtemp_29[0U] = (IData)((0x200000000ULL | (QData)((IData)(
                                                               (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                                                + vlSelf->ysyx_25040101_riscv__DOT__rs1_data)))));
    __Vtemp_29[1U] = (((vlSelf->pc + vlSelf->ysyx_25040101_riscv__DOT__imm) 
                       << 2U) | (IData)(((0x200000000ULL 
                                          | (QData)((IData)(
                                                            (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                                             + vlSelf->ysyx_25040101_riscv__DOT__rs1_data)))) 
                                         >> 0x20U)));
    __Vtemp_29[2U] = (4U | ((((IData)(4U) + vlSelf->pc) 
                             << 4U) | ((vlSelf->pc 
                                        + vlSelf->ysyx_25040101_riscv__DOT__imm) 
                                       >> 0x1eU)));
    __Vtemp_29[3U] = (((IData)(4U) + vlSelf->pc) >> 0x1cU);
    bufp->chgWData(oldp+176,(__Vtemp_29),102);
    bufp->chgCData(oldp+180,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+181,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+182,((0x1fU & (vlSelf->inst 
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
}
