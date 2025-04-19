module ysyx_25040101_ctrl_unit(
	/* from rom */
	input wire[6:0] opcode_i,
	input wire[2:0] func3_i,
	input wire		  func7_i,

	/* from regs to output ebreak code */			
	input wire[31:0] reg_a0_i,

	/* to alu */
	output wire[1:0] alu_ctrl_o,

	/* to mux_srcb */
	output wire			 is_imm_o,

	/* to extend */
	output wire[4:0] imm_type_o,

	/* to regs */
	output wire			 rd_wen_o
);
	/* opcode handle */
	wire opcode_1_0_11 = (opcode_i[1:0] == 2'b11);
	wire opcode_4_2_000 = (opcode_i[4:2] == 3'b000);
	wire opcode_4_2_001 = (opcode_i[4:2] == 3'b001);
	wire opcode_4_2_011 = (opcode_i[4:2] == 3'b011);
	wire opcode_4_2_100 = (opcode_i[4:2] == 3'b100);
	wire opcode_4_2_101 = (opcode_i[4:2] == 3'b101);
	wire opcode_6_5_00 = (opcode_i[6:5] == 2'b00);
	wire opcode_6_5_01 = (opcode_i[6:5] == 2'b01);
	wire opcode_6_5_11 = (opcode_i[6:5] == 2'b11);

	/* func3 handle */
	wire func3_000 = (func3_i == 3'b000);

	/* func7 handle */
	wire func7_0000000 = (func7_i == 1'b0);
	
/*------------------------------------------------------------*/

	/* instruction classification */
	wire is_R = (opcode_1_0_11 && opcode_6_5_01 && opcode_4_2_100);
	wire is_I_op = (opcode_1_0_11 && opcode_6_5_00 && opcode_4_2_100);
	wire is_I_load = (opcode_1_0_11 && opcode_6_5_00 && opcode_4_2_000);
	wire is_I_system = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_100);
	wire is_I_jalr = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_001);
	wire is_S = (opcode_1_0_11 && opcode_6_5_01 && opcode_4_2_000);
	wire is_B = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_000);
	wire is_U_lui = (opcode_1_0_11 && opcode_6_5_01 && opcode_4_2_101);
	wire is_U_auipc = (opcode_1_0_11 && opcode_6_5_00 && opcode_4_2_101);
	wire is_J = (opcode_1_0_11 && opcode_6_5_11 && opcode_4_2_011);

/*------------------------------------------------------------*/

	/* decode instructions */

	/* I_op */
	wire is_addi = (is_I_op && func3_000);
	
	/* I_system */
	wire is_ebreak = (is_I_system && func3_000 && func7_0000000);

/*------------------------------------------------------------*/

	/* output control signals */

	/* to alu */
	assign alu_ctrl_o[0] = is_addi;	// add
	assign alu_ctrl_o[1] = 1'b0;

	/* to mux_srcb */
	assign is_imm_o = is_addi;

	/* to regs */
  assign rd_wen_o = is_addi;



/*------------------------------------------------------------*/

	/* for immediate number extension */
	wire is_I = (is_I_op || is_I_load || is_I_system || is_I_jalr);
	wire is_U = (is_U_lui || is_U_auipc);
	assign imm_type_o = {is_I, is_S, is_B, is_U, is_J};

/*------------------------------------------------------------*/

	/* ebreak instruction */
	import "DPI-C" function void ebreak(int unsigned break_code);
	always @(*) begin
		if (is_ebreak) begin
			ebreak(reg_a0_i);
		end
	end
endmodule
