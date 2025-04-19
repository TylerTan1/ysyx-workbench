// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25040101_riscv.h for the primary calling header

#ifndef VERILATED_VYSYX_25040101_RISCV___024ROOT_H_
#define VERILATED_VYSYX_25040101_RISCV___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_25040101_riscv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25040101_riscv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*3:0*/ ysyx_25040101_riscv__DOT__alu_ctrl;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__srca_ctrl;
    CData/*1:0*/ ysyx_25040101_riscv__DOT__srcb_ctrl;
    CData/*1:0*/ ysyx_25040101_riscv__DOT__pc_ctrl;
    CData/*4:0*/ ysyx_25040101_riscv__DOT__imm_type;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h8b4ae564__0;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hb9a8e204__0;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4dc811e5__0;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h4d2c2388__0;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h471a8c26__0;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_IN(inst,31,0);
    IData/*31:0*/ ysyx_25040101_riscv__DOT__next_pc;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__rd_data;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__rs1_data;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__rs2_data;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__imm;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__srca_data;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__srcb_data;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__regs1__DOT__i;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_add_sub;
    IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*33:0*/, 3> ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 3> ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 3> ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 31> ysyx_25040101_riscv__DOT__regs1__DOT__regs;
    VlUnpacked<QData/*36:0*/, 5> ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*4:0*/, 5> ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 5> ysyx_25040101_riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*33:0*/, 3> ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 3> ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 3> ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*35:0*/, 4> ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 4> ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25040101_riscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25040101_riscv___024root(Vysyx_25040101_riscv__Syms* symsp, const char* v__name);
    ~Vysyx_25040101_riscv___024root();
    VL_UNCOPYABLE(Vysyx_25040101_riscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
