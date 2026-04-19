// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((vlSelfRef.cpu__DOT__pc ^ vlSelfRef.cpu__DOT____Vtogcov__pc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4, vlSelfRef.cpu__DOT__pc, vlSelfRef.cpu__DOT____Vtogcov__pc);
        vlSelfRef.cpu__DOT____Vtogcov__pc = vlSelfRef.cpu__DOT__pc;
    }
    if (((IData)(vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n) 
         ^ (IData)(vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 731, vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__rst_n);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__rst_n 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n;
    }
    if ((vlSelfRef.cpu__DOT__instr_mem__DOT__w_data 
         ^ vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__w_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 797, vlSelfRef.cpu__DOT__instr_mem__DOT__w_data, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__w_data);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__w_data 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__w_data;
    }
    if (((IData)(vlSelfRef.cpu__DOT__instr_mem__DOT__w_en) 
         ^ (IData)(vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__w_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 861, vlSelfRef.cpu__DOT__instr_mem__DOT__w_en, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__w_en);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__w_en 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__w_en;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__zero) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 936, vlSelfRef.cpu__DOT__ctrl__DOT__zero, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__zero);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__zero 
            = vlSelfRef.cpu__DOT__ctrl__DOT__zero;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__funct7) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct7))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 958, vlSelfRef.cpu__DOT__ctrl__DOT__funct7, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct7);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct7 
            = vlSelfRef.cpu__DOT__ctrl__DOT__funct7;
    }
    if (((IData)(vlSelfRef.cpu__DOT__data_mem__DOT__rst_n) 
         ^ (IData)(vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1604, vlSelfRef.cpu__DOT__data_mem__DOT__rst_n, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__rst_n);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__rst_n 
            = vlSelfRef.cpu__DOT__data_mem__DOT__rst_n;
    }
    vlSelfRef.cpu__DOT__pc_next = ((IData)(4U) + vlSelfRef.cpu__DOT__pc);
    vlSelfRef.cpu__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.cpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.cpu__DOT__instr_mem__DOT__addr = vlSelfRef.cpu__DOT__pc;
    if ((vlSelfRef.cpu__DOT__pc_next ^ vlSelfRef.cpu__DOT____Vtogcov__pc_next)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 68, vlSelfRef.cpu__DOT__pc_next, vlSelfRef.cpu__DOT____Vtogcov__pc_next);
        vlSelfRef.cpu__DOT____Vtogcov__pc_next = vlSelfRef.cpu__DOT__pc_next;
    }
    if (((IData)(vlSelfRef.cpu__DOT__rst_n) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2, vlSelfRef.cpu__DOT__rst_n, vlSelfRef.cpu__DOT____Vtogcov__rst_n);
        vlSelfRef.cpu__DOT____Vtogcov__rst_n = vlSelfRef.cpu__DOT__rst_n;
    }
    vlSelfRef.cpu__DOT__regf__DOT__rst_n = vlSelfRef.cpu__DOT__rst_n;
    if (((IData)(vlSelfRef.cpu__DOT__clk) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.cpu__DOT__clk, vlSelfRef.cpu__DOT____Vtogcov__clk);
        vlSelfRef.cpu__DOT____Vtogcov__clk = vlSelfRef.cpu__DOT__clk;
    }
    vlSelfRef.cpu__DOT__instr_mem__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__regf__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__data_mem__DOT__clk = vlSelfRef.cpu__DOT__clk;
    if ((vlSelfRef.cpu__DOT__instr_mem__DOT__addr ^ vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 733, vlSelfRef.cpu__DOT__instr_mem__DOT__addr, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__addr);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__addr 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__addr;
    }
    vlSelfRef.cpu__DOT__instr_mem__DOT__r_data = vlSelfRef.cpu__DOT__instr_mem__DOT__mem
        [(0x0000003fU & (vlSelfRef.cpu__DOT__instr_mem__DOT__addr 
                         >> 2U))];
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__rst_n) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1011, vlSelfRef.cpu__DOT__regf__DOT__rst_n, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__rst_n);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__rst_n 
            = vlSelfRef.cpu__DOT__regf__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.cpu__DOT__instr_mem__DOT__clk) 
         ^ (IData)(vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 729, vlSelfRef.cpu__DOT__instr_mem__DOT__clk, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__clk);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__clk 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__clk;
    }
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__clk) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1009, vlSelfRef.cpu__DOT__regf__DOT__clk, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__clk);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__clk 
            = vlSelfRef.cpu__DOT__regf__DOT__clk;
    }
    if (((IData)(vlSelfRef.cpu__DOT__data_mem__DOT__clk) 
         ^ (IData)(vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1602, vlSelfRef.cpu__DOT__data_mem__DOT__clk, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__clk);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__clk 
            = vlSelfRef.cpu__DOT__data_mem__DOT__clk;
    }
    if ((vlSelfRef.cpu__DOT__instr_mem__DOT__r_data 
         ^ vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__r_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 863, vlSelfRef.cpu__DOT__instr_mem__DOT__r_data, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__r_data);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__r_data 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__r_data;
    }
    vlSelfRef.cpu__DOT__instr = vlSelfRef.cpu__DOT__instr_mem__DOT__r_data;
    if ((vlSelfRef.cpu__DOT__instr ^ vlSelfRef.cpu__DOT____Vtogcov__instr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 136, vlSelfRef.cpu__DOT__instr, vlSelfRef.cpu__DOT____Vtogcov__instr);
        vlSelfRef.cpu__DOT____Vtogcov__instr = vlSelfRef.cpu__DOT__instr;
    }
    vlSelfRef.cpu__DOT__imm = (vlSelfRef.cpu__DOT__instr 
                               >> 0x00000014U);
    vlSelfRef.cpu__DOT__rd = (0x0000001fU & (vlSelfRef.cpu__DOT__instr 
                                             >> 7U));
    vlSelfRef.cpu__DOT__funct3 = (7U & (vlSelfRef.cpu__DOT__instr 
                                        >> 0x0000000cU));
    vlSelfRef.cpu__DOT__rs2 = (0x0000001fU & (vlSelfRef.cpu__DOT__instr 
                                              >> 0x00000014U));
    vlSelfRef.cpu__DOT__rs1 = (0x0000001fU & (vlSelfRef.cpu__DOT__instr 
                                              >> 0x0000000fU));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instr 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x0000007fU & vlSelfRef.cpu__DOT__instr);
    if (((IData)(vlSelfRef.cpu__DOT__imm) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__imm))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 250, vlSelfRef.cpu__DOT__imm, vlSelfRef.cpu__DOT____Vtogcov__imm);
        vlSelfRef.cpu__DOT____Vtogcov__imm = vlSelfRef.cpu__DOT__imm;
    }
    if (((IData)(vlSelfRef.cpu__DOT__rd) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 214, vlSelfRef.cpu__DOT__rd, vlSelfRef.cpu__DOT____Vtogcov__rd);
        vlSelfRef.cpu__DOT____Vtogcov__rd = vlSelfRef.cpu__DOT__rd;
    }
    vlSelfRef.cpu__DOT__regf__DOT__w_addr = vlSelfRef.cpu__DOT__rd;
    if (((IData)(vlSelfRef.cpu__DOT__funct3) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__funct3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 224, vlSelfRef.cpu__DOT__funct3, vlSelfRef.cpu__DOT____Vtogcov__funct3);
        vlSelfRef.cpu__DOT____Vtogcov__funct3 = vlSelfRef.cpu__DOT__funct3;
    }
    vlSelfRef.cpu__DOT__ctrl__DOT__funct3 = vlSelfRef.cpu__DOT__funct3;
    if (((IData)(vlSelfRef.cpu__DOT__rs2) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 240, vlSelfRef.cpu__DOT__rs2, vlSelfRef.cpu__DOT____Vtogcov__rs2);
        vlSelfRef.cpu__DOT____Vtogcov__rs2 = vlSelfRef.cpu__DOT__rs2;
    }
    vlSelfRef.cpu__DOT__regf__DOT__r_addr2 = vlSelfRef.cpu__DOT__rs2;
    if (((IData)(vlSelfRef.cpu__DOT__rs1) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 230, vlSelfRef.cpu__DOT__rs1, vlSelfRef.cpu__DOT____Vtogcov__rs1);
        vlSelfRef.cpu__DOT____Vtogcov__rs1 = vlSelfRef.cpu__DOT__rs1;
    }
    vlSelfRef.cpu__DOT__regf__DOT__r_addr1 = vlSelfRef.cpu__DOT__rs1;
    if ((vlSelfRef.cpu__DOT__raw_imm ^ vlSelfRef.cpu__DOT____Vtogcov__raw_imm)) {
        VL_COV_TOGGLE_CHG_ST_I(25, vlSymsp->__Vcoverage + 549, vlSelfRef.cpu__DOT__raw_imm, vlSelfRef.cpu__DOT____Vtogcov__raw_imm);
        vlSelfRef.cpu__DOT____Vtogcov__raw_imm = vlSelfRef.cpu__DOT__raw_imm;
    }
    vlSelfRef.cpu__DOT__ext__DOT__raw_instr = vlSelfRef.cpu__DOT__raw_imm;
    if (((IData)(vlSelfRef.cpu__DOT__op) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 200, vlSelfRef.cpu__DOT__op, vlSelfRef.cpu__DOT____Vtogcov__op);
        vlSelfRef.cpu__DOT____Vtogcov__op = vlSelfRef.cpu__DOT__op;
    }
    vlSelfRef.cpu__DOT__ctrl__DOT__op = vlSelfRef.cpu__DOT__op;
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__w_addr) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1161, vlSelfRef.cpu__DOT__regf__DOT__w_addr, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_addr);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_addr 
            = vlSelfRef.cpu__DOT__regf__DOT__w_addr;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__funct3) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 952, vlSelfRef.cpu__DOT__ctrl__DOT__funct3, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct3);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct3 
            = vlSelfRef.cpu__DOT__ctrl__DOT__funct3;
    }
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__r_addr2) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1023, vlSelfRef.cpu__DOT__regf__DOT__r_addr2, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr2);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr2 
            = vlSelfRef.cpu__DOT__regf__DOT__r_addr2;
    }
    vlSelfRef.cpu__DOT__regf__DOT__r_data2 = vlSelfRef.cpu__DOT__regf__DOT__regfile
        [vlSelfRef.cpu__DOT__regf__DOT__r_addr2];
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__r_addr1) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1013, vlSelfRef.cpu__DOT__regf__DOT__r_addr1, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr1);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr1 
            = vlSelfRef.cpu__DOT__regf__DOT__r_addr1;
    }
    vlSelfRef.cpu__DOT__regf__DOT__r_data1 = vlSelfRef.cpu__DOT__regf__DOT__regfile
        [vlSelfRef.cpu__DOT__regf__DOT__r_addr1];
    if ((vlSelfRef.cpu__DOT__ext__DOT__raw_instr ^ vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__raw_instr)) {
        VL_COV_TOGGLE_CHG_ST_I(25, vlSymsp->__Vcoverage + 1246, vlSelfRef.cpu__DOT__ext__DOT__raw_instr, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__raw_instr);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__raw_instr 
            = vlSelfRef.cpu__DOT__ext__DOT__raw_instr;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 938, vlSelfRef.cpu__DOT__ctrl__DOT__op, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__op);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__op 
            = vlSelfRef.cpu__DOT__ctrl__DOT__op;
    }
    if ((0x00000040U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        ++(vlSymsp->__Vcoverage[1003]);
    } else if ((0x00000020U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        if ((0x00000010U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                    ++(vlSymsp->__Vcoverage[1002]);
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 2U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 1U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[1003]);
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            }
        } else if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1001]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1002]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 2U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
    } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
    } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1000]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 1U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 1U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
    }
    ++(vlSymsp->__Vcoverage[1004]);
    if ((vlSelfRef.cpu__DOT__regf__DOT__r_data2 ^ vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1097, vlSelfRef.cpu__DOT__regf__DOT__r_data2, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data2);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data2 
            = vlSelfRef.cpu__DOT__regf__DOT__r_data2;
    }
    vlSelfRef.cpu__DOT__read2 = vlSelfRef.cpu__DOT__regf__DOT__r_data2;
    if ((vlSelfRef.cpu__DOT__regf__DOT__r_data1 ^ vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1033, vlSelfRef.cpu__DOT__regf__DOT__r_data1, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data1);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data1 
            = vlSelfRef.cpu__DOT__regf__DOT__r_data1;
    }
    vlSelfRef.cpu__DOT__read1 = vlSelfRef.cpu__DOT__regf__DOT__r_data1;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_src))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 972, vlSelfRef.cpu__DOT__ctrl__DOT__alu_src, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_src);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_src 
            = vlSelfRef.cpu__DOT__ctrl__DOT__alu_src;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__write_back_src))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 974, vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__write_back_src);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__write_back_src 
            = vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__reg_write) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__reg_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 992, vlSelfRef.cpu__DOT__ctrl__DOT__reg_write, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__reg_write);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__reg_write 
            = vlSelfRef.cpu__DOT__ctrl__DOT__reg_write;
    }
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__ctrl__DOT__reg_write;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__mem_write) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__mem_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 994, vlSelfRef.cpu__DOT__ctrl__DOT__mem_write, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__mem_write);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__mem_write 
            = vlSelfRef.cpu__DOT__ctrl__DOT__mem_write;
    }
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__ctrl__DOT__mem_write;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_op))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 996, vlSelfRef.cpu__DOT__ctrl__DOT__alu_op, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_op);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_op 
            = vlSelfRef.cpu__DOT__ctrl__DOT__alu_op;
    }
    if ((0U == (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op))) {
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl = 0U;
        ++(vlSymsp->__Vcoverage[1005]);
    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl = 0x0fU;
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__imm_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 986, vlSelfRef.cpu__DOT__ctrl__DOT__imm_src, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__imm_src);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__imm_src 
            = vlSelfRef.cpu__DOT__ctrl__DOT__imm_src;
    }
    vlSelfRef.cpu__DOT__imm_src = vlSelfRef.cpu__DOT__ctrl__DOT__imm_src;
    if ((vlSelfRef.cpu__DOT__read2 ^ vlSelfRef.cpu__DOT____Vtogcov__read2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 356, vlSelfRef.cpu__DOT__read2, vlSelfRef.cpu__DOT____Vtogcov__read2);
        vlSelfRef.cpu__DOT____Vtogcov__read2 = vlSelfRef.cpu__DOT__read2;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__w_data = vlSelfRef.cpu__DOT__read2;
    if ((vlSelfRef.cpu__DOT__read1 ^ vlSelfRef.cpu__DOT____Vtogcov__read1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 292, vlSelfRef.cpu__DOT__read1, vlSelfRef.cpu__DOT____Vtogcov__read1);
        vlSelfRef.cpu__DOT____Vtogcov__read1 = vlSelfRef.cpu__DOT__read1;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a = vlSelfRef.cpu__DOT__read1;
    if (((IData)(vlSelfRef.cpu__DOT__reg_write) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__reg_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 288, vlSelfRef.cpu__DOT__reg_write, vlSelfRef.cpu__DOT____Vtogcov__reg_write);
        vlSelfRef.cpu__DOT____Vtogcov__reg_write = vlSelfRef.cpu__DOT__reg_write;
    }
    vlSelfRef.cpu__DOT__regf__DOT__w_en = vlSelfRef.cpu__DOT__reg_write;
    if (((IData)(vlSelfRef.cpu__DOT__mem_write) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__mem_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 290, vlSelfRef.cpu__DOT__mem_write, vlSelfRef.cpu__DOT____Vtogcov__mem_write);
        vlSelfRef.cpu__DOT____Vtogcov__mem_write = vlSelfRef.cpu__DOT__mem_write;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__w_en = vlSelfRef.cpu__DOT__mem_write;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 978, vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl 
            = vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl;
    }
    vlSelfRef.cpu__DOT__alu_ctrl = vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl;
    if (((IData)(vlSelfRef.cpu__DOT__imm_src) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 282, vlSelfRef.cpu__DOT__imm_src, vlSelfRef.cpu__DOT____Vtogcov__imm_src);
        vlSelfRef.cpu__DOT____Vtogcov__imm_src = vlSelfRef.cpu__DOT__imm_src;
    }
    vlSelfRef.cpu__DOT__ext__DOT__imm_src = vlSelfRef.cpu__DOT__imm_src;
    if ((vlSelfRef.cpu__DOT__data_mem__DOT__w_data 
         ^ vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1670, vlSelfRef.cpu__DOT__data_mem__DOT__w_data, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_data);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_data 
            = vlSelfRef.cpu__DOT__data_mem__DOT__w_data;
    }
    if ((vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
         ^ vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1400, vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_a);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_a 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a;
    }
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__w_en) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1235, vlSelfRef.cpu__DOT__regf__DOT__w_en, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_en);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_en 
            = vlSelfRef.cpu__DOT__regf__DOT__w_en;
    }
    if (((IData)(vlSelfRef.cpu__DOT__data_mem__DOT__w_en) 
         ^ (IData)(vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1734, vlSelfRef.cpu__DOT__data_mem__DOT__w_en, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_en);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_en 
            = vlSelfRef.cpu__DOT__data_mem__DOT__w_en;
    }
    if (((IData)(vlSelfRef.cpu__DOT__alu_ctrl) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__alu_ctrl))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 274, vlSelfRef.cpu__DOT__alu_ctrl, vlSelfRef.cpu__DOT____Vtogcov__alu_ctrl);
        vlSelfRef.cpu__DOT____Vtogcov__alu_ctrl = vlSelfRef.cpu__DOT__alu_ctrl;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__op = (7U & (IData)(vlSelfRef.cpu__DOT__alu_ctrl));
    if (((IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 1296, vlSelfRef.cpu__DOT__ext__DOT__imm_src, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_src);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_src 
            = vlSelfRef.cpu__DOT__ext__DOT__imm_src;
    }
    if ((0U == (IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_src))) {
        vlSelfRef.cpu__DOT__ext__DOT__imm_gathered 
            = (0x00000fffU & (vlSelfRef.cpu__DOT__ext__DOT__raw_instr 
                              >> 0x0dU));
        ++(vlSymsp->__Vcoverage[1390]);
    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_src))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.cpu__DOT__ext__DOT__imm_gathered 
            = ((0x00000fe0U & (vlSelfRef.cpu__DOT__ext__DOT__raw_instr 
                               >> 0x0000000dU)) | (0x0000001fU 
                                                   & vlSelfRef.cpu__DOT__ext__DOT__raw_instr));
    } else {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.cpu__DOT__ext__DOT__imm_gathered = 0U;
    }
    ++(vlSymsp->__Vcoverage[1393]);
    if (((IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op) 
         ^ (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 1394, vlSelfRef.cpu__DOT__alu_unit__DOT__op, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__op);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__op 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__op;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered) 
         ^ (IData)(vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_gathered))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1366, vlSelfRef.cpu__DOT__ext__DOT__imm_gathered, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_gathered);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_gathered 
            = vlSelfRef.cpu__DOT__ext__DOT__imm_gathered;
    }
    vlSelfRef.cpu__DOT__ext__DOT__imm_out = (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered) 
                                                             >> 0x0000000bU)))) 
                                              << 0x0000000cU) 
                                             | (IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered));
    if ((vlSelfRef.cpu__DOT__ext__DOT__imm_out ^ vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1302, vlSelfRef.cpu__DOT__ext__DOT__imm_out, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_out);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_out 
            = vlSelfRef.cpu__DOT__ext__DOT__imm_out;
    }
    vlSelfRef.cpu__DOT__imm_ext = vlSelfRef.cpu__DOT__ext__DOT__imm_out;
    if ((vlSelfRef.cpu__DOT__imm_ext ^ vlSelfRef.cpu__DOT____Vtogcov__imm_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 599, vlSelfRef.cpu__DOT__imm_ext, vlSelfRef.cpu__DOT____Vtogcov__imm_ext);
        vlSelfRef.cpu__DOT____Vtogcov__imm_ext = vlSelfRef.cpu__DOT__imm_ext;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b = vlSelfRef.cpu__DOT__imm_ext;
    if ((vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b 
         ^ vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1464, vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_b);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_b 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b;
    }
    if ((8U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result = 0U;
        ++(vlSymsp->__Vcoverage[1600]);
    } else if ((4U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        if ((2U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1600]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result = 0U;
        } else if ((1U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1599]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (~ (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                      | vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b));
        } else {
            ++(vlSymsp->__Vcoverage[1598]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                   ^ vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
        }
    } else if ((2U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        if ((1U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1597]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                   | vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
        } else {
            ++(vlSymsp->__Vcoverage[1596]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                   & vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
        }
    } else if ((1U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
            = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
               - vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
    } else {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
            = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
               + vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
    }
    ++(vlSymsp->__Vcoverage[1601]);
    if ((vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
         ^ vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__alu_result)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1528, vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__alu_result);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__alu_result 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__zero = (0U == vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result);
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result;
    if (((IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__zero) 
         ^ (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1592, vlSelfRef.cpu__DOT__alu_unit__DOT__zero, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__zero);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__zero 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__zero;
    }
    vlSelfRef.cpu__DOT__zero = vlSelfRef.cpu__DOT__alu_unit__DOT__zero;
    if ((vlSelfRef.cpu__DOT__alu_result ^ vlSelfRef.cpu__DOT____Vtogcov__alu_result)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 665, vlSelfRef.cpu__DOT__alu_result, vlSelfRef.cpu__DOT____Vtogcov__alu_result);
        vlSelfRef.cpu__DOT____Vtogcov__alu_result = vlSelfRef.cpu__DOT__alu_result;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__addr = vlSelfRef.cpu__DOT__alu_result;
    if (((IData)(vlSelfRef.cpu__DOT__zero) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 663, vlSelfRef.cpu__DOT__zero, vlSelfRef.cpu__DOT____Vtogcov__zero);
        vlSelfRef.cpu__DOT____Vtogcov__zero = vlSelfRef.cpu__DOT__zero;
    }
    if ((vlSelfRef.cpu__DOT__data_mem__DOT__addr ^ vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1606, vlSelfRef.cpu__DOT__data_mem__DOT__addr, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__addr);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__addr 
            = vlSelfRef.cpu__DOT__data_mem__DOT__addr;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__r_data = vlSelfRef.cpu__DOT__data_mem__DOT__mem
        [(0x0000003fU & (vlSelfRef.cpu__DOT__data_mem__DOT__addr 
                         >> 2U))];
    if ((vlSelfRef.cpu__DOT__data_mem__DOT__r_data 
         ^ vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__r_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1736, vlSelfRef.cpu__DOT__data_mem__DOT__r_data, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__r_data);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__r_data 
            = vlSelfRef.cpu__DOT__data_mem__DOT__r_data;
    }
    vlSelfRef.cpu__DOT__mem_read = vlSelfRef.cpu__DOT__data_mem__DOT__r_data;
    if ((vlSelfRef.cpu__DOT__mem_read ^ vlSelfRef.cpu__DOT____Vtogcov__mem_read)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 420, vlSelfRef.cpu__DOT__mem_read, vlSelfRef.cpu__DOT____Vtogcov__mem_read);
        vlSelfRef.cpu__DOT____Vtogcov__mem_read = vlSelfRef.cpu__DOT__mem_read;
    }
    vlSelfRef.cpu__DOT__write_data = vlSelfRef.cpu__DOT__mem_read;
    if ((vlSelfRef.cpu__DOT__write_data ^ vlSelfRef.cpu__DOT____Vtogcov__write_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 484, vlSelfRef.cpu__DOT__write_data, vlSelfRef.cpu__DOT____Vtogcov__write_data);
        vlSelfRef.cpu__DOT____Vtogcov__write_data = vlSelfRef.cpu__DOT__write_data;
    }
    vlSelfRef.cpu__DOT__regf__DOT__w_data = vlSelfRef.cpu__DOT__write_data;
    if ((vlSelfRef.cpu__DOT__regf__DOT__w_data ^ vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1171, vlSelfRef.cpu__DOT__regf__DOT__w_data, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_data);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_data 
            = vlSelfRef.cpu__DOT__regf__DOT__w_data;
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.cpu__DOT__data_mem__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_mem__DOT__clk__0))) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.cpu__DOT__regf__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regf__DOT__clk__0))) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.cpu__DOT__instr_mem__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__instr_mem__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.cpu__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__instr_mem__DOT__clk__0 
        = vlSelfRef.cpu__DOT__instr_mem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regf__DOT__clk__0 
        = vlSelfRef.cpu__DOT__regf__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_mem__DOT__clk__0 
        = vlSelfRef.cpu__DOT__data_mem__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu__DOT__data_mem__DOT__mem__v0;
    __VdlyVal__cpu__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_mem__DOT__mem__v0;
    __VdlyDim0__cpu__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_mem__DOT__mem__v1;
    __VdlyDim0__cpu__DOT__data_mem__DOT__mem__v1 = 0;
    // Body
    if (vlSelfRef.cpu__DOT__data_mem__DOT__rst_n) {
        if (vlSelfRef.cpu__DOT__data_mem__DOT__w_en) {
            if ((0U == (3U & vlSelfRef.cpu__DOT__data_mem__DOT__addr))) {
                ++(vlSymsp->__Vcoverage[1802]);
                __VdlyVal__cpu__DOT__data_mem__DOT__mem__v0 
                    = vlSelfRef.cpu__DOT__data_mem__DOT__w_data;
                __VdlyDim0__cpu__DOT__data_mem__DOT__mem__v0 
                    = (0x0000003fU & (vlSelfRef.cpu__DOT__data_mem__DOT__addr 
                                      >> 2U));
                vlSelfRef.__VdlyCommitQueuecpu__DOT__data_mem__DOT__mem.enqueue(__VdlyVal__cpu__DOT__data_mem__DOT__mem__v0, (IData)(__VdlyDim0__cpu__DOT__data_mem__DOT__mem__v0));
            } else {
                ++(vlSymsp->__Vcoverage[1803]);
            }
            ++(vlSymsp->__Vcoverage[1804]);
        } else {
            ++(vlSymsp->__Vcoverage[1805]);
        }
    } else {
        vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu__DOT__data_mem__DOT__mem__v1 
                = (0x0000003fU & vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__data_mem__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__cpu__DOT__data_mem__DOT__mem__v1));
            vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[1801]);
        }
        ++(vlSymsp->__Vcoverage[1806]);
    }
    ++(vlSymsp->__Vcoverage[1807]);
    vlSelfRef.__VdlyCommitQueuecpu__DOT__data_mem__DOT__mem.commit(vlSelfRef.cpu__DOT__data_mem__DOT__mem);
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu__DOT__regf__DOT__regfile__v0;
    __VdlyVal__cpu__DOT__regf__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu__DOT__regf__DOT__regfile__v0;
    __VdlyDim0__cpu__DOT__regf__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu__DOT__regf__DOT__regfile__v1;
    __VdlyDim0__cpu__DOT__regf__DOT__regfile__v1 = 0;
    // Body
    if (vlSelfRef.cpu__DOT__regf__DOT__rst_n) {
        if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__w_en) 
             & (0U != (IData)(vlSelfRef.cpu__DOT__regf__DOT__w_addr)))) {
            ++(vlSymsp->__Vcoverage[1238]);
            __VdlyVal__cpu__DOT__regf__DOT__regfile__v0 
                = vlSelfRef.cpu__DOT__regf__DOT__w_data;
            __VdlyDim0__cpu__DOT__regf__DOT__regfile__v0 
                = vlSelfRef.cpu__DOT__regf__DOT__w_addr;
            vlSelfRef.__VdlyCommitQueuecpu__DOT__regf__DOT__regfile.enqueue(__VdlyVal__cpu__DOT__regf__DOT__regfile__v0, (IData)(__VdlyDim0__cpu__DOT__regf__DOT__regfile__v0));
        } else {
            ++(vlSymsp->__Vcoverage[1239]);
        }
        if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__w_en) 
             & (0U != (IData)(vlSelfRef.cpu__DOT__regf__DOT__w_addr)))) {
            ++(vlSymsp->__Vcoverage[1240]);
        }
        if ((0U == (IData)(vlSelfRef.cpu__DOT__regf__DOT__w_addr))) {
            ++(vlSymsp->__Vcoverage[1241]);
        }
        if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__regf__DOT__w_en)))) {
            ++(vlSymsp->__Vcoverage[1242]);
        }
    } else {
        vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu__DOT__regf__DOT__regfile__v1 
                = (0x0000001fU & vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__regf__DOT__regfile.enqueue(0U, (IData)(__VdlyDim0__cpu__DOT__regf__DOT__regfile__v1));
            vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu__DOT__regf__DOT__unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[1237]);
        }
        ++(vlSymsp->__Vcoverage[1243]);
    }
    ++(vlSymsp->__Vcoverage[1244]);
    vlSelfRef.__VdlyCommitQueuecpu__DOT__regf__DOT__regfile.commit(vlSelfRef.cpu__DOT__regf__DOT__regfile);
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cpu__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.cpu__DOT__pc = vlSelfRef.cpu__DOT__pc_next;
    } else {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.cpu__DOT__pc = 0U;
    }
    ++(vlSymsp->__Vcoverage[135]);
    if ((vlSelfRef.cpu__DOT__pc ^ vlSelfRef.cpu__DOT____Vtogcov__pc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4, vlSelfRef.cpu__DOT__pc, vlSelfRef.cpu__DOT____Vtogcov__pc);
        vlSelfRef.cpu__DOT____Vtogcov__pc = vlSelfRef.cpu__DOT__pc;
    }
    vlSelfRef.cpu__DOT__pc_next = ((IData)(4U) + vlSelfRef.cpu__DOT__pc);
    if ((vlSelfRef.cpu__DOT__pc_next ^ vlSelfRef.cpu__DOT____Vtogcov__pc_next)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 68, vlSelfRef.cpu__DOT__pc_next, vlSelfRef.cpu__DOT____Vtogcov__pc_next);
        vlSelfRef.cpu__DOT____Vtogcov__pc_next = vlSelfRef.cpu__DOT__pc_next;
    }
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__cpu__DOT__instr_mem__DOT__mem__v0;
    __VdlyVal__cpu__DOT__instr_mem__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v0;
    __VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v1;
    __VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v1 = 0;
    // Body
    if (vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n) {
        if (vlSelfRef.cpu__DOT__instr_mem__DOT__w_en) {
            if ((0U == (3U & vlSelfRef.cpu__DOT__instr_mem__DOT__addr))) {
                ++(vlSymsp->__Vcoverage[929]);
                __VdlyVal__cpu__DOT__instr_mem__DOT__mem__v0 
                    = vlSelfRef.cpu__DOT__instr_mem__DOT__w_data;
                __VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v0 
                    = (0x0000003fU & (vlSelfRef.cpu__DOT__instr_mem__DOT__addr 
                                      >> 2U));
                vlSelfRef.__VdlyCommitQueuecpu__DOT__instr_mem__DOT__mem.enqueue(__VdlyVal__cpu__DOT__instr_mem__DOT__mem__v0, (IData)(__VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v0));
            } else {
                ++(vlSymsp->__Vcoverage[930]);
            }
            ++(vlSymsp->__Vcoverage[931]);
        } else {
            ++(vlSymsp->__Vcoverage[932]);
        }
    } else {
        vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v1 
                = (0x0000003fU & vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuecpu__DOT__instr_mem__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__cpu__DOT__instr_mem__DOT__mem__v1));
            vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[928]);
        }
        ++(vlSymsp->__Vcoverage[933]);
    }
    ++(vlSymsp->__Vcoverage[934]);
    vlSelfRef.__VdlyCommitQueuecpu__DOT__instr_mem__DOT__mem.commit(vlSelfRef.cpu__DOT__instr_mem__DOT__mem);
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__instr_mem__DOT__addr = vlSelfRef.cpu__DOT__pc;
    if ((vlSelfRef.cpu__DOT__instr_mem__DOT__addr ^ vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 733, vlSelfRef.cpu__DOT__instr_mem__DOT__addr, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__addr);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__addr 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__addr;
    }
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__instr_mem__DOT__r_data = vlSelfRef.cpu__DOT__instr_mem__DOT__mem
        [(0x0000003fU & (vlSelfRef.cpu__DOT__instr_mem__DOT__addr 
                         >> 2U))];
    if ((vlSelfRef.cpu__DOT__instr_mem__DOT__r_data 
         ^ vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__r_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 863, vlSelfRef.cpu__DOT__instr_mem__DOT__r_data, vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__r_data);
        vlSelfRef.cpu__DOT__instr_mem__DOT____Vtogcov__r_data 
            = vlSelfRef.cpu__DOT__instr_mem__DOT__r_data;
    }
    vlSelfRef.cpu__DOT__instr = vlSelfRef.cpu__DOT__instr_mem__DOT__r_data;
    if ((vlSelfRef.cpu__DOT__instr ^ vlSelfRef.cpu__DOT____Vtogcov__instr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 136, vlSelfRef.cpu__DOT__instr, vlSelfRef.cpu__DOT____Vtogcov__instr);
        vlSelfRef.cpu__DOT____Vtogcov__instr = vlSelfRef.cpu__DOT__instr;
    }
    vlSelfRef.cpu__DOT__imm = (vlSelfRef.cpu__DOT__instr 
                               >> 0x00000014U);
    vlSelfRef.cpu__DOT__rd = (0x0000001fU & (vlSelfRef.cpu__DOT__instr 
                                             >> 7U));
    vlSelfRef.cpu__DOT__funct3 = (7U & (vlSelfRef.cpu__DOT__instr 
                                        >> 0x0000000cU));
    vlSelfRef.cpu__DOT__rs2 = (0x0000001fU & (vlSelfRef.cpu__DOT__instr 
                                              >> 0x00000014U));
    vlSelfRef.cpu__DOT__rs1 = (0x0000001fU & (vlSelfRef.cpu__DOT__instr 
                                              >> 0x0000000fU));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instr 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x0000007fU & vlSelfRef.cpu__DOT__instr);
    if (((IData)(vlSelfRef.cpu__DOT__imm) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__imm))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 250, vlSelfRef.cpu__DOT__imm, vlSelfRef.cpu__DOT____Vtogcov__imm);
        vlSelfRef.cpu__DOT____Vtogcov__imm = vlSelfRef.cpu__DOT__imm;
    }
    if (((IData)(vlSelfRef.cpu__DOT__rd) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 214, vlSelfRef.cpu__DOT__rd, vlSelfRef.cpu__DOT____Vtogcov__rd);
        vlSelfRef.cpu__DOT____Vtogcov__rd = vlSelfRef.cpu__DOT__rd;
    }
    vlSelfRef.cpu__DOT__regf__DOT__w_addr = vlSelfRef.cpu__DOT__rd;
    if (((IData)(vlSelfRef.cpu__DOT__funct3) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__funct3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 224, vlSelfRef.cpu__DOT__funct3, vlSelfRef.cpu__DOT____Vtogcov__funct3);
        vlSelfRef.cpu__DOT____Vtogcov__funct3 = vlSelfRef.cpu__DOT__funct3;
    }
    vlSelfRef.cpu__DOT__ctrl__DOT__funct3 = vlSelfRef.cpu__DOT__funct3;
    if (((IData)(vlSelfRef.cpu__DOT__rs2) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 240, vlSelfRef.cpu__DOT__rs2, vlSelfRef.cpu__DOT____Vtogcov__rs2);
        vlSelfRef.cpu__DOT____Vtogcov__rs2 = vlSelfRef.cpu__DOT__rs2;
    }
    vlSelfRef.cpu__DOT__regf__DOT__r_addr2 = vlSelfRef.cpu__DOT__rs2;
    if (((IData)(vlSelfRef.cpu__DOT__rs1) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 230, vlSelfRef.cpu__DOT__rs1, vlSelfRef.cpu__DOT____Vtogcov__rs1);
        vlSelfRef.cpu__DOT____Vtogcov__rs1 = vlSelfRef.cpu__DOT__rs1;
    }
    vlSelfRef.cpu__DOT__regf__DOT__r_addr1 = vlSelfRef.cpu__DOT__rs1;
    if ((vlSelfRef.cpu__DOT__raw_imm ^ vlSelfRef.cpu__DOT____Vtogcov__raw_imm)) {
        VL_COV_TOGGLE_CHG_ST_I(25, vlSymsp->__Vcoverage + 549, vlSelfRef.cpu__DOT__raw_imm, vlSelfRef.cpu__DOT____Vtogcov__raw_imm);
        vlSelfRef.cpu__DOT____Vtogcov__raw_imm = vlSelfRef.cpu__DOT__raw_imm;
    }
    vlSelfRef.cpu__DOT__ext__DOT__raw_instr = vlSelfRef.cpu__DOT__raw_imm;
    if (((IData)(vlSelfRef.cpu__DOT__op) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 200, vlSelfRef.cpu__DOT__op, vlSelfRef.cpu__DOT____Vtogcov__op);
        vlSelfRef.cpu__DOT____Vtogcov__op = vlSelfRef.cpu__DOT__op;
    }
    vlSelfRef.cpu__DOT__ctrl__DOT__op = vlSelfRef.cpu__DOT__op;
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__w_addr) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1161, vlSelfRef.cpu__DOT__regf__DOT__w_addr, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_addr);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_addr 
            = vlSelfRef.cpu__DOT__regf__DOT__w_addr;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__funct3) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 952, vlSelfRef.cpu__DOT__ctrl__DOT__funct3, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct3);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__funct3 
            = vlSelfRef.cpu__DOT__ctrl__DOT__funct3;
    }
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__r_addr2) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1023, vlSelfRef.cpu__DOT__regf__DOT__r_addr2, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr2);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr2 
            = vlSelfRef.cpu__DOT__regf__DOT__r_addr2;
    }
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__r_addr1) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 1013, vlSelfRef.cpu__DOT__regf__DOT__r_addr1, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr1);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_addr1 
            = vlSelfRef.cpu__DOT__regf__DOT__r_addr1;
    }
    if ((vlSelfRef.cpu__DOT__ext__DOT__raw_instr ^ vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__raw_instr)) {
        VL_COV_TOGGLE_CHG_ST_I(25, vlSymsp->__Vcoverage + 1246, vlSelfRef.cpu__DOT__ext__DOT__raw_instr, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__raw_instr);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__raw_instr 
            = vlSelfRef.cpu__DOT__ext__DOT__raw_instr;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 938, vlSelfRef.cpu__DOT__ctrl__DOT__op, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__op);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__op 
            = vlSelfRef.cpu__DOT__ctrl__DOT__op;
    }
    if ((0x00000040U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        ++(vlSymsp->__Vcoverage[1003]);
    } else if ((0x00000020U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        if ((0x00000010U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                    ++(vlSymsp->__Vcoverage[1002]);
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 2U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 1U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[1003]);
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                    vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            }
        } else if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1001]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
                ++(vlSymsp->__Vcoverage[1002]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 2U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 1U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1003]);
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
                vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
    } else if ((4U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
    } else if ((2U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
        if ((1U & (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1000]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 1U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 1U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1003]);
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
            vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_op = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__imm_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__reg_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__mem_write = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_src = 0U;
        vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src = 0U;
    }
    ++(vlSymsp->__Vcoverage[1004]);
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_src))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 972, vlSelfRef.cpu__DOT__ctrl__DOT__alu_src, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_src);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_src 
            = vlSelfRef.cpu__DOT__ctrl__DOT__alu_src;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__write_back_src))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 974, vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__write_back_src);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__write_back_src 
            = vlSelfRef.cpu__DOT__ctrl__DOT__write_back_src;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__reg_write) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__reg_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 992, vlSelfRef.cpu__DOT__ctrl__DOT__reg_write, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__reg_write);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__reg_write 
            = vlSelfRef.cpu__DOT__ctrl__DOT__reg_write;
    }
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__ctrl__DOT__reg_write;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__mem_write) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__mem_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 994, vlSelfRef.cpu__DOT__ctrl__DOT__mem_write, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__mem_write);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__mem_write 
            = vlSelfRef.cpu__DOT__ctrl__DOT__mem_write;
    }
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__ctrl__DOT__mem_write;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_op))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 996, vlSelfRef.cpu__DOT__ctrl__DOT__alu_op, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_op);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_op 
            = vlSelfRef.cpu__DOT__ctrl__DOT__alu_op;
    }
    if ((0U == (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op))) {
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl = 0U;
        ++(vlSymsp->__Vcoverage[1005]);
    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_op))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl = 0x0fU;
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__imm_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 986, vlSelfRef.cpu__DOT__ctrl__DOT__imm_src, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__imm_src);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__imm_src 
            = vlSelfRef.cpu__DOT__ctrl__DOT__imm_src;
    }
    vlSelfRef.cpu__DOT__imm_src = vlSelfRef.cpu__DOT__ctrl__DOT__imm_src;
    if (((IData)(vlSelfRef.cpu__DOT__reg_write) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__reg_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 288, vlSelfRef.cpu__DOT__reg_write, vlSelfRef.cpu__DOT____Vtogcov__reg_write);
        vlSelfRef.cpu__DOT____Vtogcov__reg_write = vlSelfRef.cpu__DOT__reg_write;
    }
    vlSelfRef.cpu__DOT__regf__DOT__w_en = vlSelfRef.cpu__DOT__reg_write;
    if (((IData)(vlSelfRef.cpu__DOT__mem_write) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__mem_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 290, vlSelfRef.cpu__DOT__mem_write, vlSelfRef.cpu__DOT____Vtogcov__mem_write);
        vlSelfRef.cpu__DOT____Vtogcov__mem_write = vlSelfRef.cpu__DOT__mem_write;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__w_en = vlSelfRef.cpu__DOT__mem_write;
    if (((IData)(vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl) 
         ^ (IData)(vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 978, vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl, vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl);
        vlSelfRef.cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl 
            = vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl;
    }
    vlSelfRef.cpu__DOT__alu_ctrl = vlSelfRef.cpu__DOT__ctrl__DOT__alu_ctrl;
    if (((IData)(vlSelfRef.cpu__DOT__imm_src) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 282, vlSelfRef.cpu__DOT__imm_src, vlSelfRef.cpu__DOT____Vtogcov__imm_src);
        vlSelfRef.cpu__DOT____Vtogcov__imm_src = vlSelfRef.cpu__DOT__imm_src;
    }
    vlSelfRef.cpu__DOT__ext__DOT__imm_src = vlSelfRef.cpu__DOT__imm_src;
    if (((IData)(vlSelfRef.cpu__DOT__regf__DOT__w_en) 
         ^ (IData)(vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1235, vlSelfRef.cpu__DOT__regf__DOT__w_en, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_en);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_en 
            = vlSelfRef.cpu__DOT__regf__DOT__w_en;
    }
    if (((IData)(vlSelfRef.cpu__DOT__data_mem__DOT__w_en) 
         ^ (IData)(vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1734, vlSelfRef.cpu__DOT__data_mem__DOT__w_en, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_en);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_en 
            = vlSelfRef.cpu__DOT__data_mem__DOT__w_en;
    }
    if (((IData)(vlSelfRef.cpu__DOT__alu_ctrl) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__alu_ctrl))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 274, vlSelfRef.cpu__DOT__alu_ctrl, vlSelfRef.cpu__DOT____Vtogcov__alu_ctrl);
        vlSelfRef.cpu__DOT____Vtogcov__alu_ctrl = vlSelfRef.cpu__DOT__alu_ctrl;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__op = (7U & (IData)(vlSelfRef.cpu__DOT__alu_ctrl));
    if (((IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_src) 
         ^ (IData)(vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 1296, vlSelfRef.cpu__DOT__ext__DOT__imm_src, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_src);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_src 
            = vlSelfRef.cpu__DOT__ext__DOT__imm_src;
    }
    if ((0U == (IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_src))) {
        vlSelfRef.cpu__DOT__ext__DOT__imm_gathered 
            = (0x00000fffU & (vlSelfRef.cpu__DOT__ext__DOT__raw_instr 
                              >> 0x0dU));
        ++(vlSymsp->__Vcoverage[1390]);
    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_src))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.cpu__DOT__ext__DOT__imm_gathered 
            = ((0x00000fe0U & (vlSelfRef.cpu__DOT__ext__DOT__raw_instr 
                               >> 0x0000000dU)) | (0x0000001fU 
                                                   & vlSelfRef.cpu__DOT__ext__DOT__raw_instr));
    } else {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.cpu__DOT__ext__DOT__imm_gathered = 0U;
    }
    ++(vlSymsp->__Vcoverage[1393]);
    if (((IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op) 
         ^ (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 1394, vlSelfRef.cpu__DOT__alu_unit__DOT__op, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__op);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__op 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__op;
    }
    if (((IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered) 
         ^ (IData)(vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_gathered))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1366, vlSelfRef.cpu__DOT__ext__DOT__imm_gathered, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_gathered);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_gathered 
            = vlSelfRef.cpu__DOT__ext__DOT__imm_gathered;
    }
    vlSelfRef.cpu__DOT__ext__DOT__imm_out = (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered) 
                                                             >> 0x0000000bU)))) 
                                              << 0x0000000cU) 
                                             | (IData)(vlSelfRef.cpu__DOT__ext__DOT__imm_gathered));
    if ((vlSelfRef.cpu__DOT__ext__DOT__imm_out ^ vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1302, vlSelfRef.cpu__DOT__ext__DOT__imm_out, vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_out);
        vlSelfRef.cpu__DOT__ext__DOT____Vtogcov__imm_out 
            = vlSelfRef.cpu__DOT__ext__DOT__imm_out;
    }
    vlSelfRef.cpu__DOT__imm_ext = vlSelfRef.cpu__DOT__ext__DOT__imm_out;
    if ((vlSelfRef.cpu__DOT__imm_ext ^ vlSelfRef.cpu__DOT____Vtogcov__imm_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 599, vlSelfRef.cpu__DOT__imm_ext, vlSelfRef.cpu__DOT____Vtogcov__imm_ext);
        vlSelfRef.cpu__DOT____Vtogcov__imm_ext = vlSelfRef.cpu__DOT__imm_ext;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b = vlSelfRef.cpu__DOT__imm_ext;
    if ((vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b 
         ^ vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1464, vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_b);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_b 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b;
    }
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__regf__DOT__r_data2 = vlSelfRef.cpu__DOT__regf__DOT__regfile
        [vlSelfRef.cpu__DOT__regf__DOT__r_addr2];
    vlSelfRef.cpu__DOT__regf__DOT__r_data1 = vlSelfRef.cpu__DOT__regf__DOT__regfile
        [vlSelfRef.cpu__DOT__regf__DOT__r_addr1];
    if ((vlSelfRef.cpu__DOT__regf__DOT__r_data2 ^ vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1097, vlSelfRef.cpu__DOT__regf__DOT__r_data2, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data2);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data2 
            = vlSelfRef.cpu__DOT__regf__DOT__r_data2;
    }
    vlSelfRef.cpu__DOT__read2 = vlSelfRef.cpu__DOT__regf__DOT__r_data2;
    if ((vlSelfRef.cpu__DOT__regf__DOT__r_data1 ^ vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1033, vlSelfRef.cpu__DOT__regf__DOT__r_data1, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data1);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__r_data1 
            = vlSelfRef.cpu__DOT__regf__DOT__r_data1;
    }
    vlSelfRef.cpu__DOT__read1 = vlSelfRef.cpu__DOT__regf__DOT__r_data1;
    if ((vlSelfRef.cpu__DOT__read2 ^ vlSelfRef.cpu__DOT____Vtogcov__read2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 356, vlSelfRef.cpu__DOT__read2, vlSelfRef.cpu__DOT____Vtogcov__read2);
        vlSelfRef.cpu__DOT____Vtogcov__read2 = vlSelfRef.cpu__DOT__read2;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__w_data = vlSelfRef.cpu__DOT__read2;
    if ((vlSelfRef.cpu__DOT__read1 ^ vlSelfRef.cpu__DOT____Vtogcov__read1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 292, vlSelfRef.cpu__DOT__read1, vlSelfRef.cpu__DOT____Vtogcov__read1);
        vlSelfRef.cpu__DOT____Vtogcov__read1 = vlSelfRef.cpu__DOT__read1;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a = vlSelfRef.cpu__DOT__read1;
    if ((vlSelfRef.cpu__DOT__data_mem__DOT__w_data 
         ^ vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1670, vlSelfRef.cpu__DOT__data_mem__DOT__w_data, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_data);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__w_data 
            = vlSelfRef.cpu__DOT__data_mem__DOT__w_data;
    }
    if ((vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
         ^ vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1400, vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_a);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__operand_a 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a;
    }
    if ((8U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result = 0U;
        ++(vlSymsp->__Vcoverage[1600]);
    } else if ((4U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        if ((2U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1600]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result = 0U;
        } else if ((1U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1599]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (~ (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                      | vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b));
        } else {
            ++(vlSymsp->__Vcoverage[1598]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                   ^ vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
        }
    } else if ((2U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        if ((1U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[1597]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                   | vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
        } else {
            ++(vlSymsp->__Vcoverage[1596]);
            vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
                = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
                   & vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
        }
    } else if ((1U & (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__op))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
            = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
               - vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
    } else {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
            = (vlSelfRef.cpu__DOT__alu_unit__DOT__operand_a 
               + vlSelfRef.cpu__DOT__alu_unit__DOT__operand_b);
    }
    ++(vlSymsp->__Vcoverage[1601]);
    if ((vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result 
         ^ vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__alu_result)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1528, vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__alu_result);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__alu_result 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result;
    }
    vlSelfRef.cpu__DOT__alu_unit__DOT__zero = (0U == vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result);
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu_unit__DOT__alu_result;
    if (((IData)(vlSelfRef.cpu__DOT__alu_unit__DOT__zero) 
         ^ (IData)(vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1592, vlSelfRef.cpu__DOT__alu_unit__DOT__zero, vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__zero);
        vlSelfRef.cpu__DOT__alu_unit__DOT____Vtogcov__zero 
            = vlSelfRef.cpu__DOT__alu_unit__DOT__zero;
    }
    vlSelfRef.cpu__DOT__zero = vlSelfRef.cpu__DOT__alu_unit__DOT__zero;
    if ((vlSelfRef.cpu__DOT__alu_result ^ vlSelfRef.cpu__DOT____Vtogcov__alu_result)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 665, vlSelfRef.cpu__DOT__alu_result, vlSelfRef.cpu__DOT____Vtogcov__alu_result);
        vlSelfRef.cpu__DOT____Vtogcov__alu_result = vlSelfRef.cpu__DOT__alu_result;
    }
    vlSelfRef.cpu__DOT__data_mem__DOT__addr = vlSelfRef.cpu__DOT__alu_result;
    if (((IData)(vlSelfRef.cpu__DOT__zero) ^ (IData)(vlSelfRef.cpu__DOT____Vtogcov__zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 663, vlSelfRef.cpu__DOT__zero, vlSelfRef.cpu__DOT____Vtogcov__zero);
        vlSelfRef.cpu__DOT____Vtogcov__zero = vlSelfRef.cpu__DOT__zero;
    }
    if ((vlSelfRef.cpu__DOT__data_mem__DOT__addr ^ vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1606, vlSelfRef.cpu__DOT__data_mem__DOT__addr, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__addr);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__addr 
            = vlSelfRef.cpu__DOT__data_mem__DOT__addr;
    }
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__data_mem__DOT__r_data = vlSelfRef.cpu__DOT__data_mem__DOT__mem
        [(0x0000003fU & (vlSelfRef.cpu__DOT__data_mem__DOT__addr 
                         >> 2U))];
    if ((vlSelfRef.cpu__DOT__data_mem__DOT__r_data 
         ^ vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__r_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1736, vlSelfRef.cpu__DOT__data_mem__DOT__r_data, vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__r_data);
        vlSelfRef.cpu__DOT__data_mem__DOT____Vtogcov__r_data 
            = vlSelfRef.cpu__DOT__data_mem__DOT__r_data;
    }
    vlSelfRef.cpu__DOT__mem_read = vlSelfRef.cpu__DOT__data_mem__DOT__r_data;
    if ((vlSelfRef.cpu__DOT__mem_read ^ vlSelfRef.cpu__DOT____Vtogcov__mem_read)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 420, vlSelfRef.cpu__DOT__mem_read, vlSelfRef.cpu__DOT____Vtogcov__mem_read);
        vlSelfRef.cpu__DOT____Vtogcov__mem_read = vlSelfRef.cpu__DOT__mem_read;
    }
    vlSelfRef.cpu__DOT__write_data = vlSelfRef.cpu__DOT__mem_read;
    if ((vlSelfRef.cpu__DOT__write_data ^ vlSelfRef.cpu__DOT____Vtogcov__write_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 484, vlSelfRef.cpu__DOT__write_data, vlSelfRef.cpu__DOT____Vtogcov__write_data);
        vlSelfRef.cpu__DOT____Vtogcov__write_data = vlSelfRef.cpu__DOT__write_data;
    }
    vlSelfRef.cpu__DOT__regf__DOT__w_data = vlSelfRef.cpu__DOT__write_data;
    if ((vlSelfRef.cpu__DOT__regf__DOT__w_data ^ vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1171, vlSelfRef.cpu__DOT__regf__DOT__w_data, vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_data);
        vlSelfRef.cpu__DOT__regf__DOT____Vtogcov__w_data 
            = vlSelfRef.cpu__DOT__regf__DOT__w_data;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
