// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vriscv__Syms.h"


VL_ATTR_COLD void Vriscv___024root__trace_init_sub__TOP__0(Vriscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+112,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+114,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("riscv ");
    tracep->declBit(c+112,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+114,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"rd_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"rd_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"alu_ctrl",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+20,"alu_src",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"imm_src",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"srcb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+47,"srca_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"srcb_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"alu_ctrl_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+46,"alu_result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"srcb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"result_add_sub",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mux_result ");
    tracep->declBus(c+129,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+130,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+46,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declArray(c+52,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+129,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+130,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+132,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+46,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+133,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+52,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 135,0);
    tracep->declBus(c+134,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+57+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+69,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+135,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_unit1 ");
    tracep->declBus(c+116,"opcode_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+117,"func3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+118,"func7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"alu_ctrl_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+20,"alu_src_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"imm_src_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+18,"rd_wen_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("mux_op ");
    tracep->declBus(c+130,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+136,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+24,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declQuad(c+138,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+130,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+136,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+132,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+24,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+140,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declQuad(c+138,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 35,0);
    tracep->declBus(c+141,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 17,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 10,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    tracep->declBus(c+26,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+27,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+142,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("extend1 ");
    tracep->declBus(c+119,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,7);
    tracep->declBus(c+21,"imm_src_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mux_extend ");
    tracep->declBus(c+143,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+22,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declArray(c+120,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+143,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+132,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+22,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+133,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+120,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 174,0);
    tracep->declBus(c+145,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+28+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+11+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+38+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+43,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+146,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux_srcb1 ");
    tracep->declBit(c+20,"alu_src_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"srcb_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mux_srcb ");
    tracep->declBus(c+130,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+147,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+49,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+70,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+130,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+147,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+132,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+49,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+133,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+70,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 65,0);
    tracep->declBus(c+148,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+73+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+16+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+77+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+79,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+142,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc_reg1 ");
    tracep->declBit(c+112,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+114,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs1 ");
    tracep->declBit(c+112,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+18,"rd_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+127,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+128,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+80+i*1,"regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    tracep->declBus(c+111,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vriscv___024root__trace_init_top(Vriscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_init_top\n"); );
    // Body
    Vriscv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vriscv___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vriscv___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vriscv___024root__trace_register(Vriscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_sub_0(Vriscv___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vriscv___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_full_top_0\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_sub_0(Vriscv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h9cfce3e7__0;
    VlWide<3>/*95:0*/ __Vtemp_h5a82ac6a__0;
    VlWide<6>/*191:0*/ __Vtemp_h571a1249__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3]),2);
    bufp->fullIData(oldp+5,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[0]),18);
    bufp->fullIData(oldp+6,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__pair_list[1]),18);
    bufp->fullSData(oldp+7,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[0]),11);
    bufp->fullSData(oldp+8,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__key_list[1]),11);
    bufp->fullCData(oldp+9,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[0]),7);
    bufp->fullCData(oldp+10,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__data_list[1]),7);
    bufp->fullCData(oldp+11,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+12,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+13,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+14,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+15,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+16,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+17,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out))));
    bufp->fullCData(oldp+19,((3U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                    >> 5U))),2);
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                  >> 4U))));
    bufp->fullCData(oldp+21,((7U & ((IData)(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out) 
                                    >> 1U))),3);
    bufp->fullIData(oldp+22,(vlSelf->riscv__DOT__imm),32);
    bufp->fullBit(oldp+23,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+24,(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellout__mux_op__out),7);
    bufp->fullSData(oldp+25,(vlSelf->riscv__DOT__ctrl_unit1__DOT____Vcellinp__mux_op__key),11);
    bufp->fullCData(oldp+26,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__lut_out),7);
    bufp->fullBit(oldp+27,(vlSelf->riscv__DOT__ctrl_unit1__DOT__mux_op__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+28,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+30,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+32,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+34,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+36,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+38,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+39,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+40,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+41,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+42,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+43,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+44,(vlSelf->riscv__DOT__extend1__DOT__mux_extend__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+45,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+46,(vlSelf->riscv__DOT__rd_data),32);
    bufp->fullIData(oldp+47,(vlSelf->riscv__DOT__rs1_data),32);
    bufp->fullIData(oldp+48,(vlSelf->riscv__DOT__rs2_data),32);
    bufp->fullIData(oldp+49,(vlSelf->riscv__DOT__srcb_data),32);
    bufp->fullIData(oldp+50,(vlSelf->riscv__DOT__alu1__DOT__srcb),32);
    bufp->fullIData(oldp+51,(vlSelf->riscv__DOT__alu1__DOT__result_add_sub),32);
    __Vtemp_h9cfce3e7__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->riscv__DOT__rs1_data 
                                                           & vlSelf->riscv__DOT__srcb_data)))));
    __Vtemp_h9cfce3e7__0[1U] = (((vlSelf->riscv__DOT__rs1_data 
                                  | vlSelf->riscv__DOT__srcb_data) 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->riscv__DOT__rs1_data 
                                                                       & vlSelf->riscv__DOT__srcb_data)))) 
                                                   >> 0x20U)));
    __Vtemp_h9cfce3e7__0[2U] = (8U | ((vlSelf->riscv__DOT__alu1__DOT__result_add_sub 
                                       << 4U) | ((vlSelf->riscv__DOT__rs1_data 
                                                  | vlSelf->riscv__DOT__srcb_data) 
                                                 >> 0x1eU)));
    __Vtemp_h9cfce3e7__0[3U] = (0x10U | ((vlSelf->riscv__DOT__alu1__DOT__result_add_sub 
                                          << 6U) | 
                                         (vlSelf->riscv__DOT__alu1__DOT__result_add_sub 
                                          >> 0x1cU)));
    __Vtemp_h9cfce3e7__0[4U] = (vlSelf->riscv__DOT__alu1__DOT__result_add_sub 
                                >> 0x1aU);
    bufp->fullWData(oldp+52,(__Vtemp_h9cfce3e7__0),136);
    bufp->fullQData(oldp+57,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+59,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+61,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+63,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+65,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
    __Vtemp_h5a82ac6a__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->riscv__DOT__imm))));
    __Vtemp_h5a82ac6a__0[1U] = ((vlSelf->riscv__DOT__rs2_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->riscv__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_h5a82ac6a__0[2U] = (vlSelf->riscv__DOT__rs2_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+70,(__Vtemp_h5a82ac6a__0),66);
    bufp->fullQData(oldp+73,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+75,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+77,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+80,(vlSelf->riscv__DOT__regs1__DOT__regs[0]),32);
    bufp->fullIData(oldp+81,(vlSelf->riscv__DOT__regs1__DOT__regs[1]),32);
    bufp->fullIData(oldp+82,(vlSelf->riscv__DOT__regs1__DOT__regs[2]),32);
    bufp->fullIData(oldp+83,(vlSelf->riscv__DOT__regs1__DOT__regs[3]),32);
    bufp->fullIData(oldp+84,(vlSelf->riscv__DOT__regs1__DOT__regs[4]),32);
    bufp->fullIData(oldp+85,(vlSelf->riscv__DOT__regs1__DOT__regs[5]),32);
    bufp->fullIData(oldp+86,(vlSelf->riscv__DOT__regs1__DOT__regs[6]),32);
    bufp->fullIData(oldp+87,(vlSelf->riscv__DOT__regs1__DOT__regs[7]),32);
    bufp->fullIData(oldp+88,(vlSelf->riscv__DOT__regs1__DOT__regs[8]),32);
    bufp->fullIData(oldp+89,(vlSelf->riscv__DOT__regs1__DOT__regs[9]),32);
    bufp->fullIData(oldp+90,(vlSelf->riscv__DOT__regs1__DOT__regs[10]),32);
    bufp->fullIData(oldp+91,(vlSelf->riscv__DOT__regs1__DOT__regs[11]),32);
    bufp->fullIData(oldp+92,(vlSelf->riscv__DOT__regs1__DOT__regs[12]),32);
    bufp->fullIData(oldp+93,(vlSelf->riscv__DOT__regs1__DOT__regs[13]),32);
    bufp->fullIData(oldp+94,(vlSelf->riscv__DOT__regs1__DOT__regs[14]),32);
    bufp->fullIData(oldp+95,(vlSelf->riscv__DOT__regs1__DOT__regs[15]),32);
    bufp->fullIData(oldp+96,(vlSelf->riscv__DOT__regs1__DOT__regs[16]),32);
    bufp->fullIData(oldp+97,(vlSelf->riscv__DOT__regs1__DOT__regs[17]),32);
    bufp->fullIData(oldp+98,(vlSelf->riscv__DOT__regs1__DOT__regs[18]),32);
    bufp->fullIData(oldp+99,(vlSelf->riscv__DOT__regs1__DOT__regs[19]),32);
    bufp->fullIData(oldp+100,(vlSelf->riscv__DOT__regs1__DOT__regs[20]),32);
    bufp->fullIData(oldp+101,(vlSelf->riscv__DOT__regs1__DOT__regs[21]),32);
    bufp->fullIData(oldp+102,(vlSelf->riscv__DOT__regs1__DOT__regs[22]),32);
    bufp->fullIData(oldp+103,(vlSelf->riscv__DOT__regs1__DOT__regs[23]),32);
    bufp->fullIData(oldp+104,(vlSelf->riscv__DOT__regs1__DOT__regs[24]),32);
    bufp->fullIData(oldp+105,(vlSelf->riscv__DOT__regs1__DOT__regs[25]),32);
    bufp->fullIData(oldp+106,(vlSelf->riscv__DOT__regs1__DOT__regs[26]),32);
    bufp->fullIData(oldp+107,(vlSelf->riscv__DOT__regs1__DOT__regs[27]),32);
    bufp->fullIData(oldp+108,(vlSelf->riscv__DOT__regs1__DOT__regs[28]),32);
    bufp->fullIData(oldp+109,(vlSelf->riscv__DOT__regs1__DOT__regs[29]),32);
    bufp->fullIData(oldp+110,(vlSelf->riscv__DOT__regs1__DOT__regs[30]),32);
    bufp->fullIData(oldp+111,(vlSelf->riscv__DOT__regs1__DOT__i),32);
    bufp->fullBit(oldp+112,(vlSelf->clk));
    bufp->fullBit(oldp+113,(vlSelf->rst));
    bufp->fullIData(oldp+114,(vlSelf->pc),32);
    bufp->fullIData(oldp+115,(vlSelf->inst),32);
    bufp->fullCData(oldp+116,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+117,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullBit(oldp+118,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->fullIData(oldp+119,((vlSelf->inst >> 7U)),25);
    __Vtemp_h571a1249__0[0U] = (IData)((0x500000000ULL 
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
                                                                          >> 0x15U))))))))));
    __Vtemp_h571a1249__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x17U) 
                                                | (0x7ffff8U 
                                                   & (vlSelf->inst 
                                                      >> 9U)))) 
                                | (IData)(((0x500000000ULL 
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
    __Vtemp_h571a1249__0[2U] = (0x20U | (((- (IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                          << 0x11U) 
                                         | ((0x10000U 
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
    __Vtemp_h571a1249__0[3U] = (0xc0U | (((- (IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                          << 0x15U) 
                                         | ((0x1fc000U 
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
    __Vtemp_h571a1249__0[4U] = (0x400U | ((0xfffff000U 
                                           & (((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0x18U) 
                                              | (0xfff000U 
                                                 & (vlSelf->inst 
                                                    >> 8U)))) 
                                          | (0x1ffU 
                                             & ((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                >> 0xbU))));
    __Vtemp_h571a1249__0[5U] = (0x1000U | (0xfffU & 
                                           ((- (IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU))) 
                                            >> 8U)));
    bufp->fullWData(oldp+120,(__Vtemp_h571a1249__0),175);
    bufp->fullCData(oldp+126,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+127,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+128,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+129,(4U),32);
    bufp->fullIData(oldp+130,(2U),32);
    bufp->fullIData(oldp+131,(0x20U),32);
    bufp->fullIData(oldp+132,(0U),32);
    bufp->fullIData(oldp+133,(0U),32);
    bufp->fullIData(oldp+134,(0x22U),32);
    bufp->fullIData(oldp+135,(4U),32);
    bufp->fullIData(oldp+136,(0xbU),32);
    bufp->fullIData(oldp+137,(7U),32);
    bufp->fullQData(oldp+138,(0x2604c9893ULL),36);
    bufp->fullCData(oldp+140,(0U),7);
    bufp->fullIData(oldp+141,(0x12U),32);
    bufp->fullIData(oldp+142,(2U),32);
    bufp->fullIData(oldp+143,(5U),32);
    bufp->fullIData(oldp+144,(3U),32);
    bufp->fullIData(oldp+145,(0x23U),32);
    bufp->fullIData(oldp+146,(5U),32);
    bufp->fullIData(oldp+147,(1U),32);
    bufp->fullIData(oldp+148,(0x21U),32);
}
