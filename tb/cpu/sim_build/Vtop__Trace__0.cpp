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
    bufp->chgBit(oldp+2,(vlSelfRef.cpu__DOT__clk));
    bufp->chgBit(oldp+3,(vlSelfRef.cpu__DOT__rst_n));
    bufp->chgIData(oldp+4,(vlSelfRef.cpu__DOT__pc),32);
    bufp->chgIData(oldp+5,(vlSelfRef.cpu__DOT__pc_next),32);
    bufp->chgIData(oldp+6,(vlSelfRef.cpu__DOT__instr),32);
    bufp->chgCData(oldp+7,(vlSelfRef.cpu__DOT__op),7);
    bufp->chgCData(oldp+8,(vlSelfRef.cpu__DOT__rd),5);
    bufp->chgCData(oldp+9,(vlSelfRef.cpu__DOT__funct3),3);
    bufp->chgCData(oldp+10,(vlSelfRef.cpu__DOT__rs1),5);
    bufp->chgCData(oldp+11,(vlSelfRef.cpu__DOT__rs2),5);
    bufp->chgSData(oldp+12,(vlSelfRef.cpu__DOT__imm),12);
    bufp->chgCData(oldp+13,(vlSelfRef.cpu__DOT__alu_ctrl),4);
    bufp->chgCData(oldp+14,(vlSelfRef.cpu__DOT__imm_src),3);
    bufp->chgBit(oldp+15,(vlSelfRef.cpu__DOT__reg_write));
    bufp->chgBit(oldp+16,(vlSelfRef.cpu__DOT__mem_write));
    bufp->chgIData(oldp+17,(vlSelfRef.cpu__DOT__read1),32);
    bufp->chgIData(oldp+18,(vlSelfRef.cpu__DOT__read2),32);
    bufp->chgIData(oldp+19,(vlSelfRef.cpu__DOT__mem_read),32);
    bufp->chgIData(oldp+20,(vlSelfRef.cpu__DOT__write_data),32);
    bufp->chgIData(oldp+21,(vlSelfRef.cpu__DOT__raw_imm),25);
    bufp->chgIData(oldp+22,(vlSelfRef.cpu__DOT__imm_ext),32);
    bufp->chgBit(oldp+23,(vlSelfRef.cpu__DOT__zero));
    bufp->chgIData(oldp+24,(vlSelfRef.cpu__DOT__alu_result),32);
    bufp->chgCData(oldp+25,(vlSelfRef.cpu__DOT__alu_unit__DOT__op),3);
    bufp->chgIData(oldp+26,(vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a),32);
    bufp->chgIData(oldp+27,(vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b),32);
    bufp->chgIData(oldp+28,(vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result),32);
    bufp->chgBit(oldp+29,(vlSelfRef.cpu__DOT__alu_unit__DOT__zero));
    bufp->chgBit(oldp+30,(vlSelfRef.cpu__DOT__ctrl__DOT__zero));
    bufp->chgCData(oldp+31,(vlSelfRef.cpu__DOT__ctrl__DOT__op),7);
    bufp->chgCData(oldp+32,(vlSelfRef.cpu__DOT__ctrl__DOT__funct3),3);
    bufp->chgCData(oldp+33,(vlSelfRef.cpu__DOT__ctrl__DOT__funct7),7);
    bufp->chgBit(oldp+34,(vlSelfRef.cpu__DOT__ctrl__DOT__alu_src));
    bufp->chgCData(oldp+35,(vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src),2);
    bufp->chgCData(oldp+36,(vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl),4);
    bufp->chgCData(oldp+37,(vlSelfRef.cpu__DOT__ctrl__DOT__imm_src),3);
    bufp->chgBit(oldp+38,(vlSelfRef.cpu__DOT__ctrl__DOT__reg_write));
    bufp->chgBit(oldp+39,(vlSelfRef.cpu__DOT__ctrl__DOT__mem_write));
    bufp->chgCData(oldp+40,(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op),2);
    bufp->chgBit(oldp+41,(vlSelfRef.cpu__DOT__data_mem__DOT__clk));
    bufp->chgBit(oldp+42,(vlSelfRef.cpu__DOT__data_mem__DOT__rst_n));
    bufp->chgIData(oldp+43,(vlSelfRef.cpu__DOT__data_mem__DOT__addr),32);
    bufp->chgIData(oldp+44,(vlSelfRef.cpu__DOT__data_mem__DOT__w_data),32);
    bufp->chgBit(oldp+45,(vlSelfRef.cpu__DOT__data_mem__DOT__w_en));
    bufp->chgIData(oldp+46,(vlSelfRef.cpu__DOT__data_mem__DOT__r_data),32);
    bufp->chgIData(oldp+47,(vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+48,(vlSelfRef.cpu__DOT__ext__DOT__raw_instr),25);
    bufp->chgCData(oldp+49,(vlSelfRef.cpu__DOT__ext__DOT__imm_src),3);
    bufp->chgIData(oldp+50,(vlSelfRef.cpu__DOT__ext__DOT__imm_out),32);
    bufp->chgSData(oldp+51,(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered),12);
    bufp->chgBit(oldp+52,(vlSelfRef.cpu__DOT__instr_mem__DOT__clk));
    bufp->chgBit(oldp+53,(vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n));
    bufp->chgIData(oldp+54,(vlSelfRef.cpu__DOT__instr_mem__DOT__addr),32);
    bufp->chgIData(oldp+55,(vlSelfRef.cpu__DOT__instr_mem__DOT__w_data),32);
    bufp->chgBit(oldp+56,(vlSelfRef.cpu__DOT__instr_mem__DOT__w_en));
    bufp->chgIData(oldp+57,(vlSelfRef.cpu__DOT__instr_mem__DOT__r_data),32);
    bufp->chgIData(oldp+58,(vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->chgBit(oldp+59,(vlSelfRef.cpu__DOT__regf__DOT__clk));
    bufp->chgBit(oldp+60,(vlSelfRef.cpu__DOT__regf__DOT__rst_n));
    bufp->chgCData(oldp+61,(vlSelfRef.cpu__DOT__regf__DOT__r_addr1),5);
    bufp->chgCData(oldp+62,(vlSelfRef.cpu__DOT__regf__DOT__r_addr2),5);
    bufp->chgIData(oldp+63,(vlSelfRef.cpu__DOT__regf__DOT__r_data1),32);
    bufp->chgIData(oldp+64,(vlSelfRef.cpu__DOT__regf__DOT__r_data2),32);
    bufp->chgCData(oldp+65,(vlSelfRef.cpu__DOT__regf__DOT__w_addr),5);
    bufp->chgIData(oldp+66,(vlSelfRef.cpu__DOT__regf__DOT__w_data),32);
    bufp->chgBit(oldp+67,(vlSelfRef.cpu__DOT__regf__DOT__w_en));
    bufp->chgIData(oldp+68,(vlSelfRef.cpu__DOT__regf__DOT__regfile[0]),32);
    bufp->chgIData(oldp+69,(vlSelfRef.cpu__DOT__regf__DOT__regfile[1]),32);
    bufp->chgIData(oldp+70,(vlSelfRef.cpu__DOT__regf__DOT__regfile[2]),32);
    bufp->chgIData(oldp+71,(vlSelfRef.cpu__DOT__regf__DOT__regfile[3]),32);
    bufp->chgIData(oldp+72,(vlSelfRef.cpu__DOT__regf__DOT__regfile[4]),32);
    bufp->chgIData(oldp+73,(vlSelfRef.cpu__DOT__regf__DOT__regfile[5]),32);
    bufp->chgIData(oldp+74,(vlSelfRef.cpu__DOT__regf__DOT__regfile[6]),32);
    bufp->chgIData(oldp+75,(vlSelfRef.cpu__DOT__regf__DOT__regfile[7]),32);
    bufp->chgIData(oldp+76,(vlSelfRef.cpu__DOT__regf__DOT__regfile[8]),32);
    bufp->chgIData(oldp+77,(vlSelfRef.cpu__DOT__regf__DOT__regfile[9]),32);
    bufp->chgIData(oldp+78,(vlSelfRef.cpu__DOT__regf__DOT__regfile[10]),32);
    bufp->chgIData(oldp+79,(vlSelfRef.cpu__DOT__regf__DOT__regfile[11]),32);
    bufp->chgIData(oldp+80,(vlSelfRef.cpu__DOT__regf__DOT__regfile[12]),32);
    bufp->chgIData(oldp+81,(vlSelfRef.cpu__DOT__regf__DOT__regfile[13]),32);
    bufp->chgIData(oldp+82,(vlSelfRef.cpu__DOT__regf__DOT__regfile[14]),32);
    bufp->chgIData(oldp+83,(vlSelfRef.cpu__DOT__regf__DOT__regfile[15]),32);
    bufp->chgIData(oldp+84,(vlSelfRef.cpu__DOT__regf__DOT__regfile[16]),32);
    bufp->chgIData(oldp+85,(vlSelfRef.cpu__DOT__regf__DOT__regfile[17]),32);
    bufp->chgIData(oldp+86,(vlSelfRef.cpu__DOT__regf__DOT__regfile[18]),32);
    bufp->chgIData(oldp+87,(vlSelfRef.cpu__DOT__regf__DOT__regfile[19]),32);
    bufp->chgIData(oldp+88,(vlSelfRef.cpu__DOT__regf__DOT__regfile[20]),32);
    bufp->chgIData(oldp+89,(vlSelfRef.cpu__DOT__regf__DOT__regfile[21]),32);
    bufp->chgIData(oldp+90,(vlSelfRef.cpu__DOT__regf__DOT__regfile[22]),32);
    bufp->chgIData(oldp+91,(vlSelfRef.cpu__DOT__regf__DOT__regfile[23]),32);
    bufp->chgIData(oldp+92,(vlSelfRef.cpu__DOT__regf__DOT__regfile[24]),32);
    bufp->chgIData(oldp+93,(vlSelfRef.cpu__DOT__regf__DOT__regfile[25]),32);
    bufp->chgIData(oldp+94,(vlSelfRef.cpu__DOT__regf__DOT__regfile[26]),32);
    bufp->chgIData(oldp+95,(vlSelfRef.cpu__DOT__regf__DOT__regfile[27]),32);
    bufp->chgIData(oldp+96,(vlSelfRef.cpu__DOT__regf__DOT__regfile[28]),32);
    bufp->chgIData(oldp+97,(vlSelfRef.cpu__DOT__regf__DOT__regfile[29]),32);
    bufp->chgIData(oldp+98,(vlSelfRef.cpu__DOT__regf__DOT__regfile[30]),32);
    bufp->chgIData(oldp+99,(vlSelfRef.cpu__DOT__regf__DOT__regfile[31]),32);
    bufp->chgIData(oldp+100,(vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i),32);
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
