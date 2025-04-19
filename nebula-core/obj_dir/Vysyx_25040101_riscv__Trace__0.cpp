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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_17;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4]),5);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi));
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi),2);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040101_riscv__DOT__imm_type),5);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25040101_riscv__DOT__imm),32);
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op));
        bufp->chgQData(oldp+15,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+17,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+19,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+21,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+23,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+31,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25040101_riscv__DOT__rd_data),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25040101_riscv__DOT__rs1_data),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25040101_riscv__DOT__rs2_data),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25040101_riscv__DOT__srcb_data),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub),32);
        __Vtemp_2[0U] = (IData)((0x200000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub))));
        __Vtemp_2[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                          << 2U) | (IData)(((0x200000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub))) 
                                            >> 0x20U)));
        __Vtemp_2[2U] = (4U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                               >> 0x1eU));
        bufp->chgWData(oldp+38,(__Vtemp_2),68);
        bufp->chgQData(oldp+41,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+43,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
        __Vtemp_4[0U] = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm))));
        __Vtemp_4[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                          << 1U) | (IData)(((0x100000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm))) 
                                            >> 0x20U)));
        __Vtemp_4[2U] = (vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                         >> 0x1fU);
        bufp->chgWData(oldp+48,(__Vtemp_4),66);
        bufp->chgQData(oldp+51,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+53,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs
                                [9U]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[0]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[1]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[2]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[3]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[4]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[5]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[6]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[7]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[8]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[9]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[10]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[11]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[12]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[13]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[14]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[15]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[16]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[17]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[18]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[19]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[20]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[21]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[22]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[23]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[24]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[25]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[26]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[27]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[28]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[29]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[30]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__i),32);
    }
    bufp->chgBit(oldp+91,(vlSelf->clk));
    bufp->chgBit(oldp+92,(vlSelf->rst));
    bufp->chgIData(oldp+93,(vlSelf->pc),32);
    bufp->chgIData(oldp+94,(vlSelf->inst),32);
    bufp->chgCData(oldp+95,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+96,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgBit(oldp+97,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->chgBit(oldp+98,((3U == (3U & vlSelf->inst))));
    bufp->chgBit(oldp+99,((0U == (7U & (vlSelf->inst 
                                        >> 2U)))));
    bufp->chgBit(oldp+100,((1U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+101,((3U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+102,((4U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+103,((5U == (7U & (vlSelf->inst 
                                         >> 2U)))));
    bufp->chgBit(oldp+104,((0U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+105,((1U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+106,((3U == (3U & (vlSelf->inst 
                                         >> 5U)))));
    bufp->chgBit(oldp+107,((0U == (7U & (vlSelf->inst 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+108,((1U & (~ (vlSelf->inst >> 0x1eU)))));
    bufp->chgBit(oldp+109,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0x10U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+110,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+111,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0x10U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+112,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (4U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+113,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+114,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+115,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                            & (0x14U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+116,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                            & (0x14U == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+117,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0xcU == (0x1cU & vlSelf->inst)))));
    bufp->chgBit(oldp+118,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                            & (0x10U == (0x4000701cU 
                                         & vlSelf->inst)))));
    bufp->chgBit(oldp+119,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op) 
                            | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                                & (0U == (0x1cU & vlSelf->inst))) 
                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0) 
                                  & ((4U == (7U & (vlSelf->inst 
                                                   >> 2U))) 
                                     | (1U == (7U & 
                                               (vlSelf->inst 
                                                >> 2U)))))))));
    bufp->chgBit(oldp+120,((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0) 
                             & (0x14U == (0x1cU & vlSelf->inst))) 
                            | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0) 
                               & (0x14U == (0x1cU & vlSelf->inst))))));
    bufp->chgIData(oldp+121,((vlSelf->inst >> 7U)),25);
    __Vtemp_17[0U] = (IData)((0x100000000ULL | (QData)((IData)(
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
    __Vtemp_17[1U] = ((0xffffffe0U & (((- (IData)((vlSelf->inst 
                                                   >> 0x1fU))) 
                                       << 0x19U) | 
                                      (0x1ffffe0U & 
                                       (vlSelf->inst 
                                        >> 7U)))) | (IData)(
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
    __Vtemp_17[2U] = (0x40U | (((- (IData)((vlSelf->inst 
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
                                                   | (0x1fU 
                                                      & ((- (IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU))) 
                                                         >> 7U)))))));
    __Vtemp_17[3U] = (0x1000U | (((- (IData)((vlSelf->inst 
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
    __Vtemp_17[4U] = (0x40000U | ((0xfff00000U & vlSelf->inst) 
                                  | (0x7fffU & ((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                >> 5U))));
    __Vtemp_17[5U] = (0x1000000U | (0xfffffU & (- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU)))));
    bufp->chgWData(oldp+122,(__Vtemp_17),185);
    bufp->chgCData(oldp+128,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+129,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+130,((0x1fU & (vlSelf->inst 
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
