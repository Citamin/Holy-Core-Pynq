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
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+14,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"imm_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"read1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"read2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"raw_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+23,0,"imm_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+35,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"write_back_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"imm_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+103,0,"mem_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"raw_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+50,0,"imm_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"imm_gathered",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+108,0,"mem_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+53,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("regf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"r_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"r_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"r_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"r_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"w_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+69+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
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

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+102,(0x00000040U),32);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x5f646d65U;
    __Vtemp_1[3U] = 0x74657374U;
    __Vtemp_1[4U] = 0x00002e2fU;
    bufp->fullWData(oldp+103,(__Vtemp_1),144);
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x6d6f7279U;
    __Vtemp_2[2U] = 0x5f696d65U;
    __Vtemp_2[3U] = 0x74657374U;
    __Vtemp_2[4U] = 0x00002e2fU;
    bufp->fullWData(oldp+108,(__Vtemp_2),144);
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
    bufp->fullBit(oldp+3,(vlSelfRef.cpu__DOT__clk));
    bufp->fullBit(oldp+4,(vlSelfRef.cpu__DOT__rst_n));
    bufp->fullIData(oldp+5,(vlSelfRef.cpu__DOT__pc),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cpu__DOT__pc_next),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cpu__DOT__instr),32);
    bufp->fullCData(oldp+8,(vlSelfRef.cpu__DOT__op),7);
    bufp->fullCData(oldp+9,(vlSelfRef.cpu__DOT__rd),5);
    bufp->fullCData(oldp+10,(vlSelfRef.cpu__DOT__funct3),3);
    bufp->fullCData(oldp+11,(vlSelfRef.cpu__DOT__rs1),5);
    bufp->fullCData(oldp+12,(vlSelfRef.cpu__DOT__rs2),5);
    bufp->fullSData(oldp+13,(vlSelfRef.cpu__DOT__imm),12);
    bufp->fullCData(oldp+14,(vlSelfRef.cpu__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+15,(vlSelfRef.cpu__DOT__imm_src),3);
    bufp->fullBit(oldp+16,(vlSelfRef.cpu__DOT__reg_write));
    bufp->fullBit(oldp+17,(vlSelfRef.cpu__DOT__mem_write));
    bufp->fullIData(oldp+18,(vlSelfRef.cpu__DOT__read1),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cpu__DOT__read2),32);
    bufp->fullIData(oldp+20,(vlSelfRef.cpu__DOT__mem_read),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cpu__DOT__write_data),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cpu__DOT__raw_imm),25);
    bufp->fullIData(oldp+23,(vlSelfRef.cpu__DOT__imm_ext),32);
    bufp->fullBit(oldp+24,(vlSelfRef.cpu__DOT__zero));
    bufp->fullIData(oldp+25,(vlSelfRef.cpu__DOT__alu_result),32);
    bufp->fullCData(oldp+26,(vlSelfRef.cpu__DOT__alu_unit__DOT__op),3);
    bufp->fullIData(oldp+27,(vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a),32);
    bufp->fullIData(oldp+28,(vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b),32);
    bufp->fullIData(oldp+29,(vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result),32);
    bufp->fullBit(oldp+30,(vlSelfRef.cpu__DOT__alu_unit__DOT__zero));
    bufp->fullBit(oldp+31,(vlSelfRef.cpu__DOT__ctrl__DOT__zero));
    bufp->fullCData(oldp+32,(vlSelfRef.cpu__DOT__ctrl__DOT__op),7);
    bufp->fullCData(oldp+33,(vlSelfRef.cpu__DOT__ctrl__DOT__funct3),3);
    bufp->fullCData(oldp+34,(vlSelfRef.cpu__DOT__ctrl__DOT__funct7),7);
    bufp->fullBit(oldp+35,(vlSelfRef.cpu__DOT__ctrl__DOT__alu_src));
    bufp->fullCData(oldp+36,(vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src),2);
    bufp->fullCData(oldp+37,(vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+38,(vlSelfRef.cpu__DOT__ctrl__DOT__imm_src),3);
    bufp->fullBit(oldp+39,(vlSelfRef.cpu__DOT__ctrl__DOT__reg_write));
    bufp->fullBit(oldp+40,(vlSelfRef.cpu__DOT__ctrl__DOT__mem_write));
    bufp->fullCData(oldp+41,(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op),2);
    bufp->fullBit(oldp+42,(vlSelfRef.cpu__DOT__data_mem__DOT__clk));
    bufp->fullBit(oldp+43,(vlSelfRef.cpu__DOT__data_mem__DOT__rst_n));
    bufp->fullIData(oldp+44,(vlSelfRef.cpu__DOT__data_mem__DOT__addr),32);
    bufp->fullIData(oldp+45,(vlSelfRef.cpu__DOT__data_mem__DOT__w_data),32);
    bufp->fullBit(oldp+46,(vlSelfRef.cpu__DOT__data_mem__DOT__w_en));
    bufp->fullIData(oldp+47,(vlSelfRef.cpu__DOT__data_mem__DOT__r_data),32);
    bufp->fullIData(oldp+48,(vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+49,(vlSelfRef.cpu__DOT__ext__DOT__raw_instr),25);
    bufp->fullCData(oldp+50,(vlSelfRef.cpu__DOT__ext__DOT__imm_src),3);
    bufp->fullIData(oldp+51,(vlSelfRef.cpu__DOT__ext__DOT__imm_out),32);
    bufp->fullSData(oldp+52,(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered),12);
    bufp->fullBit(oldp+53,(vlSelfRef.cpu__DOT__instr_mem__DOT__clk));
    bufp->fullBit(oldp+54,(vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n));
    bufp->fullIData(oldp+55,(vlSelfRef.cpu__DOT__instr_mem__DOT__addr),32);
    bufp->fullIData(oldp+56,(vlSelfRef.cpu__DOT__instr_mem__DOT__w_data),32);
    bufp->fullBit(oldp+57,(vlSelfRef.cpu__DOT__instr_mem__DOT__w_en));
    bufp->fullIData(oldp+58,(vlSelfRef.cpu__DOT__instr_mem__DOT__r_data),32);
    bufp->fullIData(oldp+59,(vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+60,(vlSelfRef.cpu__DOT__regf__DOT__clk));
    bufp->fullBit(oldp+61,(vlSelfRef.cpu__DOT__regf__DOT__rst_n));
    bufp->fullCData(oldp+62,(vlSelfRef.cpu__DOT__regf__DOT__r_addr1),5);
    bufp->fullCData(oldp+63,(vlSelfRef.cpu__DOT__regf__DOT__r_addr2),5);
    bufp->fullIData(oldp+64,(vlSelfRef.cpu__DOT__regf__DOT__r_data1),32);
    bufp->fullIData(oldp+65,(vlSelfRef.cpu__DOT__regf__DOT__r_data2),32);
    bufp->fullCData(oldp+66,(vlSelfRef.cpu__DOT__regf__DOT__w_addr),5);
    bufp->fullIData(oldp+67,(vlSelfRef.cpu__DOT__regf__DOT__w_data),32);
    bufp->fullBit(oldp+68,(vlSelfRef.cpu__DOT__regf__DOT__w_en));
    bufp->fullIData(oldp+69,(vlSelfRef.cpu__DOT__regf__DOT__regfile[0]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.cpu__DOT__regf__DOT__regfile[1]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.cpu__DOT__regf__DOT__regfile[2]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.cpu__DOT__regf__DOT__regfile[3]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.cpu__DOT__regf__DOT__regfile[4]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.cpu__DOT__regf__DOT__regfile[5]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.cpu__DOT__regf__DOT__regfile[6]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.cpu__DOT__regf__DOT__regfile[7]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.cpu__DOT__regf__DOT__regfile[8]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.cpu__DOT__regf__DOT__regfile[9]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.cpu__DOT__regf__DOT__regfile[10]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.cpu__DOT__regf__DOT__regfile[11]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.cpu__DOT__regf__DOT__regfile[12]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.cpu__DOT__regf__DOT__regfile[13]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.cpu__DOT__regf__DOT__regfile[14]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.cpu__DOT__regf__DOT__regfile[15]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.cpu__DOT__regf__DOT__regfile[16]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.cpu__DOT__regf__DOT__regfile[17]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.cpu__DOT__regf__DOT__regfile[18]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.cpu__DOT__regf__DOT__regfile[19]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.cpu__DOT__regf__DOT__regfile[20]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.cpu__DOT__regf__DOT__regfile[21]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.cpu__DOT__regf__DOT__regfile[22]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.cpu__DOT__regf__DOT__regfile[23]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.cpu__DOT__regf__DOT__regfile[24]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.cpu__DOT__regf__DOT__regfile[25]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.cpu__DOT__regf__DOT__regfile[26]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.cpu__DOT__regf__DOT__regfile[27]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.cpu__DOT__regf__DOT__regfile[28]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.cpu__DOT__regf__DOT__regfile[29]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.cpu__DOT__regf__DOT__regfile[30]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.cpu__DOT__regf__DOT__regfile[31]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i),32);
}
