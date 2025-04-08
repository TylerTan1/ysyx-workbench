module ysyx_25040101_ctrl_unit(

	input wire[6:0] opcode_i,
	input wire[2:0] func3_i,
	input wire		  func7_i,

	output wire[1:0] alu_ctrl_o,
	output wire			 alu_src_o,
	output wire[2:0] imm_src_o,
	output wire			 rd_wen_o
);
	// clarify type
	mux #(
		.NR_KEY(2),
		.KEY_LEN(11),
		.DATA_LEN(7)
	) mux_op (
		.out({alu_ctrl_o, alu_src_o, imm_src_o, rd_wen_o}),
		.key({opcode_i, func3_i, func7_i}),
		.lut({
			11'b0010011_000_0, 7'b00_1_001_1,	// addi 
			11'b0010011_000_1, 7'b00_1_001_1
		})
	);

	import "DPI-C" function void ebreak();
	always @(*) begin
		if (opcode_i == 7'b1110011 && func3_i == 3'b000 && func7_i == 1'b0) begin
			ebreak();
		end
	end
endmodule
