import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

import random as rand
@cocotb.test()

async def memory_data_test(dut):
    # Generate clock 
    cocotb.start_soon(Clock(dut.clk, 1, unit="ns").start())
    await RisingEdge(dut.clk)

    # Reset DUT
    dut.rst_n.value = 0
    dut.w_en.value = 0
    dut.addr.value = 0
    dut.w_data.value = 0
    
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    # Test if everything is reset
    for address in range (dut.WORDS.value):
        dut.addr.value = address
        await Timer(1, unit="ns")
        assert dut.r_data.value == 0, f"Memory not reset at address {address}, expected 0, got {dut.r_data.value}"

    # Test write and read
    test_data = [
        (0, 0xDEADBEEF),
        (4, 0xCAFEBABE),
        (8, 0x12345678),
        (12, 0x87654321)
    ]

    for address, data in test_data:
        # Write data
        dut.addr.value = address
        dut.w_data.value = data
        dut.w_en.value = 1
        await RisingEdge(dut.clk)

        # Disable write after 1 clock
        dut.w_en.value = 0
        await RisingEdge(dut.clk)

        # Read data
        dut.addr.value = address
        await RisingEdge(dut.clk)
        assert dut.r_data.value == data, f"Data mismatch at address {address}, expected {hex(data)}, got {hex(dut.r_data.value)}"
    
    # Test multiple writes 
    for address in range (0, dut.WORDS.value, 4):
        dut.addr.value = address
        dut.w_en.value = 1
        dut.w_data.value = address + 100
        await RisingEdge(dut.clk)

    dut.w_en.value = 0
    for address in range (0, dut.WORDS.value, 4):
        dut.addr.value = address
        await RisingEdge(dut.clk)
        assert dut.r_data.value == address + 100, f"Data mismatch at address {address}, expected {hex(address + 100)}, got {hex(dut.r_data.value)}"