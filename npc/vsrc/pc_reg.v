module ysyx_25040101_pc_reg (
	input wire clk,
	input wire rst,
	// to ifetch
	output reg[31:0] pc_o
);

	always @(posedge clk or posedge rst) begin
		if (rst) pc_o <= 32'h80000000;
		else pc_o <= pc_o + 4;
	end
endmodule
