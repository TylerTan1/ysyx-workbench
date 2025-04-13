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
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_21;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3]),2);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[0]),18);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[1]),18);
        bufp->chgSData(oldp+6,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[0]),11);
        bufp->chgSData(oldp+7,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[1]),11);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[0]),7);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[1]),7);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4]),3);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out))));
        bufp->chgCData(oldp+18,((3U & ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                       >> 5U))),2);
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                     >> 4U))));
        bufp->chgCData(oldp+20,((7U & ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                       >> 1U))),3);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25040101_riscv__DOT__imm),32);
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+23,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out),7);
        bufp->chgSData(oldp+24,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key),11);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out),7);
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+27,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+29,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+31,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+33,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+35,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25040101_riscv__DOT__rd_data),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040101_riscv__DOT__rs1_data),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040101_riscv__DOT__rs2_data),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040101_riscv__DOT__srcb_data),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__srcb),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub),32);
        __Vtemp_6[0U] = (IData)((0x300000000ULL | (QData)((IData)(
                                                                  (vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                                                                   & vlSelf->ysyx_25040101_riscv__DOT__srcb_data)))));
        __Vtemp_6[1U] = (((vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                           | vlSelf->ysyx_25040101_riscv__DOT__srcb_data) 
                          << 2U) | (IData)(((0x300000000ULL 
                                             | (QData)((IData)(
                                                               (vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                                                                & vlSelf->ysyx_25040101_riscv__DOT__srcb_data)))) 
                                            >> 0x20U)));
        __Vtemp_6[2U] = (8U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                << 4U) | ((vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                                           | vlSelf->ysyx_25040101_riscv__DOT__srcb_data) 
                                          >> 0x1eU)));
        __Vtemp_6[3U] = (0x10U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                   << 6U) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                                             >> 0x1cU)));
        __Vtemp_6[4U] = (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub 
                         >> 0x1aU);
        bufp->chgWData(oldp+51,(__Vtemp_6),136);
        bufp->chgQData(oldp+56,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+58,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+60,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+62,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
        __Vtemp_8[0U] = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm))));
        __Vtemp_8[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                          << 1U) | (IData)(((0x100000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__imm))) 
                                            >> 0x20U)));
        __Vtemp_8[2U] = (vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                         >> 0x1fU);
        bufp->chgWData(oldp+69,(__Vtemp_8),66);
        bufp->chgQData(oldp+72,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+74,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[0]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[1]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[2]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[3]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[4]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[5]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[6]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[7]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[8]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[9]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[10]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[11]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[12]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[13]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[14]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[15]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[16]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[17]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[18]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[19]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[20]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[21]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[22]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[23]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[24]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[25]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[26]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[27]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[28]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[29]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[30]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__i),32);
    }
    bufp->chgBit(oldp+111,(vlSelf->clk));
    bufp->chgBit(oldp+112,(vlSelf->rst));
    bufp->chgIData(oldp+113,(vlSelf->pc),32);
    bufp->chgIData(oldp+114,(vlSelf->inst),32);
    bufp->chgCData(oldp+115,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+116,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgBit(oldp+117,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->chgIData(oldp+118,((vlSelf->inst >> 7U)),25);
    __Vtemp_21[0U] = (IData)((0x500000000ULL | (QData)((IData)(
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
    __Vtemp_21[1U] = ((0xfffffff8U & (((- (IData)((vlSelf->inst 
                                                   >> 0x1fU))) 
                                       << 0x17U) | 
                                      (0x7ffff8U & 
                                       (vlSelf->inst 
                                        >> 9U)))) | (IData)(
                                                            ((0x500000000ULL 
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
    __Vtemp_21[2U] = (0x20U | (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x11U) | ((0x10000U 
                                              & (vlSelf->inst 
                                                 << 9U)) 
                                             | ((0xfc00U 
                                                 & (vlSelf->inst 
                                                    >> 0xfU)) 
                                                | ((0x3c0U 
                                                    & (vlSelf->inst 
                                                       >> 2U)) 
                                                   | (7U 
                                                      & ((- (IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU))) 
                                                         >> 9U)))))));
    __Vtemp_21[3U] = (0xc0U | (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x1fc000U 
                                              & (vlSelf->inst 
                                                 >> 0xbU)) 
                                             | ((0x3e00U 
                                                 & (vlSelf->inst 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & ((- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                      >> 0xfU))))));
    __Vtemp_21[4U] = (0x400U | ((0xfffff000U & (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x18U) 
                                                | (0xfff000U 
                                                   & (vlSelf->inst 
                                                      >> 8U)))) 
                                | (0x1ffU & ((- (IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU))) 
                                             >> 0xbU))));
    __Vtemp_21[5U] = (0x1000U | (0xfffU & ((- (IData)(
                                                      (vlSelf->inst 
                                                       >> 0x1fU))) 
                                           >> 8U)));
    bufp->chgWData(oldp+119,(__Vtemp_21),175);
    bufp->chgCData(oldp+125,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+126,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+127,((0x1fU & (vlSelf->inst 
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
