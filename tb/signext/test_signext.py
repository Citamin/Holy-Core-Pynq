import cocotb
from cocotb.triggers import Timer
from cocotb.types import LogicArray
import random as rand

@cocotb.test()
async def random_pos_signext_test(dut):
    await Timer(1, unit="ns")
    imm = 0b001010100101
    imm <<= 13
    rest = 0b000000000000_1111111111111
    raw_instr_I = rest | imm
    print(f"Testing for I-Type instructions")
    dut.raw_instr.value = raw_instr_I
    dut.imm_src.value = 0
    await Timer(1, unit="ns")
    assert dut.imm_out.value == LogicArray("00000000000000000000001010100101"), f"Sign extension failed for positive immediate for I-Type, expected 0000000000000000000001010100101, got {bin(dut.imm_out.value)}"
    print(f"Testing for S-Type instructions")
    imm = 0b001010100101
    rest = 0b0000000_1111111111111_00000
    imm1 = ((imm >> 5) & 0b000001111111) << 18
    imm2 = ((imm << 7) & 0b111110000000) >> 7
    print(bin(imm1))
    print(bin(imm2))
    raw_instr_S = imm1 | rest | imm2
    print(f"Raw instruction for S-Type: {bin(raw_instr_S)}")
    dut.raw_instr.value = raw_instr_S
    dut.imm_src.value = 1
    await Timer(1, unit="ns")
    assert dut.imm_out.value == LogicArray("00000000000000000000001010100101"), f"Sign extension failed for positive immediate for S-Type, expected 0000000000000000000001010100101, got {bin(dut.imm_out.value)}"


@cocotb.test()
async def random_neg_signext_test(dut):
    await Timer(1, unit="ns")
    imm = 0b101010100101
    imm <<= 13
    rest = 0b000000000000_0101010101011
    raw_instr_I = rest | imm
    print(f"Testing for I-Type instructions")
    dut.raw_instr.value = raw_instr_I
    dut.imm_src.value = 0
    await Timer(1, unit="ns")
    assert dut.imm_out.value == LogicArray("11111111111111111111101010100101"), f"Sign extension failed for negative immediate for I-Type, expected 1111111111111111111101010100101, got {bin(dut.imm_out.value)}"
    print(f"Testing for S-Type instructions")
    imm = 0b101010100101
    rest = 0b0000000_1111111111111_00000
    imm1 = ((imm >> 5) & 0b000001111111) << 18
    imm2 = ((imm << 7) & 0b111110000000) >> 7
    raw_instr_S = imm1 | rest | imm2
    print(f"Raw instruction for S-Type: {bin(raw_instr_S)}")
    dut.raw_instr.value = raw_instr_S
    dut.imm_src.value = 1
    await Timer(1, unit="ns")
    assert dut.imm_out.value == LogicArray("11111111111111111111101010100101"), f"Sign extension failed for negative immediate for S-Type, expected 1111111111111111111101010100101, got {bin(dut.imm_out.value)}"


