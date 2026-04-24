module alu(
    input logic [3:0] op,
    input logic [31:0] operand_a,
    input logic [31:0] operand_b,

    output logic [31:0] alu_result,
    output logic zero
);

always_comb begin
    case (op) 
        4'b0000: alu_result = operand_a + operand_b; // ADD
        4'b0001: alu_result = operand_a - operand_b; // SUB
        4'b0010: alu_result = operand_a & operand_b; // AND
        4'b0011: alu_result = operand_a | operand_b; // OR
        4'b0100: alu_result = operand_a << operand_b; //Logical LS
        4'b0110: alu_result = operand_a >> operand_b; //Logical RS
        4'b1000: alu_result = operand_a ^ operand_b; // XOR
        4'b1001: alu_result = operand_a >>> operand_b //Arithmetic RS
        default: alu_result = 32'b0;
    endcase
end

assign zero = alu_result == 32'b0;

endmodule