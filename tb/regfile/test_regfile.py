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
    r_addr1 = 0
    r_addr2 = 0
    
    w_addr = 0
    w_data = 0
    w_en = 0
    
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    expected_regs = [0 for _ in range(32)]

    for i in range(1000):
        r_addr1 = rand.randint(1, 31)
        r_addr2 = rand.randint(1, 31)
        w_addr = rand.randint(1, 31)
        w_data = rand.randint(0, 0xFFFFFFFF)

        await Timer(1, unit="ns")
        dut.r_addr1.value = r_addr1
        dut.r_addr2.value = r_addr2
        await Timer(1, unit="ns")
        assert dut.r_data1.value == expected_regs[r_addr1], f"Data mismatch at r_addr1 {r_addr1} for random write/read test, expected {hex(expected_regs[r_addr1])}, got {hex(dut.r_data1.value)}"
        assert dut.r_data2.value == expected_regs[r_addr2], f"Data mismatch at r_addr2 {r_addr2} for random write/read test, expected {hex(expected_regs[r_addr2])}, got {hex(dut.r_data2.value)}"

        dut.w_addr.value = w_addr
        dut.w_data.value = w_data
        dut.w_en.value = 1
        await RisingEdge(dut.clk)
        expected_regs[w_addr] = w_data
        await Timer(1, unit="ns")

    await Timer(1, unit="ns")
    dut.r_addr1.value = 0
    await Timer(1, unit="ns")
    previous_value = dut.r_data1.value
    dut.w_addr.value = 0
    dut.w_data.value = 0xFFFFFFFF
    dut.w_en.value = 1
    await RisingEdge(dut.clk)
    dut.w_en.value = 0

    await Timer(1, unit="ns")
    dut.r_addr1.value = 0
    await Timer(1, unit="ns")
    assert dut.r_data1.value == previous_value, f"Data mismatch at r_addr1 {r_addr1} for 0 write test, expected {hex(previous_value)}, got {hex(dut.r_data1.value)}"

