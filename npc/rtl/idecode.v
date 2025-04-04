`include "defines.v"

module idecode(
	// from if_id
	input wire[31:0] inst_i,
	input wire[31:0] inst_addr_i,
	// to regs
	output reg[4:0] rs1_addr_o,
	output reg[4:0] rs2_addr_o,
	// from regs
	input wire[31:0] rs1_data_i,
	input wire[31:0] rs2_data_i,
	// to id_ex
	output wire[31:0] rs1_data_o,
	output wire[31:0] rs2_data_o,
	output wire[5:0]  rd_addr_o,
	output reg			 rd_wen
);
	wire[6:0] opcode;
	wire[4:0] rd;
	wire[4:0] rs1;
	wire[4:0] rs2;
	wire[2:0] func3;
	wire[32:0] immI;

	assign opcode 		= inst_i[6:0];
	assign rd_addr_o	= inst_i[11:7];
	assign rs1 				= inst_i[19:15];
	assign rs2 				= inst_i[24:20];
	assign func3  		= inst_i[14:12];
	assign immI				= {20{inst_i[31]}, inst_i[31:20]};
	assign rs1_data_o = rs1_data_i;
	assign rs2_data_o = rs2_data_i;

	always @(*) begin
		case (opcode)
			`INST_TYPE_R:  begin
				case (func3)

				endcase
			end
			`INST_TYPE_I1: begin
				case (func3)
					
				endcase
			end
			`INST_TYPE_I2: begin
				case (func3)
					`INST_ADDI: begin
						rs1_addr_o = rs1;
						rs2_addr_o = 5'b0;
						rd_wen = 1;
					end
				endcase
			end
			`INST_TYPE_I3: begin
				case (func3)

				endcase
			end
			`INST_TYPE_S:  begin
				case (func3)

				endcase
			end
			`INST_TYPE_B:  begin
				case (func3)

				endcase
			end
			`INST_TYPE_U1: begin

			end
			`INST_TYPE_U2: begin

			end
			`INST_TYPE_J:  begin

			end
			default: begin
					
			end
		endcase
	end
endmodule
