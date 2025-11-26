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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(is_ebreak,0,0);
        CData/*7:0*/ ysyx_25040101_riscv__DOT__alu_ctrl;
        CData/*1:0*/ ysyx_25040101_riscv__DOT__srca_ctrl;
        CData/*4:0*/ ysyx_25040101_riscv__DOT__srcb_ctrl;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__pc_srcb_ctrl;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__rd_unsigned_less_ctrl;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__rd_less_ctrl;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__is_ecall;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_wen;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrs;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_csrrw;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h01f54624__0;
    };
    struct {
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc6c5e209__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h9bbd7324__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hff25f348__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hfcf102ab__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hc63158b9__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h5dbc5f53__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hf3be9605__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h312cb554__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__is_sub;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mepc;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mcause;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mstatus;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT__is_mtvec;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h6643ae7e__0;
        CData/*0:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT____VdfgTmp_h601a8f48__0;
        CData/*0:0*/ __VdfgTmp_h983fc119__0;
        CData/*0:0*/ __VdfgTmp_h4fa9a3b7__0;
        CData/*0:0*/ __VdfgTmp_hbae26c43__0;
        CData/*0:0*/ __VdfgTmp_h1aa0ff7e__0;
        CData/*0:0*/ __VdfgTmp_h4c8f29b4__0;
        CData/*0:0*/ __VdfgTmp_he55eb7e7__0;
        CData/*0:0*/ __VdfgTmp_h2083fca3__0;
        CData/*4:0*/ __VdfgTmp_h5205a0bc__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(pc,31,0);
        VL_IN(inst,31,0);
        VL_OUTW(regs_data,991,0,31);
        IData/*31:0*/ ysyx_25040101_riscv__DOT__raw_next_pc;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__next_pc;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__tmp_rd_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__rd_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__rs1_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__rs2_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu_result;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__csr_wdata;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__csr_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__mtvec;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__mepc;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__pc_srca;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__pc_srcb;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__imm;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__srca_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__srcb_data;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__regs1__DOT____Vlvbound_h966ba230__0;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift;
    };
    struct {
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT__mcause;
        IData/*31:0*/ ysyx_25040101_riscv__DOT__csr_regs1__DOT__mstatus;
        IData/*31:0*/ __VdfgTmp_h896f813e__0;
        IData/*31:0*/ __Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__3__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_25040101_riscv__DOT__alu_memio_handle1__DOT__pmem_read__4__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ ysyx_25040101_riscv__DOT__alu1__DOT__extended_result;
        VlUnpacked<QData/*32:0*/, 2> ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 31> ysyx_25040101_riscv__DOT__regs1__DOT__regs;
        VlUnpacked<QData/*33:0*/, 3> ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 6> ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 6> ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 8> ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 8> ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
