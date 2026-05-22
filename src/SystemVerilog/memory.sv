module memory #(
    parameter WORDS = 64,
    parameter mem_init = ""
)(
    input logic clk,
    input logic rst_n,
    input logic [31:0] addr,
    input logic [31:0] w_data,
    input logic w_en,

    output logic [31:0] r_data
);

/*
* Byte-addressable memory with 32-bit word size.
* Only aligned read/writes
*/

reg [31:0] mem [0:WORDS-1];

initial begin
    $readmemh(mem_init, mem);  // Load memory for simulation
end

always @(posedge clk) begin
    //Reset
    if (rst_n  == 1'b0) begin
        for (int i = 0; i < WORDS; i++) begin
            mem[i] <= 32'b0;
        end
    end

    else if (w_en) begin
        if (addr[1:0] == 2'b00) begin
            mem[addr>>2] <= w_data;
        end
    end
end

always_comb begin 
        r_data = mem[addr>>2];
end

endmodule
