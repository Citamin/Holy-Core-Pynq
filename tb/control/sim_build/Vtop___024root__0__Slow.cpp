// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10977623970759875275ull);
    vlSelf->op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3630531923276091163ull);
    vlSelf->funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17679969967366941577ull);
    vlSelf->funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6751744391700333915ull);
    vlSelf->alu_ctrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12133164084066234300ull);
    vlSelf->imm_src = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2678451422078833091ull);
    vlSelf->reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12827810274228629793ull);
    vlSelf->mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11468839172742666876ull);
    vlSelf->control__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8968529073692735217ull);
    vlSelf->control__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10091991400898876186ull);
    vlSelf->control__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9136450774131520676ull);
    vlSelf->control__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11528050380242665334ull);
    vlSelf->control__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8837470797071350788ull);
    vlSelf->control__DOT__imm_src = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11124540403354047290ull);
    vlSelf->control__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4172781194734883387ull);
    vlSelf->control__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15837600266890739578ull);
    vlSelf->control__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2167531295479129457ull);
    vlSelf->control__DOT____Vtogcov__zero = 0;
    vlSelf->control__DOT____Vtogcov__op = 0;
    vlSelf->control__DOT____Vtogcov__funct3 = 0;
    vlSelf->control__DOT____Vtogcov__funct7 = 0;
    vlSelf->control__DOT____Vtogcov__alu_ctrl = 0;
    vlSelf->control__DOT____Vtogcov__imm_src = 0;
    vlSelf->control__DOT____Vtogcov__reg_write = 0;
    vlSelf->control__DOT____Vtogcov__mem_write = 0;
    vlSelf->control__DOT____Vtogcov__alu_op = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 2, 17, ".control", "v_toggle/control", "zero");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[2]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 3, 23, ".control", "v_toggle/control", "op");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[16]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 4, 23, ".control", "v_toggle/control", "funct3");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[22]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 5, 23, ".control", "v_toggle/control", "funct7");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[36]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 7, 24, ".control", "v_toggle/control", "alu_ctrl");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[42]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 8, 24, ".control", "v_toggle/control", "imm_src");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[48]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 9, 18, ".control", "v_toggle/control", "reg_write");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[50]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 10, 18, ".control", "v_toggle/control", "mem_write");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[52]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 13, 13, ".control", "v_toggle/control", "alu_op");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 21, 19, ".control", "v_line/control", "case", "21-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 28, 19, ".control", "v_line/control", "case", "28-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 34, 9, ".control", "v_line/control", "case", "34-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 18, 1, ".control", "v_line/control", "block", "18-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 48, 14, ".control", "v_line/control", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 49, 14, ".control", "v_line/control", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 50, 9, ".control", "v_line/control", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/citmain/Holy-Core-Pynq/tb/control/../../src/SystemVerilog/control.sv", 46, 1, ".control", "v_line/control", "block", "46-47");
}
