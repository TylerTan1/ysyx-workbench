module ysyx_25040101_alu_result_handle(
	input wire				borrow_i,				// borrow indicates unsigned less
	input wire				sub_overflow_i,	// substract overflow help estimate signed less
	input wire[31:0]  tmp_rd_data_i,
	input wire				rd_unsigned_less_ctrl_i,
	input wire			  less_ctrl_i,
	input wire				less_unsigned_ctrl_i,
	input wire				nless_ctrl_i,
	input wire				nless_unsigned_ctrl_i,
	input wire				ieq_ctrl_i,
	input wire				eq_ctrl_i,
	output reg			 	pc_imm_ctrl_o,
	output reg[31:0]  rd_data_o
);
	wire is_zero = ~(|tmp_rd_data_i);
	wire is_unsigned_less = borrow_i;
	wire is_signed_less = tmp_rd_data_i[31] ^ sub_overflow_i;
	/* TODO 可以改成与或门的组合逻辑 */
	always @(*) begin
		pc_imm_ctrl_o = 1'b0;
		rd_data_o = tmp_rd_data_i;
		if (rd_unsigned_less_ctrl_i) begin
			rd_data_o = {31'b0, is_unsigned_less};
		end else if (less_ctrl_i) begin
			pc_imm_ctrl_o = is_signed_less;
		end else if (less_unsigned_ctrl_i) begin
			pc_imm_ctrl_o = is_unsigned_less;
		end else if (nless_ctrl_i) begin
		 	pc_imm_ctrl_o = ~is_signed_less;	
		end else if (nless_unsigned_ctrl_i) begin
			pc_imm_ctrl_o = ~is_unsigned_less; 
		end else if (ieq_ctrl_i) begin
			pc_imm_ctrl_o = ~is_zero;	
		end else if (eq_ctrl_i) begin
			pc_imm_ctrl_o = is_zero;
		end
	end
endmodule
