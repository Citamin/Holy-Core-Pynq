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
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(r_addr1,4,0);
    VL_IN8(r_addr2,4,0);
    VL_IN8(w_addr,4,0);
    VL_IN8(w_en,0,0);
    CData/*0:0*/ regfile__DOT__clk;
    CData/*0:0*/ regfile__DOT__rst_n;
    CData/*4:0*/ regfile__DOT__r_addr1;
    CData/*4:0*/ regfile__DOT__r_addr2;
    CData/*4:0*/ regfile__DOT__w_addr;
    CData/*0:0*/ regfile__DOT__w_en;
    CData/*0:0*/ regfile__DOT____Vtogcov__clk;
    CData/*0:0*/ regfile__DOT____Vtogcov__rst_n;
    CData/*4:0*/ regfile__DOT____Vtogcov__r_addr1;
    CData/*4:0*/ regfile__DOT____Vtogcov__r_addr2;
    CData/*4:0*/ regfile__DOT____Vtogcov__w_addr;
    CData/*0:0*/ regfile__DOT____Vtogcov__w_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__regfile__DOT__clk__0;
    VL_OUT(r_data1,31,0);
    VL_OUT(r_data2,31,0);
    VL_IN(w_data,31,0);
    IData/*31:0*/ regfile__DOT__r_data1;
    IData/*31:0*/ regfile__DOT__r_data2;
    IData/*31:0*/ regfile__DOT__w_data;
    IData/*31:0*/ regfile__DOT____Vtogcov__r_data1;
    IData/*31:0*/ regfile__DOT____Vtogcov__r_data2;
    IData/*31:0*/ regfile__DOT____Vtogcov__w_data;
    IData/*31:0*/ regfile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> regfile__DOT__regfile;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 32>, false, IData/*31:0*/, 1> __VdlyCommitQueueregfile__DOT__regfile;

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
