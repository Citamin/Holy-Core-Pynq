import cocotb
from cocotb.triggers import Timer
import random
from cocotb.types import LogicArray

async def set_unknown(dut):
    await Timer(1, units="ns")
    dut.op.value = LogicArray("XXXXXXX")
    #
    # Uncomment the following throughout the course when needed
    #
    dut.funct3.value = LogicArray("XXX")
    dut.funct7.value = LogicArray("XXXXXXX")
    dut.zero.value = LogicArray("X")
    # dut.alu_last_bit.value = LogicArray("X")
    await Timer(1, unit="ns")

@cocotb.test()
async def control_test_I(dut):
    await set_unknown(dut)
    dut.op.value = 0b0000011
    await Timer(1, unit="ns")
    assert dut.alu_ctrl.value == 0b000, f"ALU control signal mismatch for load instruction, expected 000, got {bin(dut.alu_ctrl.value)}"
    assert dut.imm_src.value == 0b000, f"Immediate source mismatch for load instruction, expected 000, got {bin(dut.imm_src.value)}"
    assert dut.reg_write.value == 1, f"Register write enable mismatch for load instruction, expected 1, got {dut.reg_write.value}"
    assert dut.mem_write.value == 0, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"

@cocotb.test()
async def control_test_S(dut):
    await set_unknown(dut)
    dut.op.value = 0b0100011
    await Timer(1, unit="ns")
    assert dut.alu_ctrl.value == 0b000, f"ALU control signal mismatch for load instruction, expected 000, got {bin(dut.alu_ctrl.value)}"
    assert dut.imm_src.value == 0b001, f"Immediate source mismatch for load instruction, expected 000, got {bin(dut.imm_src.value)}"
    assert dut.reg_write.value == 0, f"Register write enable mismatch for load instruction, expected 1, got {dut.reg_write.value}"
    assert dut.mem_write.value == 1, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"

   

   
   