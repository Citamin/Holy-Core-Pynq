// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(286);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu = new VerilatedScope{this, "cpu", "cpu", "cpu", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__alu_unit = new VerilatedScope{this, "cpu.alu_unit", "alu_unit", "alu", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__ctrl = new VerilatedScope{this, "cpu.ctrl", "ctrl", "control", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__data_mem = new VerilatedScope{this, "cpu.data_mem", "data_mem", "memory", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__data_mem__unnamedblk1 = new VerilatedScope{this, "cpu.data_mem.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu__ext = new VerilatedScope{this, "cpu.ext", "ext", "signext", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__instr_mem = new VerilatedScope{this, "cpu.instr_mem", "instr_mem", "memory", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__instr_mem__unnamedblk1 = new VerilatedScope{this, "cpu.instr_mem.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_cpu__regf = new VerilatedScope{this, "cpu.regf", "regf", "regfile", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_cpu__regf__unnamedblk1 = new VerilatedScope{this, "cpu.regf.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_cpu);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__alu_unit);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__ctrl);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__data_mem);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__ext);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__instr_mem);
    __Vhier.add(__Vscopep_cpu, __Vscopep_cpu__regf);
    __Vhier.add(__Vscopep_cpu__data_mem, __Vscopep_cpu__data_mem__unnamedblk1);
    __Vhier.add(__Vscopep_cpu__instr_mem, __Vscopep_cpu__instr_mem__unnamedblk1);
    __Vhier.add(__Vscopep_cpu__regf, __Vscopep_cpu__regf__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("alu_ctrl", &(TOP.cpu__DOT__alu_ctrl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_cpu->varInsert("alu_result", &(TOP.cpu__DOT__alu_result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("clk", &(TOP.cpu__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("funct3", &(TOP.cpu__DOT__funct3), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu->varInsert("imm", &(TOP.cpu__DOT__imm), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,11,0);
    __Vscopep_cpu->varInsert("imm_ext", &(TOP.cpu__DOT__imm_ext), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("imm_src", &(TOP.cpu__DOT__imm_src), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu->varInsert("instr", &(TOP.cpu__DOT__instr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("mem_read", &(TOP.cpu__DOT__mem_read), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("mem_write", &(TOP.cpu__DOT__mem_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("op", &(TOP.cpu__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_cpu->varInsert("pc", &(TOP.cpu__DOT__pc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("pc_next", &(TOP.cpu__DOT__pc_next), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("raw_imm", &(TOP.cpu__DOT__raw_imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,24,0);
    __Vscopep_cpu->varInsert("rd", &(TOP.cpu__DOT__rd), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu->varInsert("read1", &(TOP.cpu__DOT__read1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("read2", &(TOP.cpu__DOT__read2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("reg_write", &(TOP.cpu__DOT__reg_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("rs1", &(TOP.cpu__DOT__rs1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu->varInsert("rs2", &(TOP.cpu__DOT__rs2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu->varInsert("rst_n", &(TOP.cpu__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu->varInsert("write_data", &(TOP.cpu__DOT__write_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu->varInsert("zero", &(TOP.cpu__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__alu_unit->varInsert("alu_result", &(TOP.cpu__DOT__alu_unit__DOT__alu_result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__alu_unit->varInsert("op", &(TOP.cpu__DOT__alu_unit__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__alu_unit->varInsert("operand_a", &(TOP.cpu__DOT__alu_unit__DOT__operand_a), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__alu_unit->varInsert("operand_b", &(TOP.cpu__DOT__alu_unit__DOT__operand_b), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__alu_unit->varInsert("zero", &(TOP.cpu__DOT__alu_unit__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__ctrl->varInsert("alu_ctrl", &(TOP.cpu__DOT__ctrl__DOT__alu_ctrl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_cpu__ctrl->varInsert("alu_op", &(TOP.cpu__DOT__ctrl__DOT__alu_op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_cpu__ctrl->varInsert("alu_src", &(TOP.cpu__DOT__ctrl__DOT__alu_src), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__ctrl->varInsert("funct3", &(TOP.cpu__DOT__ctrl__DOT__funct3), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__ctrl->varInsert("funct7", &(TOP.cpu__DOT__ctrl__DOT__funct7), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_cpu__ctrl->varInsert("imm_src", &(TOP.cpu__DOT__ctrl__DOT__imm_src), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__ctrl->varInsert("mem_write", &(TOP.cpu__DOT__ctrl__DOT__mem_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__ctrl->varInsert("op", &(TOP.cpu__DOT__ctrl__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_cpu__ctrl->varInsert("reg_write", &(TOP.cpu__DOT__ctrl__DOT__reg_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__ctrl->varInsert("write_back_src", &(TOP.cpu__DOT__ctrl__DOT__write_back_src), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_cpu__ctrl->varInsert("zero", &(TOP.cpu__DOT__ctrl__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_mem->varInsert("WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__data_mem__DOT__WORDS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_mem->varInsert("addr", &(TOP.cpu__DOT__data_mem__DOT__addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_mem->varInsert("clk", &(TOP.cpu__DOT__data_mem__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_mem->varInsert("mem", &(TOP.cpu__DOT__data_mem__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,63 ,31,0);
    __Vscopep_cpu__data_mem->varInsert("mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__data_mem__DOT__mem_init))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,143,0);
    __Vscopep_cpu__data_mem->varInsert("r_data", &(TOP.cpu__DOT__data_mem__DOT__r_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_mem->varInsert("rst_n", &(TOP.cpu__DOT__data_mem__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_mem->varInsert("w_data", &(TOP.cpu__DOT__data_mem__DOT__w_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__data_mem->varInsert("w_en", &(TOP.cpu__DOT__data_mem__DOT__w_en), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__data_mem__unnamedblk1->varInsert("i", &(TOP.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_cpu__ext->varInsert("imm_gathered", &(TOP.cpu__DOT__ext__DOT__imm_gathered), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,11,0);
    __Vscopep_cpu__ext->varInsert("imm_out", &(TOP.cpu__DOT__ext__DOT__imm_out), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__ext->varInsert("imm_src", &(TOP.cpu__DOT__ext__DOT__imm_src), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_cpu__ext->varInsert("raw_instr", &(TOP.cpu__DOT__ext__DOT__raw_instr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,24,0);
    __Vscopep_cpu__instr_mem->varInsert("WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__instr_mem__DOT__WORDS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instr_mem->varInsert("addr", &(TOP.cpu__DOT__instr_mem__DOT__addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instr_mem->varInsert("clk", &(TOP.cpu__DOT__instr_mem__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__instr_mem->varInsert("mem", &(TOP.cpu__DOT__instr_mem__DOT__mem), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,63 ,31,0);
    __Vscopep_cpu__instr_mem->varInsert("mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__instr_mem__DOT__mem_init))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,143,0);
    __Vscopep_cpu__instr_mem->varInsert("r_data", &(TOP.cpu__DOT__instr_mem__DOT__r_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instr_mem->varInsert("rst_n", &(TOP.cpu__DOT__instr_mem__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__instr_mem->varInsert("w_data", &(TOP.cpu__DOT__instr_mem__DOT__w_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__instr_mem->varInsert("w_en", &(TOP.cpu__DOT__instr_mem__DOT__w_en), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__instr_mem__unnamedblk1->varInsert("i", &(TOP.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_cpu__regf->varInsert("clk", &(TOP.cpu__DOT__regf__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__regf->varInsert("r_addr1", &(TOP.cpu__DOT__regf__DOT__r_addr1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu__regf->varInsert("r_addr2", &(TOP.cpu__DOT__regf__DOT__r_addr2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu__regf->varInsert("r_data1", &(TOP.cpu__DOT__regf__DOT__r_data1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__regf->varInsert("r_data2", &(TOP.cpu__DOT__regf__DOT__r_data2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__regf->varInsert("regfile", &(TOP.cpu__DOT__regf__DOT__regfile), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,31 ,31,0);
    __Vscopep_cpu__regf->varInsert("rst_n", &(TOP.cpu__DOT__regf__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__regf->varInsert("w_addr", &(TOP.cpu__DOT__regf__DOT__w_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_cpu__regf->varInsert("w_data", &(TOP.cpu__DOT__regf__DOT__w_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_cpu__regf->varInsert("w_en", &(TOP.cpu__DOT__regf__DOT__w_en), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_cpu__regf__unnamedblk1->varInsert("i", &(TOP.cpu__DOT__regf__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_cpu);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__alu_unit);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__ctrl);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__data_mem);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__ext);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__instr_mem);
    __Vhier.remove(__Vscopep_cpu, __Vscopep_cpu__regf);
    __Vhier.remove(__Vscopep_cpu__data_mem, __Vscopep_cpu__data_mem__unnamedblk1);
    __Vhier.remove(__Vscopep_cpu__instr_mem, __Vscopep_cpu__instr_mem__unnamedblk1);
    __Vhier.remove(__Vscopep_cpu__regf, __Vscopep_cpu__regf__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu, __Vscopep_cpu = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__alu_unit, __Vscopep_cpu__alu_unit = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__ctrl, __Vscopep_cpu__ctrl = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__data_mem, __Vscopep_cpu__data_mem = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__data_mem__unnamedblk1, __Vscopep_cpu__data_mem__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__ext, __Vscopep_cpu__ext = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__instr_mem, __Vscopep_cpu__instr_mem = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__instr_mem__unnamedblk1, __Vscopep_cpu__instr_mem__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__regf, __Vscopep_cpu__regf = nullptr);
    VL_DO_CLEAR(delete __Vscopep_cpu__regf__unnamedblk1, __Vscopep_cpu__regf__unnamedblk1 = nullptr);
    // Tear down sub module instances
}
