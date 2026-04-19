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
    vlSelfRef.control__DOT__zero = vlSelfRef.zero;
    vlSelfRef.control__DOT__funct3 = vlSelfRef.funct3;
    vlSelfRef.control__DOT__funct7 = vlSelfRef.funct7;
    vlSelfRef.control__DOT__op = vlSelfRef.op;
    if (((IData)(vlSelfRef.control__DOT__zero) ^ (IData)(vlSelfRef.control__DOT____Vtogcov__zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.control__DOT__zero, vlSelfRef.control__DOT____Vtogcov__zero);
        vlSelfRef.control__DOT____Vtogcov__zero = vlSelfRef.control__DOT__zero;
    }
    if (((IData)(vlSelfRef.control__DOT__funct3) ^ (IData)(vlSelfRef.control__DOT____Vtogcov__funct3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 16, vlSelfRef.control__DOT__funct3, vlSelfRef.control__DOT____Vtogcov__funct3);
        vlSelfRef.control__DOT____Vtogcov__funct3 = vlSelfRef.control__DOT__funct3;
    }
    if (((IData)(vlSelfRef.control__DOT__funct7) ^ (IData)(vlSelfRef.control__DOT____Vtogcov__funct7))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 22, vlSelfRef.control__DOT__funct7, vlSelfRef.control__DOT____Vtogcov__funct7);
        vlSelfRef.control__DOT____Vtogcov__funct7 = vlSelfRef.control__DOT__funct7;
    }
    if (((IData)(vlSelfRef.control__DOT__op) ^ (IData)(vlSelfRef.control__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(7, vlSymsp->__Vcoverage + 2, vlSelfRef.control__DOT__op, vlSelfRef.control__DOT____Vtogcov__op);
        vlSelfRef.control__DOT____Vtogcov__op = vlSelfRef.control__DOT__op;
    }
    if ((3U == (IData)(vlSelfRef.control__DOT__op))) {
        vlSelfRef.control__DOT__alu_op = 0U;
        vlSelfRef.control__DOT__imm_src = 0U;
        vlSelfRef.control__DOT__reg_write = 1U;
        vlSelfRef.control__DOT__mem_write = 0U;
        ++(vlSymsp->__Vcoverage[56]);
    } else if ((0x23U == (IData)(vlSelfRef.control__DOT__op))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.control__DOT__alu_op = 0U;
        vlSelfRef.control__DOT__imm_src = 1U;
        vlSelfRef.control__DOT__reg_write = 0U;
        vlSelfRef.control__DOT__mem_write = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.control__DOT__alu_op = 0U;
        vlSelfRef.control__DOT__imm_src = 0U;
        vlSelfRef.control__DOT__reg_write = 0U;
        vlSelfRef.control__DOT__mem_write = 0U;
    }
    ++(vlSymsp->__Vcoverage[59]);
    if (((IData)(vlSelfRef.control__DOT__imm_src) ^ (IData)(vlSelfRef.control__DOT____Vtogcov__imm_src))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 42, vlSelfRef.control__DOT__imm_src, vlSelfRef.control__DOT____Vtogcov__imm_src);
        vlSelfRef.control__DOT____Vtogcov__imm_src 
            = vlSelfRef.control__DOT__imm_src;
    }
    vlSelfRef.imm_src = vlSelfRef.control__DOT__imm_src;
    if (((IData)(vlSelfRef.control__DOT__reg_write) 
         ^ (IData)(vlSelfRef.control__DOT____Vtogcov__reg_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 48, vlSelfRef.control__DOT__reg_write, vlSelfRef.control__DOT____Vtogcov__reg_write);
        vlSelfRef.control__DOT____Vtogcov__reg_write 
            = vlSelfRef.control__DOT__reg_write;
    }
    vlSelfRef.reg_write = vlSelfRef.control__DOT__reg_write;
    if (((IData)(vlSelfRef.control__DOT__mem_write) 
         ^ (IData)(vlSelfRef.control__DOT____Vtogcov__mem_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 50, vlSelfRef.control__DOT__mem_write, vlSelfRef.control__DOT____Vtogcov__mem_write);
        vlSelfRef.control__DOT____Vtogcov__mem_write 
            = vlSelfRef.control__DOT__mem_write;
    }
    vlSelfRef.mem_write = vlSelfRef.control__DOT__mem_write;
    if (((IData)(vlSelfRef.control__DOT__alu_op) ^ (IData)(vlSelfRef.control__DOT____Vtogcov__alu_op))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 52, vlSelfRef.control__DOT__alu_op, vlSelfRef.control__DOT____Vtogcov__alu_op);
        vlSelfRef.control__DOT____Vtogcov__alu_op = vlSelfRef.control__DOT__alu_op;
    }
    if ((0U == (IData)(vlSelfRef.control__DOT__alu_op))) {
        vlSelfRef.control__DOT__alu_ctrl = 0U;
        ++(vlSymsp->__Vcoverage[60]);
    } else if ((1U == (IData)(vlSelfRef.control__DOT__alu_op))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.control__DOT__alu_ctrl = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.control__DOT__alu_ctrl = 7U;
    }
    ++(vlSymsp->__Vcoverage[63]);
    if (((IData)(vlSelfRef.control__DOT__alu_ctrl) 
         ^ (IData)(vlSelfRef.control__DOT____Vtogcov__alu_ctrl))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 36, vlSelfRef.control__DOT__alu_ctrl, vlSelfRef.control__DOT____Vtogcov__alu_ctrl);
        vlSelfRef.control__DOT____Vtogcov__alu_ctrl 
            = vlSelfRef.control__DOT__alu_ctrl;
    }
    vlSelfRef.alu_ctrl = vlSelfRef.control__DOT__alu_ctrl;
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
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 1, "", "Input combinational region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.zero & 0xfeU)))) {
        Verilated::overWidthError("zero");
    }
    if (VL_UNLIKELY(((vlSelfRef.op & 0x80U)))) {
        Verilated::overWidthError("op");
    }
    if (VL_UNLIKELY(((vlSelfRef.funct3 & 0xf8U)))) {
        Verilated::overWidthError("funct3");
    }
    if (VL_UNLIKELY(((vlSelfRef.funct7 & 0x80U)))) {
        Verilated::overWidthError("funct7");
    }
}
#endif  // VL_DEBUG
