module regfile (
    input logic clk,
    input logic rst_n,

    input logic [4:0] r_addr1,
    input logic [4:0] r_addr2,
    output logic [31:0] r_data1,
    output logic [31:0] r_data2,

    input logic [4:0] w_addr,
    input logic [31:0] w_data,
    input logic w_en

);

reg [31:0] regfile [0:31];
always @(posedge clk) begin
    if (rst_n == 1'b0) begin
        for (int i = 0; i < 32; i++) begin
            regfile[i] <= 32'b0;
        end
    end

    else if(w_en == 1'b1 && w_addr != 5'b0) begin 
            regfile[w_addr] <= w_data;
    end
end

always_comb begin
        r_data1 = regfile[r_addr1];
        r_data2 = regfile[r_addr2];
end

endmodule
