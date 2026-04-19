module cpu(
    input logic clk,
    input logic rst_n
);

reg [31:0] pc;
logic [31:0] pc_next;
always_comb begin
    pc_next = pc + 4;
end

always@(posedge clk) begin
    if(rst_n == 1'b0) begin
        pc <= 32'b0;
    end
    else begin
        pc <= pc_next;
    end
end

wire [31:0] instr;
memory #(
.mem_init("./test_imemory.mem")
) instr_mem(
    .clk(clk),
    .rst_n(1'b1),
    .addr(pc),
    .w_data(32'b0),
    .w_en(1'b0),
    
    .r_data(instr)
);

logic [6:0] op;
assign op = instr[6:0];
logic [4:0] rd;
assign rd = instr[11:7];
logic [2:0] funct3;
assign funct3 = instr[14:12];
logic [4:0] rs1;
assign rs1 = instr[19:15];
logic [4:0] rs2;
assign rs2 = instr[24:20];
logic [11:0] imm;
assign imm = instr[31:20];
logic [3:0] alu_ctrl;
logic [2:0] imm_src;
wire reg_write;
wire mem_write;

control ctrl(
    .op(op),
    .funct3(funct3),
    .funct7(7'b0),
    .zero(1'b0),

    .alu_ctrl(alu_ctrl),
    .imm_src(imm_src),
    .reg_write(reg_write),
    .mem_write(mem_write)
);
logic [31:0] read1;
logic [31:0] read2;
logic [31:0] mem_read;
logic [31:0] write_data;

always_comb begin
    write_data = mem_read;
end

regfile regf(
    .clk(clk),
    .rst_n(rst_n),
    .r_addr1(rs1),
    .r_addr2(rs2),
    .r_data1(read1),
    .r_data2(read2),

    .w_addr(rd),
    .w_data(write_data),
    .w_en(reg_write)
);

logic [24:0] raw_imm;
assign raw_imm = instr[31:7];
logic [31:0] imm_ext;
signext ext(
    .raw_instr(raw_imm),
    .imm_src(imm_src),

    .imm_out(imm_ext)
);

wire zero;
logic [31:0] alu_result;
alu alu_unit(
    .op(alu_ctrl),
    .operand_a(read1),
    .operand_b(imm_ext),

    .alu_result(alu_result),
    .zero(zero)
);

memory #(
.mem_init("./test_dmemory.mem")
) data_mem (
    .clk(clk),
    .rst_n(1'b1),
    .addr(alu_result),
    .w_data(read2),
    .w_en(mem_write),

    .r_data(mem_read)
);
endmodule
