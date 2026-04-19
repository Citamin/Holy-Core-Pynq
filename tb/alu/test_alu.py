import cocotb
from cocotb.triggers import Timer
from cocotb.types import LogicArray
import random as rand

@cocotb.test()
async def op_test(dut):
    await Timer(1, unit="ns")
    for i in range(1000):
        a = rand.randint(0, 0xFFFFFFFF)
        b = rand.randint(0, 0xFFFFFFFF)
        op = rand.randint(0, 6)

        dut.operand_a.value = a
        dut.operand_b.value = b
        dut.op.value = op

        await Timer(1, unit="ns")
        expected = 0
        if op == 0:
            expected = (a + b) & 0xFFFFFFFF
        elif op == 1:
            expected = (a - b) & 0xFFFFFFFF
        elif op == 2:
            expected = a & b
        elif op == 3:
            expected = a | b
        elif op == 4:
            expected = a ^ b
        elif op == 5:
            expected = ~ (a | b) & 0xFFFFFFFF
        assert dut.alu_result.value == expected, f"ALU operation {op} with inputs {hex(a)} and {hex(b)} failed, expected {bin(expected)}, got {bin(dut.alu_result.value)}"

@cocotb.test()
async def default_test(dut):
    await Timer(1, unit="ns")
    for i in range (6, 8):
        a = rand.randint(0, 0xFFFFFFFF)
        b = rand.randint(0, 0xFFFFFFFF)
        op = i
        
        dut.operand_a.value = a
        dut.operand_b.value = b
        dut.op.value = op

        await Timer(1, unit="ns")
        assert dut.alu_result.value == 0, f"ALU default case with op {op} failed, expected 0, got {hex(dut.result.value)}"

@cocotb.test()
async def zero_test(dut):
    await Timer(1, unit="ns")
    a = 123
    b = -123
    dut.operand_a.value = a
    dut.operand_b.value = b
    dut.op.value = 0
    await Timer(1, unit="ns")
    assert dut.alu_result.value == 0, f"ALU addition with zero result failed, expected 0, got {hex(dut.result.value)}"
    assert dut.zero.value == 1, f"ALU zero flag not set for zero result, expected 1, got {dut.zero.value}"

