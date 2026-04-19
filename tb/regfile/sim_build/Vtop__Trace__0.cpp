// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+2,(vlSelfRef.r_addr1),5);
    bufp->chgCData(oldp+3,(vlSelfRef.r_addr2),5);
    bufp->chgIData(oldp+4,(vlSelfRef.r_data1),32);
    bufp->chgIData(oldp+5,(vlSelfRef.r_data2),32);
    bufp->chgCData(oldp+6,(vlSelfRef.w_addr),5);
    bufp->chgIData(oldp+7,(vlSelfRef.w_data),32);
    bufp->chgBit(oldp+8,(vlSelfRef.w_en));
    bufp->chgBit(oldp+9,(vlSelfRef.regfile__DOT__clk));
    bufp->chgBit(oldp+10,(vlSelfRef.regfile__DOT__rst_n));
    bufp->chgCData(oldp+11,(vlSelfRef.regfile__DOT__r_addr1),5);
    bufp->chgCData(oldp+12,(vlSelfRef.regfile__DOT__r_addr2),5);
    bufp->chgIData(oldp+13,(vlSelfRef.regfile__DOT__r_data1),32);
    bufp->chgIData(oldp+14,(vlSelfRef.regfile__DOT__r_data2),32);
    bufp->chgCData(oldp+15,(vlSelfRef.regfile__DOT__w_addr),5);
    bufp->chgIData(oldp+16,(vlSelfRef.regfile__DOT__w_data),32);
    bufp->chgBit(oldp+17,(vlSelfRef.regfile__DOT__w_en));
    bufp->chgIData(oldp+18,(vlSelfRef.regfile__DOT__regfile[0]),32);
    bufp->chgIData(oldp+19,(vlSelfRef.regfile__DOT__regfile[1]),32);
    bufp->chgIData(oldp+20,(vlSelfRef.regfile__DOT__regfile[2]),32);
    bufp->chgIData(oldp+21,(vlSelfRef.regfile__DOT__regfile[3]),32);
    bufp->chgIData(oldp+22,(vlSelfRef.regfile__DOT__regfile[4]),32);
    bufp->chgIData(oldp+23,(vlSelfRef.regfile__DOT__regfile[5]),32);
    bufp->chgIData(oldp+24,(vlSelfRef.regfile__DOT__regfile[6]),32);
    bufp->chgIData(oldp+25,(vlSelfRef.regfile__DOT__regfile[7]),32);
    bufp->chgIData(oldp+26,(vlSelfRef.regfile__DOT__regfile[8]),32);
    bufp->chgIData(oldp+27,(vlSelfRef.regfile__DOT__regfile[9]),32);
    bufp->chgIData(oldp+28,(vlSelfRef.regfile__DOT__regfile[10]),32);
    bufp->chgIData(oldp+29,(vlSelfRef.regfile__DOT__regfile[11]),32);
    bufp->chgIData(oldp+30,(vlSelfRef.regfile__DOT__regfile[12]),32);
    bufp->chgIData(oldp+31,(vlSelfRef.regfile__DOT__regfile[13]),32);
    bufp->chgIData(oldp+32,(vlSelfRef.regfile__DOT__regfile[14]),32);
    bufp->chgIData(oldp+33,(vlSelfRef.regfile__DOT__regfile[15]),32);
    bufp->chgIData(oldp+34,(vlSelfRef.regfile__DOT__regfile[16]),32);
    bufp->chgIData(oldp+35,(vlSelfRef.regfile__DOT__regfile[17]),32);
    bufp->chgIData(oldp+36,(vlSelfRef.regfile__DOT__regfile[18]),32);
    bufp->chgIData(oldp+37,(vlSelfRef.regfile__DOT__regfile[19]),32);
    bufp->chgIData(oldp+38,(vlSelfRef.regfile__DOT__regfile[20]),32);
    bufp->chgIData(oldp+39,(vlSelfRef.regfile__DOT__regfile[21]),32);
    bufp->chgIData(oldp+40,(vlSelfRef.regfile__DOT__regfile[22]),32);
    bufp->chgIData(oldp+41,(vlSelfRef.regfile__DOT__regfile[23]),32);
    bufp->chgIData(oldp+42,(vlSelfRef.regfile__DOT__regfile[24]),32);
    bufp->chgIData(oldp+43,(vlSelfRef.regfile__DOT__regfile[25]),32);
    bufp->chgIData(oldp+44,(vlSelfRef.regfile__DOT__regfile[26]),32);
    bufp->chgIData(oldp+45,(vlSelfRef.regfile__DOT__regfile[27]),32);
    bufp->chgIData(oldp+46,(vlSelfRef.regfile__DOT__regfile[28]),32);
    bufp->chgIData(oldp+47,(vlSelfRef.regfile__DOT__regfile[29]),32);
    bufp->chgIData(oldp+48,(vlSelfRef.regfile__DOT__regfile[30]),32);
    bufp->chgIData(oldp+49,(vlSelfRef.regfile__DOT__regfile[31]),32);
    bufp->chgIData(oldp+50,(vlSelfRef.regfile__DOT__unnamedblk1__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
