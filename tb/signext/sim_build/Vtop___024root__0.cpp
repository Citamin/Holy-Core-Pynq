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
    vlSelfRef.signext__DOT__raw_instr = vlSelfRef.raw_instr;
    vlSelfRef.signext__DOT__imm_src = vlSelfRef.imm_src;
    if ((vlSelfRef.signext__DOT__raw_instr ^ vlSelfRef.signext__DOT____Vtogcov__raw_instr)) {
        VL_COV_TOGGLE_CHG_ST_I(25, vlSymsp->__Vcoverage + 0, vlSelfRef.signext__DOT__raw_instr, vlSelfRef.signext__DOT____Vtogcov__raw_instr);
        vlSelfRef.signext__DOT____Vtogcov__raw_instr 
            = vlSelfRef.signext__DOT__raw_instr;
    }
    if (((IData)(vlSelfRef.signext__DOT__imm_src) ^ (IData)(vlSelfRef.signext__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 50, vlSelfRef.signext__DOT__imm_src, vlSelfRef.signext__DOT____Vtogcov__imm_src);
        vlSelfRef.signext__DOT____Vtogcov__imm_src 
            = vlSelfRef.signext__DOT__imm_src;
    }
    if ((0U == (IData)(vlSelfRef.signext__DOT__imm_src))) {
        vlSelfRef.signext__DOT__imm_gathered = (0x00000fffU 
                                                & (vlSelfRef.signext__DOT__raw_instr 
                                                   >> 0x0dU));
        ++(vlSymsp->__Vcoverage[144]);
    } else if ((1U == (IData)(vlSelfRef.signext__DOT__imm_src))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.signext__DOT__imm_gathered = ((0x00000fe0U 
                                                 & (vlSelfRef.signext__DOT__raw_instr 
                                                    >> 0x0000000dU)) 
                                                | (0x0000001fU 
                                                   & vlSelfRef.signext__DOT__raw_instr));
    } else {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.signext__DOT__imm_gathered = 0U;
    }
    ++(vlSymsp->__Vcoverage[147]);
    if (((IData)(vlSelfRef.signext__DOT__imm_gathered) 
         ^ (IData)(vlSelfRef.signext__DOT____Vtogcov__imm_gathered))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 120, vlSelfRef.signext__DOT__imm_gathered, vlSelfRef.signext__DOT____Vtogcov__imm_gathered);
        vlSelfRef.signext__DOT____Vtogcov__imm_gathered 
            = vlSelfRef.signext__DOT__imm_gathered;
    }
    vlSelfRef.signext__DOT__imm_out = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.signext__DOT__imm_gathered) 
                                                       >> 0x0000000bU)))) 
                                        << 0x0000000cU) 
                                       | (IData)(vlSelfRef.signext__DOT__imm_gathered));
    if ((vlSelfRef.signext__DOT__imm_out ^ vlSelfRef.signext__DOT____Vtogcov__imm_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 56, vlSelfRef.signext__DOT__imm_out, vlSelfRef.signext__DOT____Vtogcov__imm_out);
        vlSelfRef.signext__DOT____Vtogcov__imm_out 
            = vlSelfRef.signext__DOT__imm_out;
    }
    vlSelfRef.imm_out = vlSelfRef.signext__DOT__imm_out;
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/signext/../../src/SystemVerilog/signext.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.raw_instr & 0xfe000000U)))) {
        Verilated::overWidthError("raw_instr");
    }
    if (VL_UNLIKELY(((vlSelfRef.imm_src & 0xf8U)))) {
        Verilated::overWidthError("imm_src");
    }
}
#endif  // VL_DEBUG
