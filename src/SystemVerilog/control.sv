module control(
    input logic zero,
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic [6:0] funct7,

    output logic alu_src,
    output logic [1:0] write_back_src,
    output logic [3:0] alu_ctrl,
    output logic [2:0] imm_src,
    output logic reg_write,
    output logic mem_write
);

logic [1:0] alu_op;

/*
Main Decoder
*/
always_comb begin
    case (op)
        // lw
        7'b0000011: begin
            alu_op = 2'b00;
            imm_src = 3'b000;
            reg_write = 1;
            mem_write = 0;
            alu_src = 1;
            write_back_src = 2'b01;
        end
        // sw
        7'b0100011: begin
            alu_op = 2'b00;
            imm_src = 3'b001;
            reg_write = 0;
            mem_write = 1;
            alu_src = 1;
            write_back_src = 2'bx;
        end
        // R-Type 
        7'b0110011, 7'b0010011: begin
            alu_op = 2'b10;
            imm_src = 3'bx;
            reg_write = 0;
            mem_write = 1;
            alu_src = 0;
            write_back_src = 2'b00;
        end
        default: begin
            alu_op = 2'b00;
            imm_src = 3'b000;
            reg_write = 0;
            mem_write = 0;
            alu_src = 0;
            write_back_src = 2'b00;
        end
    endcase
end

/*
ALU Decoder
*/
always_comb begin
    case (alu_op)
        2'b00: alu_ctrl = 4'b0000; // load/store
        2'b01: begin //branches
            case (funct3)
                3'b000, 3'b001: alu_ctrl = 4'b0001;  //beq, bne
                3'b100, 3'b101: alu_ctrl = 4'b0101;  //blt, bge
                3'b110, 3'b111: alu_ctrl = 4'b0111;  //bltu, bgeu
                default: alu_ctrl = 4'b1111;
            endcase
        end
        2'b10: begin //math: R-Type, I-Type
            case (funct3)
                3'b010: alu_ctrl = 4'b0101;  //slt, slti
                3'b011: alu_ctrl = 4'b0111;  //sltu, sltiu
                3'b100: alu_ctrl = 4'b1000;  //xor, xori
                3'b110: alu_ctrl = 4'b0011;  //or, ori
                3'b111: alu_ctrl = 4'b0010;  //and, andi
                default: alu_ctrl = 4'b1111;
            endcase
        end
        default: alu_ctrl = 4'b1111;
    endcase
end
endmodule