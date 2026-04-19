// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"r_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"r_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"r_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"r_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"w_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"r_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"r_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"r_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"r_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"w_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+3,(vlSelfRef.r_addr1),5);
    bufp->fullCData(oldp+4,(vlSelfRef.r_addr2),5);
    bufp->fullIData(oldp+5,(vlSelfRef.r_data1),32);
    bufp->fullIData(oldp+6,(vlSelfRef.r_data2),32);
    bufp->fullCData(oldp+7,(vlSelfRef.w_addr),5);
    bufp->fullIData(oldp+8,(vlSelfRef.w_data),32);
    bufp->fullBit(oldp+9,(vlSelfRef.w_en));
    bufp->fullBit(oldp+10,(vlSelfRef.regfile__DOT__clk));
    bufp->fullBit(oldp+11,(vlSelfRef.regfile__DOT__rst_n));
    bufp->fullCData(oldp+12,(vlSelfRef.regfile__DOT__r_addr1),5);
    bufp->fullCData(oldp+13,(vlSelfRef.regfile__DOT__r_addr2),5);
    bufp->fullIData(oldp+14,(vlSelfRef.regfile__DOT__r_data1),32);
    bufp->fullIData(oldp+15,(vlSelfRef.regfile__DOT__r_data2),32);
    bufp->fullCData(oldp+16,(vlSelfRef.regfile__DOT__w_addr),5);
    bufp->fullIData(oldp+17,(vlSelfRef.regfile__DOT__w_data),32);
    bufp->fullBit(oldp+18,(vlSelfRef.regfile__DOT__w_en));
    bufp->fullIData(oldp+19,(vlSelfRef.regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.regfile__DOT__regfile[31]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.regfile__DOT__unnamedblk1__DOT__i),32);
}
