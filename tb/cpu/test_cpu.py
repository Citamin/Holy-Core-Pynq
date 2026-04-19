import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.types import LogicArray

def bin_to_hex(bin_str):
    # Convert binary string to hexadecimal
    hex_str = hex(int(str(bin_str), 2))[2:]
    hex_str = hex_str.zfill(8)
    return hex_str.upper()

def hex_to_bin(hex_str):
    # Convert hex str to bin
    bin_str = bin(int(str(hex_str), 16))[2:]
    bin_str = bin_str.zfill(32)
    return bin_str.upper()

async def cpu_reset(dut):
    # Init and reset
    dut.rst_n.value = 0
    await RisingEdge(dut.clk)     # Wait for a clock edge after reset
    dut.rst_n.value = 1           # De-assert reset
    await RisingEdge(dut.clk)     # Wait for a clock edge after reset
  
@cocotb.test()
async def cpu_insrt_test(dut):
    """Runs a lw test"""
    cocotb.start_soon(Clock(dut.clk, 1, unit="ns").start())
    await RisingEdge(dut.clk)

    await cpu_reset(dut)
    # The first instruction for the test in imem.hex load the data from
    # dmem @ adress 0x00000008 that happens to be 0xDEADBEEF into register x18

    # Wait a clock cycle for the instruction to execute
    await RisingEdge(dut.clk)

    # Check the value of reg x18
    assert bin_to_hex(dut.regf.regfile[18].value) == "DEADBEEF", f"Expected 0xDEADBEEF in x18, got {bin_to_hex(dut.regf.regfile[18].value)}"

    """Runs a sw test"""
    addr = int(0xC >> 2)
    assert bin_to_hex(dut.data_mem.mem[addr].value) == "F2F2F2F2", f"Expected 0xF2F2F2F2 at address {addr}, got {bin_to_hex(dut.data_mem.mem[addr].value)}"

    await RisingEdge(dut.clk)

    assert bin_to_hex(dut.data_mem.mem[addr].value) == "DEADBEEF", f"Expected 0xDEADBEEF at address {addr} after sw, got {bin_to_hex(dut.data_mem.mem[addr].value)}"


