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
    dut.funct7.value = LogicArray("XXXXXXX")
    dut.zero.value = LogicArray("X")
    # dut.alu_last_bit.value = LogicArray("X")
    await Timer(1, unit="ns")

@cocotb.test()
async def control_test_I(dut):
    await set_unknown(dut)
    dut.op.value = 0b0000011
    await Timer(1, unit="ns")
    assert dut.alu_ctrl.value == 0b0000, f"ALU control signal mismatch for load instruction, expected 000, got {bin(dut.alu_ctrl.value)}"
    assert dut.imm_src.value == 0b000, f"Immediate source mismatch for load instruction, expected 000, got {bin(dut.imm_src.value)}"
    assert dut.alu_src.value == 1, f"ALU source mismatch for load instruction, expected 1, got {bin(dut.alu_src.value)}"
    assert dut.reg_write.value == 1, f"Register write enable mismatch for load instruction, expected 1, got {dut.reg_write.value}"
    assert dut.mem_write.value == 0, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"
    assert dut.write_back_src.value == 0b01, f"Write back source mismatch for load instruction, expected 01, got {dut.write_back_src.value}"


@cocotb.test()
async def control_test_S(dut):
    await set_unknown(dut)
    dut.op.value = 0b0100011
    await Timer(1, unit="ns")
    assert dut.alu_ctrl.value == 0b000, f"ALU control signal mismatch for load instruction, expected 000, got {bin(dut.alu_ctrl.value)}"
    assert dut.imm_src.value == 0b001, f"Immediate source mismatch for load instruction, expected 000, got {bin(dut.imm_src.value)}"
    assert dut.alu_src.value == 1, f"ALU source mismatch for load instruction, expected 1, got {bin(dut.alu_src.value)}"
    assert dut.reg_write.value == 0, f"Register write enable mismatch for load instruction, expected 1, got {dut.reg_write.value}"
    assert dut.mem_write.value == 1, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"

@cocotb.test()
async def control_test_R(dut):
    await set_unknown(dut)
    dut.op.value = 0b0110011
    funct3_values = [0b010, 0b011, 0b100, 0b110, 0b111]
    expected_alu_ctrl = [0b0101, 0b0111, 0b1000, 0b0011, 0b0010]
    for i in range(len(funct3_values)):
        dut.funct3.value = funct3_values[i]
        await Timer(1, unit="ns")
        assert dut.alu_ctrl.value == expected_alu_ctrl[i], f"ALU control signal mismatch for load instruction, expected {expected_alu_ctrl[i]}, got {bin(dut.alu_ctrl.value)}"
        assert dut.alu_src.value == 0, f"ALU source mismatch for load instruction, expected 0, got {bin(dut.alu_src.value)}"
        assert dut.reg_write.value == 0, f"Register write enable mismatch for load instruction, expected 0, got {dut.reg_write.value}"
        assert dut.mem_write.value == 1, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"
        assert dut.write_back_src.value == 0b00, f"Write back source mismatch for load instruction, expected 00, got {dut.write_back_src.value}"

    await set_unknown(dut)
    dut.op.value = 0b0010011
    funct3_values = [0b010, 0b011, 0b100, 0b110, 0b111]
    expected_alu_ctrl = [0b0101, 0b0111, 0b1000, 0b0011, 0b0010]
    for i in range(len(funct3_values)):
        dut.funct3.value = funct3_values[i]
        await Timer(1, unit="ns")
        assert dut.alu_ctrl.value == expected_alu_ctrl[i], f"ALU control signal mismatch for load instruction, expected {expected_alu_ctrl[i]}, got {bin(dut.alu_ctrl.value)}"
        assert dut.alu_src.value == 0, f"ALU source mismatch for load instruction, expected 0, got {bin(dut.alu_src.value)}"
        assert dut.reg_write.value == 0, f"Register write enable mismatch for load instruction, expected 0, got {dut.reg_write.value}"
        assert dut.mem_write.value == 1, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"
        assert dut.write_back_src.value == 0b00, f"Write back source mismatch for load instruction, expected 00, got {dut.write_back_src.value}"

"""@cocotb.test()
async def control_test_branch(dut):
    await set_unknown(dut)
    funct3_values = [0b000, 0b001, 0b100, 0b101, 0b110, 0b111]
    expected_alu_ctrl = [0b0001, 0b0101, 0b0111]
    for i in range(len(funct3_values)):
        dut.funct3.value = funct3_values[i]
        await Timer(1, unit="ns")
        assert dut.alu_ctrl.value == expected_alu_ctrl[int(i/2)], f"ALU control signal mismatch for load instruction, expected {expected_alu_ctrl[int(i/2)]}, got {bin(dut.alu_ctrl.value)}"
        assert dut.alu_src.value == 0, f"ALU source mismatch for load instruction, expected 0, got {bin(dut.alu_src.value)}"
        assert dut.reg_write.value == 0, f"Register write enable mismatch for load instruction, expected 0, got {dut.reg_write.value}"
        assert dut.mem_write.value == 1, f"Memory write enable mismatch for load instruction, expected 1, got {dut.mem_write.value}"
        assert dut.write_back_src.value == 0b00, f"Write back source mismatch for load instruction, expected 00, got {dut.write_back_src.value}"
"""


    
   

   
   