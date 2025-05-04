module ysyx_25040101_pc_reg (
	input wire clk,
	input wire rst,
	/* from pc_plus */
	input wire[31:0] next_pc_i,
	/* to pc_plus, mux_srca and rom */
	output reg[31:0] pc_o
);
	always @(posedge clk or posedge rst) begin
		pc_o <= (rst) ? 32'h80000000 : next_pc_i;
	end
endmodule
