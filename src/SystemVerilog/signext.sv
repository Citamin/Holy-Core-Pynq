module signext(
    input logic [24:0] raw_instr,
    input logic [2:0] imm_src,

    output logic [31:0] imm_out
);

logic [11:0] imm_gathered;

always_comb begin
    case (imm_src)
        3'b000: imm_gathered = raw_instr[24:13]; // I-type
        3'b001: imm_gathered = {raw_instr[24:18], raw_instr[4:0]}; // S-type
        default: imm_gathered = 12'b0;
    endcase
end

assign imm_out = {{20{imm_gathered[11]}}, imm_gathered};

endmodule