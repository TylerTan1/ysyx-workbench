// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25040101_riscv__Syms.h"


VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_init_sub__TOP__0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+238,0,"regs_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 991,0);
    tracep->declBit(c+269,0,"is_ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25040101_riscv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+238,0,"regs_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 991,0);
    tracep->declBit(c+269,0,"is_ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"tmp_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"rd_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"borrow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sub_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"srca_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"srcb_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+26,0,"pc_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"pc_srca_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"pc_srcb_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"pc_imm_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"read_1B_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"read_1B_sext_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"read_2B_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"read_2B_sext_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"read_4B_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"write_1B_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"write_2B_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"write_4B_mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rd_unsigned_less_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rd_less_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"less_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"less_unsigned_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"nless_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"nless_unsigned_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ieq_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"eq_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"pc_srca",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"pc_srcb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+45,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"srca_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"srcb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+138,0,"srca_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"srcb_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"alu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"alu_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"borrow_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sub_overflow_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"srcb_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+139,0,"extended_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"result_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"sign_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"result_sright_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"result_uright_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"result_left_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"result_bit_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"result_bit_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"result_bit_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mux_result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+150,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+150,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declBus(c+313,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+160+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+184,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_memio_handle1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"read_1B_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"read_1B_sext_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"read_2B_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"read_2B_sext_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"read_4B_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"write_1B_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"write_2B_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"write_4B_mem_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"alu_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"rs2_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"tmp_rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_result_handle1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+134,0,"borrow_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sub_overflow_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"tmp_rd_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"rd_unsigned_less_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rd_less_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"less_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"less_unsigned_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"nless_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"nless_unsigned_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ieq_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"eq_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"pc_imm_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"is_unsigned_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"is_signed_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_unit1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+275,0,"func3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+276,0,"func7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"alu_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"srca_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"srcb_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+26,0,"pc_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"pc_srca_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"pc_srcb_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"imm_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+22,0,"rd_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"is_ebreak_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"read_1B_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"read_1B_sext_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"read_2B_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"read_2B_sext_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"read_4B_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"write_1B_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"write_2B_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"write_4B_mem_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rd_unsigned_less_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rd_less_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"less_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"less_unsigned_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"nless_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"nless_unsigned_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ieq_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"eq_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"opcode_1_0_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"opcode_4_2_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"opcode_4_2_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"opcode_4_2_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"opcode_4_2_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"opcode_4_2_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"opcode_6_5_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"opcode_6_5_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"opcode_6_5_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"func3_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"func3_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"func3_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"func3_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"func3_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"func3_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"func3_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"func3_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"func7_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"func7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_I_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_I_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_I_system",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"is_I_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_U_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_U_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("extend1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+295,0,"raw_imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+44,0,"imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+45,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"imm_i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"imm_s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"imm_b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"imm_u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"imm_j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"imm_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_pc_srca1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+236,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"rs1_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"pc_srca_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"pc_srca_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mux_pc_srca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+298,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+312,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+298,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+317,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+115+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+119+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+187,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux_pc_srcb1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"pc_srcb_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"pc_imm_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"pc_srcb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"is_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux_pc_srcb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+84,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+312,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+84,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+317,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+87+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+189,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+190,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux_srca1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"srca_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"rs1_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"srca_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mux_srca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+319,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+301,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+319,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+312,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+301,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declBus(c+320,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+121+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+191,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux_srcb1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"srcb_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"rs2_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"srcb_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mux_srcb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+98,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 139,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+312,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+98,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 139,0);
    tracep->declBus(c+323,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+103+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 34,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+305,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pc_plus1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"pc_srca_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"pc_srcb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"pc_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"pc_plus_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mux_extend", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+193,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+312,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+193,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+317,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+196+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+202,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"rd_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+307,0,"rs1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+308,0,"rs2_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+22,0,"rd_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"rs1_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"rs2_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+238,0,"regs_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 991,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+203+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_init_top(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_init_top\n"); );
    // Body
    Vysyx_25040101_riscv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25040101_riscv___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25040101_riscv___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_register(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vysyx_25040101_riscv___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25040101_riscv___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25040101_riscv___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25040101_riscv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_const_0_sub_0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_const_0\n"); );
    // Init
    Vysyx_25040101_riscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040101_riscv___024root*>(voidSelf);
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25040101_riscv___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_const_0_sub_0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+309,(8U),32);
    bufp->fullIData(oldp+310,(0x20U),32);
    bufp->fullIData(oldp+311,(0U),32);
    bufp->fullIData(oldp+312,(0U),32);
    bufp->fullIData(oldp+313,(0x28U),32);
    bufp->fullIData(oldp+314,(8U),32);
    bufp->fullIData(oldp+315,(2U),32);
    bufp->fullIData(oldp+316,(1U),32);
    bufp->fullIData(oldp+317,(0x21U),32);
    bufp->fullIData(oldp+318,(2U),32);
    bufp->fullIData(oldp+319,(3U),32);
    bufp->fullIData(oldp+320,(0x22U),32);
    bufp->fullIData(oldp+321,(3U),32);
    bufp->fullIData(oldp+322,(4U),32);
    bufp->fullIData(oldp+323,(0x23U),32);
    bufp->fullIData(oldp+324,(4U),32);
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_full_0_sub_0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_full_0\n"); );
    // Init
    Vysyx_25040101_riscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040101_riscv___024root*>(voidSelf);
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25040101_riscv___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25040101_riscv___024root__trace_full_0_sub_0(Vysyx_25040101_riscv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040101_riscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040101_riscv___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<10>/*319:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_29;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__key_list[7]),8);
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__key_list[3]),3);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_hceffc67e__0) 
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
                                                                                | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT____VdfgTmp_h61a0f963__0)))))))))))))))))))))))))));
    bufp->fullCData(oldp+23,(vlSelf->ysyx_25040101_riscv__DOT__alu_ctrl),8);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_25040101_riscv__DOT__srca_ctrl),2);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_25040101_riscv__DOT__srcb_ctrl),3);
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_jalr));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb_ctrl));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lbu));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lb));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lhu));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lh));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_lw));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sb));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sh));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sw));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu) 
                            | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu))));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25040101_riscv__DOT__rd_less_ctrl));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq));
    bufp->fullCData(oldp+44,((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I) 
                               << 5U) | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S) 
                                          << 4U) | 
                                         (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J) 
                                               << 1U) 
                                              | (IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt))))))),6);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25040101_riscv__DOT__imm),32);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_R));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_op));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_load));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I_system));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_S));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_B));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_lui));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U_auipc));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_J));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_add));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_or));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sub));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltu));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xor));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sll));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sra));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srl));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_and));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slt));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_addi));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slti));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_sltiu));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_xori));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_ori));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_andi));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_slli));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srli));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_srai));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_shamt));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_I));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_U));
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_i_type),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_s_type),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_b_type),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25040101_riscv__DOT__extend1__DOT__imm_j_type),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__hit));
    __Vtemp_1[0U] = vlSelf->ysyx_25040101_riscv__DOT__imm;
    __Vtemp_1[1U] = 9U;
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+84,(__Vtemp_1),66);
    bufp->fullQData(oldp+87,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+89,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__data_list[1]),32);
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25040101_riscv__DOT__rs1_data),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25040101_riscv__DOT__rs2_data),32);
    __Vtemp_7[0U] = vlSelf->__VdfgTmp_h5205a0bc__0;
    __Vtemp_7[1U] = 0x24U;
    __Vtemp_7[2U] = (0x10U | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                              << 6U));
    __Vtemp_7[3U] = (0x40U | ((vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                               << 9U) | (vlSelf->ysyx_25040101_riscv__DOT__imm 
                                         >> 0x1aU)));
    __Vtemp_7[4U] = (vlSelf->ysyx_25040101_riscv__DOT__rs2_data 
                     >> 0x17U);
    bufp->fullWData(oldp+98,(__Vtemp_7),140);
    bufp->fullQData(oldp+103,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+105,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+107,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+109,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__data_list[3]),32);
    bufp->fullQData(oldp+115,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+117,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__data_list[1]),32);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+123,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25040101_riscv__DOT__next_pc),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25040101_riscv__DOT__rd_data),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25040101_riscv__DOT__alu_result),32);
    bufp->fullBit(oldp+134,((1U & (~ (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+135,((((((((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_blt) 
                                  & (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less)) 
                                 | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bltu) 
                                    & (~ (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                                  >> 0x20U))))) 
                                | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bge) 
                                   & (~ (IData)(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less)))) 
                               | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bgeu) 
                                  & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                             >> 0x20U)))) 
                              | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_bne) 
                                 & (0U != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data))) 
                             | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__ctrl_unit1__DOT__is_beq) 
                                & (~ (IData)((0U != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data)))))));
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25040101_riscv__DOT__pc_srca),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25040101_riscv__DOT__pc_srcb),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25040101_riscv__DOT__srca_data),32);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result),33);
    bufp->fullIData(oldp+141,((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result)),32);
    bufp->fullBit(oldp+142,((vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+143,((1U & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                           >> 0x1fU)))));
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor),32);
    __Vtemp_21[0U] = (IData)((0x8000000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor))));
    __Vtemp_21[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or 
                       << 8U) | (IData)(((0x8000000000ULL 
                                          | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_xor))) 
                                         >> 0x20U)));
    __Vtemp_21[2U] = (0x4000U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and 
                                  << 0x10U) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_or 
                                               >> 0x18U)));
    __Vtemp_21[3U] = (0x200000U | ((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift 
                                    << 0x18U) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_bit_and 
                                                 >> 0x10U)));
    __Vtemp_21[4U] = (0x10000000U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_left_shift 
                                     >> 8U));
    __Vtemp_21[5U] = vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_uright_shift;
    __Vtemp_21[6U] = (8U | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift 
                            << 8U));
    __Vtemp_21[7U] = (0x400U | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                 << 0x10U) | (vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__result_sright_shift 
                                              >> 0x18U)));
    __Vtemp_21[8U] = (0x20000U | (((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                   << 0x18U) | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                                >> 0x10U)));
    __Vtemp_21[9U] = (0x1000000U | ((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result) 
                                    >> 8U));
    bufp->fullWData(oldp+150,(__Vtemp_21),320);
    bufp->fullQData(oldp+160,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+162,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+164,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+166,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+168,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullQData(oldp+170,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[5]),40);
    bufp->fullQData(oldp+172,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[6]),40);
    bufp->fullQData(oldp+174,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__pair_list[7]),40);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__mux_result__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+185,((1U & (~ (IData)((0U != vlSelf->ysyx_25040101_riscv__DOT__tmp_rd_data))))));
    bufp->fullBit(oldp+186,(vlSelf->ysyx_25040101_riscv__DOT__alu_result_handle1__DOT__is_signed_less));
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srca1__DOT__mux_pc_srca__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+188,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__is_imm));
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+190,(vlSelf->ysyx_25040101_riscv__DOT__mux_pc_srcb1__DOT__mux_pc_srcb__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25040101_riscv__DOT__mux_srca1__DOT__mux_srca__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result),32);
    __Vtemp_23[0U] = (IData)((0x100000000ULL | (QData)((IData)(
                                                               (0xfffffffeU 
                                                                & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result)))));
    __Vtemp_23[1U] = ((vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
                       << 1U) | (IData)(((0x100000000ULL 
                                          | (QData)((IData)(
                                                            (0xfffffffeU 
                                                             & vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result)))) 
                                         >> 0x20U)));
    __Vtemp_23[2U] = (vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__pc_plus_result 
                      >> 0x1fU);
    bufp->fullWData(oldp+193,(__Vtemp_23),66);
    bufp->fullQData(oldp+196,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+198,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25040101_riscv__DOT__pc_plus1__DOT__mux_extend__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[0]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[1]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[2]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[3]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[4]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[5]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[6]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[7]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[8]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[9]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[10]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[11]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[12]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[13]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[14]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[15]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[16]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[17]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[18]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[19]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[20]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[21]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[22]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[23]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[24]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[25]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[26]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[27]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[28]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[29]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25040101_riscv__DOT__regs1__DOT__regs[30]),32);
    bufp->fullBit(oldp+234,(vlSelf->clk));
    bufp->fullBit(oldp+235,(vlSelf->rst));
    bufp->fullIData(oldp+236,(vlSelf->pc),32);
    bufp->fullIData(oldp+237,(vlSelf->inst),32);
    bufp->fullWData(oldp+238,(vlSelf->regs_data),992);
    bufp->fullBit(oldp+269,(vlSelf->is_ebreak));
    bufp->fullBit(oldp+270,((((vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                               >> 0x1fU) != (vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                                             >> 0x1fU)) 
                             & ((1U & (IData)((vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__extended_result 
                                               >> 0x1fU))) 
                                != (vlSelf->ysyx_25040101_riscv__DOT__srca_data 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+271,(vlSelf->ysyx_25040101_riscv__DOT__srcb_data),32);
    bufp->fullIData(oldp+272,((vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                               ^ (- (IData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__alu1__DOT__is_sub))))),32);
    bufp->fullBit(oldp+273,((vlSelf->ysyx_25040101_riscv__DOT__srcb_data 
                             >> 0x1fU)));
    bufp->fullCData(oldp+274,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+275,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullBit(oldp+276,((1U & (vlSelf->inst >> 0x1eU))));
    bufp->fullBit(oldp+277,((3U == (3U & vlSelf->inst))));
    bufp->fullBit(oldp+278,((0U == (7U & (vlSelf->inst 
                                          >> 2U)))));
    bufp->fullBit(oldp+279,((1U == (7U & (vlSelf->inst 
                                          >> 2U)))));
    bufp->fullBit(oldp+280,((3U == (7U & (vlSelf->inst 
                                          >> 2U)))));
    bufp->fullBit(oldp+281,((4U == (7U & (vlSelf->inst 
                                          >> 2U)))));
    bufp->fullBit(oldp+282,((5U == (7U & (vlSelf->inst 
                                          >> 2U)))));
    bufp->fullBit(oldp+283,((0U == (3U & (vlSelf->inst 
                                          >> 5U)))));
    bufp->fullBit(oldp+284,((1U == (3U & (vlSelf->inst 
                                          >> 5U)))));
    bufp->fullBit(oldp+285,((3U == (3U & (vlSelf->inst 
                                          >> 5U)))));
    bufp->fullBit(oldp+286,((0U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+287,((1U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+288,((2U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+289,((3U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+290,((4U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+291,((5U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+292,((6U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+293,((7U == (7U & (vlSelf->inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+294,((1U & (~ (vlSelf->inst 
                                      >> 0x1eU)))));
    bufp->fullIData(oldp+295,((vlSelf->inst >> 7U)),25);
    bufp->fullIData(oldp+296,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+297,((0x3fU & (vlSelf->inst 
                                        >> 0x14U))),32);
    __Vtemp_25[0U] = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data))));
    __Vtemp_25[1U] = ((vlSelf->pc << 1U) | (IData)(
                                                   ((0x100000000ULL 
                                                     | (QData)((IData)(vlSelf->ysyx_25040101_riscv__DOT__rs1_data))) 
                                                    >> 0x20U)));
    __Vtemp_25[2U] = (vlSelf->pc >> 0x1fU);
    bufp->fullWData(oldp+298,(__Vtemp_25),66);
    __Vtemp_29[0U] = 0U;
    __Vtemp_29[1U] = (2U | (vlSelf->pc << 2U));
    __Vtemp_29[2U] = (4U | ((vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                             << 4U) | (vlSelf->pc >> 0x1eU)));
    __Vtemp_29[3U] = (vlSelf->ysyx_25040101_riscv__DOT__rs1_data 
                      >> 0x1cU);
    bufp->fullWData(oldp+301,(__Vtemp_29),102);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25040101_riscv__DOT__mux_srcb1__DOT__mux_srcb__DOT__i0__DOT__lut_out),32);
    bufp->fullCData(oldp+306,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+307,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+308,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
}
