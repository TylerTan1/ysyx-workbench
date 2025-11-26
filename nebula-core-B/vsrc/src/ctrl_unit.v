module ysyx_25040101_ctrl_unit(
	/* from rom */
	input  wire [31:0] inst_i,
	/* to alu */
	output wire [7:0]  alu_ctrl_o,
	/* to mux_srca */
	output wire [1:0]  srca_ctrl_o,
	/* to mux_srcb */
	output wire [4:0]  srcb_ctrl_o,
	/* to pc_plus */
	output wire			  pc_ctrl_o,
	/* to mux_pc_srca */
	output wire			  pc_srca_ctrl_o,
	/* to mux_pc_srcb	*/
	output wire			  pc_srcb_ctrl_o,
	/* to extend */
	output wire [5:0]  imm_type_o,
	/* to regs */
	output wire			  rd_wen_o,
	/* to top */
	output wire 		  is_ebreak_o,
	/* to alu_memio_handle */
	output wire				read_1B_mem_en_o,
	output wire 			read_1B_sext_mem_en_o,
	output wire				read_2B_mem_en_o,
	output wire				read_2B_sext_mem_en_o,
	output wire				read_4B_mem_en_o,
	output wire				write_1B_mem_en_o,
	output wire				write_2B_mem_en_o,
	output wire				write_4B_mem_en_o,
	/* to alu_result_handle */
	output wire				rd_unsigned_less_ctrl_o,
	output wire 			rd_less_ctrl_o,
	output wire				less_ctrl_o,
	output wire 			less_unsigned_ctrl_o,
	output wire 			nless_ctrl_o,
	output wire 			nless_unsigned_ctrl_o,
	output wire				ieq_ctrl_o,
	output wire				eq_ctrl_o,
	output wire				is_ecall_o,
	output wire 			is_mret_o,
	output wire				csr_wen_o,
	output wire 			csr_ctrl_o
);
	wire [6:0] opcode_i = inst_i[6:0];
	wire [2:0] func3_i  = inst_i[14:12];
	wire func7_i  = inst_i[30];

	/* opcode handle */
	wire opcode_1_0_11  = (opcode_i[1:0] == 2'b11);
	wire opcode_4_2_000 = (opcode_i[4:2] == 3'b000);
	wire opcode_4_2_001 = (opcode_i[4:2] == 3'b001);
	wire opcode_4_2_011 = (opcode_i[4:2] == 3'b011);
	wire opcode_4_2_100 = (opcode_i[4:2] == 3'b100);
	wire opcode_4_2_101 = (opcode_i[4:2] == 3'b101);
	wire opcode_6_5_00  = (opcode_i[6:5] == 2'b00);
	wire opcode_6_5_01  = (opcode_i[6:5] == 2'b01);
	wire opcode_6_5_11  = (opcode_i[6:5] == 2'b11);

	/* func3 handle */
	wire func3_000 = (func3_i == 3'b000);
	wire func3_001 = (func3_i == 3'b001);
	wire func3_010 = (func3_i == 3'b010);
	wire func3_011 = (func3_i == 3'b011);
	wire func3_100 = (func3_i == 3'b100);
	wire func3_101 = (func3_i == 3'b101);
	wire func3_110 = (func3_i == 3'b110);
	wire func3_111 = (func3_i == 3'b111);

	/* func7 handle */
	wire func7_0 = (func7_i == 1'b0);
	wire func7_1 = (func7_i == 1'b1);

	/* system instruction handle */
	wire inst_11_7_00000 = (inst_i[11:7] == 5'b0);
	
/*------------------------------------------------------------*/

	/* instruction classification */
	wire is_R 			 = (opcode_1_0_11 && opcode_6_5_01 && opcode_4_2_100);
	wire is_I_op 		 = (opcode_1_0_11 && opcode_6_5_00 && opcode_4_2_100);
	wire is_I_load   = (opcode_1_0_11 && opcode_6_5_00 && opcode_4_2_000);
	wire is_I_system = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_100);
	wire is_I_jalr   = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_001);
	wire is_S 			 = (opcode_1_0_11 && opcode_6_5_01 && opcode_4_2_000);
	wire is_B 		   = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_000);
	wire is_U_lui 	 = (opcode_1_0_11 && opcode_6_5_01 && opcode_4_2_101);
	wire is_U_auipc  = (opcode_1_0_11 && opcode_6_5_00 && opcode_4_2_101);
	wire is_J        = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_011);

/*------------------------------------------------------------*/

	/* decode instructions */
	
	/* R */
	wire is_add = (is_R && func3_000 && func7_0);
	wire is_or  = (is_R && func3_110 && func7_0);
	wire is_sub = (is_R && func3_000 && func7_1);
	wire is_sltu = (is_R && func3_011 && func7_0);
	wire is_xor = (is_R && func3_100 && func7_0);
	wire is_sll = (is_R && func3_001 && func7_0);
	wire is_sra = (is_R && func3_101 && func7_1);
	wire is_srl = (is_R && func3_101 && func7_0);
	wire is_and = (is_R && func3_111 && func7_0);
	wire is_slt = (is_R && func3_010 && func7_0);

	/* I_op */
	wire is_addi = (is_I_op && func3_000);
	wire is_slti = (is_I_op && func3_010);
	wire is_sltiu = (is_I_op && func3_011);
	wire is_xori = (is_I_op && func3_100);
	wire is_ori  = (is_I_op && func3_110);
	wire is_andi = (is_I_op && func3_111);
	wire is_slli = (is_I_op && func3_001 && func7_0);
	wire is_srli = (is_I_op && func3_101 && func7_0);
	wire is_srai = (is_I_op && func3_101 && func7_1);

	/* I_load */
	wire is_lw = (is_I_load && func3_010);
	wire is_lbu = (is_I_load && func3_100);
	wire is_lhu = (is_I_load && func3_101);
	wire is_lh = (is_I_load && func3_001);
	wire is_lb = (is_I_load && func3_000);
	
	/* I_system */
	wire is_csrrs = (is_I_system && func3_010);
	wire is_csrrw = (is_I_system && func3_001);
	assign is_ecall_o  = (is_I_system && func3_000 && (inst_i[31:15] == 17'b0000000_00000_00000) && inst_11_7_00000);
	assign is_ebreak_o = (is_I_system && func3_000 && (inst_i[31:15] == 17'b0000000_00001_00000) && inst_11_7_00000);
	assign is_mret_o   = (is_I_system && func3_000 && (inst_i[31:15] == 17'b0011000_00010_00000) && inst_11_7_00000);

	/* I_jalr */
	wire is_jalr = is_I_jalr;

	/* S */
	wire is_sw = (is_S && func3_010);
	wire is_sb = (is_S && func3_000);
	wire is_sh = (is_S && func3_001);

	/* B */
	wire is_beq = (is_B && func3_000);
	wire is_bne = (is_B && func3_001);
	wire is_blt = (is_B && func3_100);
	wire is_bge = (is_B && func3_101);
	wire is_bltu = (is_B && func3_110);
	wire is_bgeu = (is_B && func3_111);

	/* U */
	wire is_auipc = is_U_auipc;
	wire is_lui 	= is_U_lui;

	/* J */
	wire is_jal = is_J;

/*------------------------------------------------------------*/

	/* output control signals */

	/* to alu */
	assign alu_ctrl_o[0] = (is_addi || is_jal || is_auipc || is_jalr || is_lui || is_lw 
												 || is_sw || is_add || is_lbu || is_lh || is_lhu || is_sb || is_sh 
												 || is_lb || is_csrrw);	// srca + srcb

	assign alu_ctrl_o[1] = (is_sltiu || is_bne || is_sub || is_beq || is_bge || is_blt 
												 || is_sltu || is_bltu || is_bgeu || is_slt || is_slti);	// srca - srcb

	assign alu_ctrl_o[2] = (is_srai || is_sra); // signed srca >>> srcb
	assign alu_ctrl_o[3] = (is_srli || is_srl);	// unsigned sra >>> srcb
	assign alu_ctrl_o[4] = (is_slli || is_sll); // srca << srcb
	assign alu_ctrl_o[5] = (is_andi || is_and);	// srca & srcb
	assign alu_ctrl_o[6] = (is_or || is_ori || is_csrrs);		// srca | srcb
	assign alu_ctrl_o[7] = (is_xor || is_xori);	// srca ^ srcb

	/* to mux_srca (default = rs1_data) */
	assign srca_ctrl_o[0] = (is_auipc || is_jal || is_jalr);		// is pc
	assign srca_ctrl_o[1] = is_lui;									// is 0

	/* to mux_srcb (default = rs2_data) */
	assign srcb_ctrl_o[0] = (is_addi || is_auipc || is_lui || is_lw || is_sw || is_sltiu 
													|| is_srai || is_andi || is_srli || is_slli || is_lbu || is_lh
													|| is_lhu || is_xori || is_sb || is_sh || is_ori || is_lb
													|| is_slti);	// is imm
	assign srcb_ctrl_o[1] = (is_jal || is_jalr);							// is 4
	assign srcb_ctrl_o[2] = (is_sll || is_sra || is_srl);	// is rs2_data[4:0]
	assign srcb_ctrl_o[3] = is_csrrs;											// is csr_data
	assign srcb_ctrl_o[4] = is_csrrw;											// is 0

	/* to pc_plus (default = pc_srca + pc_srcb) */
	assign pc_ctrl_o = is_jalr;		// (pc_srca + pc_srcb) & (~1)

	/* to mux_pc_srca (default = pc) */
	assign pc_srca_ctrl_o = is_jalr;	// is rs1

	/* to mux_pc_srcb (default = 4) */
	assign pc_srcb_ctrl_o = (is_jal || is_jalr);	// is imm

	/* to regs */
  assign rd_wen_o = (is_addi || is_auipc || is_lui || is_jal || is_jalr || is_lw || is_sltiu 
										|| is_sub || is_add || is_srai || is_andi || is_srli || is_sltu || is_slli 
										|| is_or || is_xor || is_lbu || is_lh || is_lhu || is_sll || is_xori
										|| is_sra || is_srl || is_and || is_ori || is_slt || is_lb || is_slti
										|| is_csrrs);	// write enable

	/* to alu_memio_handle */
	assign read_1B_mem_en_o = is_lbu;
	assign read_1B_sext_mem_en_o = is_lb;
	assign read_2B_mem_en_o = is_lhu;
	assign read_2B_sext_mem_en_o = is_lh;
	assign read_4B_mem_en_o = is_lw;
	assign write_1B_mem_en_o = is_sb;
	assign write_2B_mem_en_o = is_sh;
	assign write_4B_mem_en_o = is_sw;

	/* to alu_result_handle */
	assign rd_unsigned_less_ctrl_o = (is_sltiu || is_sltu);
	assign rd_less_ctrl_o = (is_slt || is_slti);
	assign less_ctrl_o = is_blt;
	assign less_unsigned_ctrl_o = is_bltu;
	assign nless_ctrl_o = is_bge;
	assign nless_unsigned_ctrl_o = is_bgeu;
	assign ieq_ctrl_o = is_bne;
	assign eq_ctrl_o = is_beq;
	assign csr_ctrl_o = (is_csrrs || is_csrrw);

	/* to csr_regs */
	assign csr_wen_o = (is_csrrs || is_csrrw);

/*------------------------------------------------------------*/

	/* for immediate number extension */
	wire is_shamt = (is_srai || is_srli || is_slli);
	wire is_I = (is_I_op || is_I_load || is_I_system || is_I_jalr);
	wire is_U = (is_U_lui || is_U_auipc);
	assign imm_type_o = {is_I, is_S, is_B, is_U, is_J, is_shamt};

endmodule
