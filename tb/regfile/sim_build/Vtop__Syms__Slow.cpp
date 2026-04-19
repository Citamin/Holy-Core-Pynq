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
    Verilated::stackCheck(262);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_regfile = new VerilatedScope{this, "regfile", "regfile", "regfile", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_regfile__unnamedblk1 = new VerilatedScope{this, "regfile.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_regfile);
    __Vhier.add(__Vscopep_regfile, __Vscopep_regfile__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("r_addr1", &(TOP.r_addr1), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_TOP->varInsert("r_addr2", &(TOP.r_addr2), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_TOP->varInsert("r_data1", &(TOP.r_data1), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("r_data2", &(TOP.r_data2), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("w_addr", &(TOP.w_addr), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_TOP->varInsert("w_data", &(TOP.w_data), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("w_en", &(TOP.w_en), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_regfile->varInsert("clk", &(TOP.regfile__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_regfile->varInsert("r_addr1", &(TOP.regfile__DOT__r_addr1), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_regfile->varInsert("r_addr2", &(TOP.regfile__DOT__r_addr2), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_regfile->varInsert("r_data1", &(TOP.regfile__DOT__r_data1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_regfile->varInsert("r_data2", &(TOP.regfile__DOT__r_data2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_regfile->varInsert("regfile", &(TOP.regfile__DOT__regfile), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,31 ,31,0);
    __Vscopep_regfile->varInsert("rst_n", &(TOP.regfile__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_regfile->varInsert("w_addr", &(TOP.regfile__DOT__w_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_regfile->varInsert("w_data", &(TOP.regfile__DOT__w_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_regfile->varInsert("w_en", &(TOP.regfile__DOT__w_en), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_regfile__unnamedblk1->varInsert("i", &(TOP.regfile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_regfile);
    __Vhier.remove(__Vscopep_regfile, __Vscopep_regfile__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_regfile, __Vscopep_regfile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_regfile__unnamedblk1, __Vscopep_regfile__unnamedblk1 = nullptr);
    // Tear down sub module instances
}
