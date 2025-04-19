module ysyx_25040101_pc_reg (
	input wire clk,
	input wire rst,
	/* from pc_plus */
	input wire[31:0] next_pc_i,
	/* to ifetch, pc_plus, mux_srca and rom */
	output reg[31:0] pc_o
);

	always @(posedge clk or posedge rst) begin
		if (rst) pc_o <= 32'h80000000;
		else pc_o <= next_pc_i;
	end
endmodule
