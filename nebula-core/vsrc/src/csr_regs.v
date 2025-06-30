module ysyx_25040101_csr_regs(
	input  wire clk,
	input  wire rst,
	input  wire is_ecall_i,
	input  wire csr_wen_i,
	input  wire [31:0] csr_wdata_i,
	input  wire [11:0] csr_index_i,
 	input  wire [31:0] pc_i,
	output wire [31:0] csr_data_o,
	output reg  [31:0] mtvec,
	output reg  [31:0] mepc
);
	reg[31:0] mcause;
	reg[31:0] mstatus;

	wire is_3xx = (csr_index_i[11:8] == 4'h3);

	wire is_x4x = (csr_index_i[7:4] == 4'h4);
	wire is_x0x = (csr_index_i[7:4] == 4'h0);
	
	wire is_xx0 = (csr_index_i[3:0] == 4'h0);
	wire is_xx1 = (csr_index_i[3:0] == 4'h1);
	wire is_xx2 = (csr_index_i[3:0] == 4'h2);
	wire is_xx5 = (csr_index_i[3:0] == 4'h5);


	wire is_mepc    = (is_3xx && is_x4x && is_xx1);
	wire is_mcause  = (is_3xx && is_x4x && is_xx2);
	wire is_mstatus = (is_3xx && is_x0x && is_xx0); 
	wire is_mtvec   = (is_3xx && is_x0x && is_xx5);

	assign csr_data_o = (
		({32{is_mepc}}    & mepc)    |
		({32{is_mcause}}  & mcause)  |
		({32{is_mstatus}} & mstatus) |
		({32{is_mtvec}}   & mtvec));   

	always @(posedge clk or posedge rst) begin
		if (rst) begin 
			mstatus <= 32'b0;
			mepc 		<= 32'b0;
			mcause  <= 32'b0;
			mtvec   <= 32'b0;
		end else if (is_ecall_i) begin 
			mepc <= pc_i;
			mcause <= 32'd11;
		end else if (csr_wen_i) begin
			if (is_mstatus) mstatus <= csr_wdata_i;
			if (is_mepc)    mepc    <= csr_wdata_i;
			if (is_mcause)  mcause  <= csr_wdata_i;
			if (is_mtvec)   mtvec   <= csr_wdata_i;
		end
	end
endmodule
