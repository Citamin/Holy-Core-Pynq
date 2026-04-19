// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__regfile__DOT__clk__0 
        = vlSelfRef.regfile__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ++(vlSymsp->__Vcoverage[236]);
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
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 1, "", "Settle region did not converge after 100 tries");
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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge regfile.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->r_addr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14342882390708421239ull);
    vlSelf->r_addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3212858388311031173ull);
    vlSelf->r_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7260194431527053734ull);
    vlSelf->r_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11182127823191588619ull);
    vlSelf->w_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15030644522466382671ull);
    vlSelf->w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1356167372520825866ull);
    vlSelf->w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15400443862726437085ull);
    vlSelf->regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 840682556608944820ull);
    vlSelf->regfile__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15754881453441260377ull);
    vlSelf->regfile__DOT__r_addr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1060915746426524469ull);
    vlSelf->regfile__DOT__r_addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14922023532344082510ull);
    vlSelf->regfile__DOT__r_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14082793020445343987ull);
    vlSelf->regfile__DOT__r_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9370570574790399268ull);
    vlSelf->regfile__DOT__w_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15626914260675688372ull);
    vlSelf->regfile__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9402687092635364037ull);
    vlSelf->regfile__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8104138138661042896ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfile__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1832071344234182597ull);
    }
    vlSelf->regfile__DOT____Vtogcov__clk = 0;
    vlSelf->regfile__DOT____Vtogcov__rst_n = 0;
    vlSelf->regfile__DOT____Vtogcov__r_addr1 = 0;
    vlSelf->regfile__DOT____Vtogcov__r_addr2 = 0;
    vlSelf->regfile__DOT____Vtogcov__r_data1 = 0;
    vlSelf->regfile__DOT____Vtogcov__r_data2 = 0;
    vlSelf->regfile__DOT____Vtogcov__w_addr = 0;
    vlSelf->regfile__DOT____Vtogcov__w_data = 0;
    vlSelf->regfile__DOT____Vtogcov__w_en = 0;
    vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__regfile__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 2, 17, ".regfile", "v_toggle/regfile", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 3, 17, ".regfile", "v_toggle/regfile", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[4]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 5, 23, ".regfile", "v_toggle/regfile", "r_addr1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[14]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 6, 23, ".regfile", "v_toggle/regfile", "r_addr2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[24]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 7, 25, ".regfile", "v_toggle/regfile", "r_data1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[88]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 8, 25, ".regfile", "v_toggle/regfile", "r_data2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[152]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 10, 23, ".regfile", "v_toggle/regfile", "w_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[162]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 11, 24, ".regfile", "v_toggle/regfile", "w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[226]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 12, 17, ".regfile", "v_toggle/regfile", "w_en");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 19, 9, ".regfile", "v_line/regfile", "block", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 24, 10, ".regfile", "v_branch/regfile", "if", "24-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 24, 11, ".regfile", "v_branch/regfile", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 24, 26, ".regfile", "v_expr/regfile", "((w_en == 1'h1)==1 && (w_addr != 5'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 24, 26, ".regfile", "v_expr/regfile", "((w_addr != 5'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 24, 26, ".regfile", "v_expr/regfile", "((w_en == 1'h1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 18, 5, ".regfile", "v_line/regfile", "elsif", "18-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 17, 1, ".regfile", "v_line/regfile", "block", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/citmain/Holy-Core-Pynq/tb/regfile/../../src/SystemVerilog/regfile.sv", 29, 1, ".regfile", "v_line/regfile", "block", "29-31");
}
