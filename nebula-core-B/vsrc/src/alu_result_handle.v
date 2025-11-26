module ysyx_25040101_alu_result_handle(
	input wire				borrow_i,				// borrow indicates unsigned less
	input wire				sub_overflow_i,	// substract overflow help estimate signed less
	input wire[31:0]  tmp_rd_data_i,
	input wire				rd_unsigned_less_ctrl_i,
	input wire 				rd_less_ctrl_i,
	input wire			  less_ctrl_i,
	input wire				less_unsigned_ctrl_i,
	input wire				nless_ctrl_i,
	input wire				nless_unsigned_ctrl_i,
	input wire				ieq_ctrl_i,
	input wire				eq_ctrl_i,
	input wire[31:0]	csr_data_i,
	input wire				csr_ctrl_i,

	output reg			 	pc_imm_ctrl_o,
	output reg[31:0]  rd_data_o,
	output reg[31:0]	csr_wdata_o
);
	wire is_zero = ~(|tmp_rd_data_i);
	wire is_unsigned_less = borrow_i;
	wire is_signed_less = tmp_rd_data_i[31] ^ sub_overflow_i;
	always @(*) begin
  	pc_imm_ctrl_o = 1'b0;

  	// 并行条件判断（使用独热编码特性）
  	pc_imm_ctrl_o =
    	(less_ctrl_i        & is_signed_less)     |
    	(less_unsigned_ctrl_i & is_unsigned_less)  |
    	(nless_ctrl_i       & ~is_signed_less)    |
    	(nless_unsigned_ctrl_i & ~is_unsigned_less)|
    	(ieq_ctrl_i         & ~is_zero)           |
    	(eq_ctrl_i          & is_zero);
	end

	always @(*) begin
  	rd_data_o = tmp_rd_data_i;
		csr_wdata_o = 32'b0;
  	// RD数据选择（互斥条件）
  	if (rd_unsigned_less_ctrl_i) begin
    	rd_data_o = {31'b0, is_unsigned_less};
  	end else if (rd_less_ctrl_i) begin
    	rd_data_o = {31'b0, is_signed_less};
		// 处理csrrs和csrrw指令
		end else if (csr_ctrl_i) begin
			rd_data_o = csr_data_i; 	
			csr_wdata_o = tmp_rd_data_i;
  	end
	end
endmodule
