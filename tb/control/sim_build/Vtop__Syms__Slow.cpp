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
    Verilated::stackCheck(124);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_control = new VerilatedScope{this, "control", "control", "control", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_control);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("alu_ctrl", &(TOP.alu_ctrl), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("funct3", &(TOP.funct3), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("funct7", &(TOP.funct7), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_TOP->varInsert("imm_src", &(TOP.imm_src), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("mem_write", &(TOP.mem_write), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("op", &(TOP.op), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_TOP->varInsert("reg_write", &(TOP.reg_write), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("zero", &(TOP.zero), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_control->varInsert("alu_ctrl", &(TOP.control__DOT__alu_ctrl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_control->varInsert("alu_op", &(TOP.control__DOT__alu_op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_control->varInsert("funct3", &(TOP.control__DOT__funct3), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_control->varInsert("funct7", &(TOP.control__DOT__funct7), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_control->varInsert("imm_src", &(TOP.control__DOT__imm_src), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_control->varInsert("mem_write", &(TOP.control__DOT__mem_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control->varInsert("op", &(TOP.control__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_control->varInsert("reg_write", &(TOP.control__DOT__reg_write), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_control->varInsert("zero", &(TOP.control__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_control);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_control, __Vscopep_control = nullptr);
    // Tear down sub module instances
}
