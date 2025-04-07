// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv.h for the primary calling header

#ifndef VERILATED_VRISCV___024ROOT_H_
#define VERILATED_VRISCV___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv__Syms;

class Vriscv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*6:0*/ riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out;
    CData/*6:0*/ riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out;
    CData/*0:0*/ riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit;
    CData/*0:0*/ riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit;
    CData/*0:0*/ riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit;
    CData/*0:0*/ riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key;
    VL_OUT(pc,31,0);
    VL_IN(inst,31,0);
    IData/*31:0*/ riscv__DOT__rd_data;
    IData/*31:0*/ riscv__DOT__rs1_data;
    IData/*31:0*/ riscv__DOT__rs2_data;
    IData/*31:0*/ riscv__DOT__imm;
    IData/*31:0*/ riscv__DOT__srcb_data;
    IData/*31:0*/ riscv__DOT__regs1__DOT__i;
    IData/*31:0*/ riscv__DOT__regs1__DOT____Vlvbound_h6bef85a0__0;
    IData/*31:0*/ riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out;
    IData/*31:0*/ riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
    IData/*31:0*/ riscv__DOT__alu1__DOT__srcb;
    IData/*31:0*/ riscv__DOT__alu1__DOT__result_add_sub;
    IData/*31:0*/ riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 31> riscv__DOT__regs1__DOT__regs;
    VlUnpacked<IData/*17:0*/, 2> riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*10:0*/, 2> riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 2> riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*34:0*/, 5> riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 5> riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 5> riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*33:0*/, 4> riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv___024root(Vriscv__Syms* symsp, const char* v__name);
    ~Vriscv___024root();
    VL_UNCOPYABLE(Vriscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
