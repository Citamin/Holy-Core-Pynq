// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(zero,0,0);
    VL_IN8(op,6,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct7,6,0);
    VL_OUT8(alu_ctrl,2,0);
    VL_OUT8(imm_src,2,0);
    VL_OUT8(reg_write,0,0);
    VL_OUT8(mem_write,0,0);
    CData/*0:0*/ control__DOT__zero;
    CData/*6:0*/ control__DOT__op;
    CData/*2:0*/ control__DOT__funct3;
    CData/*6:0*/ control__DOT__funct7;
    CData/*2:0*/ control__DOT__alu_ctrl;
    CData/*2:0*/ control__DOT__imm_src;
    CData/*0:0*/ control__DOT__reg_write;
    CData/*0:0*/ control__DOT__mem_write;
    CData/*1:0*/ control__DOT__alu_op;
    CData/*0:0*/ control__DOT____Vtogcov__zero;
    CData/*6:0*/ control__DOT____Vtogcov__op;
    CData/*2:0*/ control__DOT____Vtogcov__funct3;
    CData/*6:0*/ control__DOT____Vtogcov__funct7;
    CData/*2:0*/ control__DOT____Vtogcov__alu_ctrl;
    CData/*2:0*/ control__DOT____Vtogcov__imm_src;
    CData/*0:0*/ control__DOT____Vtogcov__reg_write;
    CData/*0:0*/ control__DOT____Vtogcov__mem_write;
    CData/*1:0*/ control__DOT____Vtogcov__alu_op;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
