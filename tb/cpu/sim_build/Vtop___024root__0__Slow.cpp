// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__clk__0 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__instr_mem__DOT__clk__0 
        = vlSelfRef.cpu__DOT__instr_mem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__regf__DOT__clk__0 
        = vlSelfRef.cpu__DOT__regf__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__data_mem__DOT__clk__0 
        = vlSelfRef.cpu__DOT__data_mem__DOT__clk;
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
    ++(vlSymsp->__Vcoverage[132]);
    ++(vlSymsp->__Vcoverage[548]);
    ++(vlSymsp->__Vcoverage[935]);
    ++(vlSymsp->__Vcoverage[1245]);
    ++(vlSymsp->__Vcoverage[1808]);
    VL_READMEM_N(true, 32, 64, 0, "./test_imemory.mem"s
                 ,  &(vlSelfRef.cpu__DOT__instr_mem__DOT__mem)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[927]);
    VL_READMEM_N(true, 32, 64, 0, "./test_dmemory.mem"s
                 ,  &(vlSelfRef.cpu__DOT__data_mem__DOT__mem)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[1800]);
    vlSelfRef.cpu__DOT__instr_mem__DOT__rst_n = 1U;
    vlSelfRef.cpu__DOT__instr_mem__DOT__w_data = 0U;
    vlSelfRef.cpu__DOT__instr_mem__DOT__w_en = 0U;
    vlSelfRef.cpu__DOT__ctrl__DOT__funct7 = 0U;
    vlSelfRef.cpu__DOT__ctrl__DOT__zero = 0U;
    vlSelfRef.cpu__DOT__data_mem__DOT__rst_n = 1U;
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
            VL_FATAL_MT("/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 1, "", "Settle region did not converge after 100 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge cpu.instr_mem.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge cpu.regf.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge cpu.data_mem.clk)\n");
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
    vlSelf->cpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5456728620559131056ull);
    vlSelf->cpu__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12949139165289987104ull);
    vlSelf->cpu__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12979896101630030509ull);
    vlSelf->cpu__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11401018961025754907ull);
    vlSelf->cpu__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5324789365802126458ull);
    vlSelf->cpu__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12508572871176283413ull);
    vlSelf->cpu__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11012281022938861904ull);
    vlSelf->cpu__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3308832043106885690ull);
    vlSelf->cpu__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12318826599970682371ull);
    vlSelf->cpu__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16010416863125722875ull);
    vlSelf->cpu__DOT__imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14334361561440325932ull);
    vlSelf->cpu__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16087251851447578871ull);
    vlSelf->cpu__DOT__imm_src = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15048036362964873517ull);
    vlSelf->cpu__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15999734060210743814ull);
    vlSelf->cpu__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4199765347900879115ull);
    vlSelf->cpu__DOT__read1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17085737850248861341ull);
    vlSelf->cpu__DOT__read2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3663889544750693225ull);
    vlSelf->cpu__DOT__mem_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7262268092522396926ull);
    vlSelf->cpu__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10803180759109004178ull);
    vlSelf->cpu__DOT__raw_imm = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17663876785484434241ull);
    vlSelf->cpu__DOT__imm_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5190645526599382067ull);
    vlSelf->cpu__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6707102710847761820ull);
    vlSelf->cpu__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12522730548817195188ull);
    vlSelf->cpu__DOT____Vtogcov__clk = 0;
    vlSelf->cpu__DOT____Vtogcov__rst_n = 0;
    vlSelf->cpu__DOT____Vtogcov__pc = 0;
    vlSelf->cpu__DOT____Vtogcov__pc_next = 0;
    vlSelf->cpu__DOT____Vtogcov__instr = 0;
    vlSelf->cpu__DOT____Vtogcov__op = 0;
    vlSelf->cpu__DOT____Vtogcov__rd = 0;
    vlSelf->cpu__DOT____Vtogcov__funct3 = 0;
    vlSelf->cpu__DOT____Vtogcov__rs1 = 0;
    vlSelf->cpu__DOT____Vtogcov__rs2 = 0;
    vlSelf->cpu__DOT____Vtogcov__imm = 0;
    vlSelf->cpu__DOT____Vtogcov__alu_ctrl = 0;
    vlSelf->cpu__DOT____Vtogcov__imm_src = 0;
    vlSelf->cpu__DOT____Vtogcov__reg_write = 0;
    vlSelf->cpu__DOT____Vtogcov__mem_write = 0;
    vlSelf->cpu__DOT____Vtogcov__read1 = 0;
    vlSelf->cpu__DOT____Vtogcov__read2 = 0;
    vlSelf->cpu__DOT____Vtogcov__mem_read = 0;
    vlSelf->cpu__DOT____Vtogcov__write_data = 0;
    vlSelf->cpu__DOT____Vtogcov__raw_imm = 0;
    vlSelf->cpu__DOT____Vtogcov__imm_ext = 0;
    vlSelf->cpu__DOT____Vtogcov__zero = 0;
    vlSelf->cpu__DOT____Vtogcov__alu_result = 0;
    vlSelf->cpu__DOT__instr_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17463797632797161991ull);
    vlSelf->cpu__DOT__instr_mem__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7863407813330985139ull);
    vlSelf->cpu__DOT__instr_mem__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1525922289143712983ull);
    vlSelf->cpu__DOT__instr_mem__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7796280075972059433ull);
    vlSelf->cpu__DOT__instr_mem__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1576606827402752543ull);
    vlSelf->cpu__DOT__instr_mem__DOT__r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4234877016160447191ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__instr_mem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16953135031569255088ull);
    }
    vlSelf->cpu__DOT__instr_mem__DOT____Vtogcov__clk = 0;
    vlSelf->cpu__DOT__instr_mem__DOT____Vtogcov__rst_n = 0;
    vlSelf->cpu__DOT__instr_mem__DOT____Vtogcov__addr = 0;
    vlSelf->cpu__DOT__instr_mem__DOT____Vtogcov__w_data = 0;
    vlSelf->cpu__DOT__instr_mem__DOT____Vtogcov__w_en = 0;
    vlSelf->cpu__DOT__instr_mem__DOT____Vtogcov__r_data = 0;
    vlSelf->cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__ctrl__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4516569085818249405ull);
    vlSelf->cpu__DOT__ctrl__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 987854194900597118ull);
    vlSelf->cpu__DOT__ctrl__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10957459190098222692ull);
    vlSelf->cpu__DOT__ctrl__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1087603011096785042ull);
    vlSelf->cpu__DOT__ctrl__DOT__alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665502847762411750ull);
    vlSelf->cpu__DOT__ctrl__DOT__write_back_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18422289077080608706ull);
    vlSelf->cpu__DOT__ctrl__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17964582769886426771ull);
    vlSelf->cpu__DOT__ctrl__DOT__imm_src = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13692532893757936938ull);
    vlSelf->cpu__DOT__ctrl__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17213742555935927760ull);
    vlSelf->cpu__DOT__ctrl__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18120206759836376211ull);
    vlSelf->cpu__DOT__ctrl__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3432035998018492989ull);
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__zero = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__op = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__funct3 = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__funct7 = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__alu_src = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__write_back_src = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__imm_src = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__reg_write = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__mem_write = 0;
    vlSelf->cpu__DOT__ctrl__DOT____Vtogcov__alu_op = 0;
    vlSelf->cpu__DOT__regf__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10346434346466198316ull);
    vlSelf->cpu__DOT__regf__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471363488600217352ull);
    vlSelf->cpu__DOT__regf__DOT__r_addr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14266463938493483540ull);
    vlSelf->cpu__DOT__regf__DOT__r_addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9390612705905920425ull);
    vlSelf->cpu__DOT__regf__DOT__r_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15950832108049893513ull);
    vlSelf->cpu__DOT__regf__DOT__r_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18202544380371539750ull);
    vlSelf->cpu__DOT__regf__DOT__w_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17640437454163554155ull);
    vlSelf->cpu__DOT__regf__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11017758830136081616ull);
    vlSelf->cpu__DOT__regf__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3540150220343325229ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__regf__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16803386733460461127ull);
    }
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__clk = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__rst_n = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__r_addr1 = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__r_addr2 = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__r_data1 = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__r_data2 = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__w_addr = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__w_data = 0;
    vlSelf->cpu__DOT__regf__DOT____Vtogcov__w_en = 0;
    vlSelf->cpu__DOT__regf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__ext__DOT__raw_instr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7465583669701926704ull);
    vlSelf->cpu__DOT__ext__DOT__imm_src = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13793669559987379806ull);
    vlSelf->cpu__DOT__ext__DOT__imm_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4772613026691894560ull);
    vlSelf->cpu__DOT__ext__DOT__imm_gathered = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1364944040751291664ull);
    vlSelf->cpu__DOT__ext__DOT____Vtogcov__raw_instr = 0;
    vlSelf->cpu__DOT__ext__DOT____Vtogcov__imm_src = 0;
    vlSelf->cpu__DOT__ext__DOT____Vtogcov__imm_out = 0;
    vlSelf->cpu__DOT__ext__DOT____Vtogcov__imm_gathered = 0;
    vlSelf->cpu__DOT__alu_unit__DOT__op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3303133377738406304ull);
    vlSelf->cpu__DOT__alu_unit__DOT__operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 664636809885768928ull);
    vlSelf->cpu__DOT__alu_unit__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5662406376066348570ull);
    vlSelf->cpu__DOT__alu_unit__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13953818289347245806ull);
    vlSelf->cpu__DOT__alu_unit__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15719888958572452997ull);
    vlSelf->cpu__DOT__alu_unit__DOT____Vtogcov__op = 0;
    vlSelf->cpu__DOT__alu_unit__DOT____Vtogcov__operand_a = 0;
    vlSelf->cpu__DOT__alu_unit__DOT____Vtogcov__operand_b = 0;
    vlSelf->cpu__DOT__alu_unit__DOT____Vtogcov__alu_result = 0;
    vlSelf->cpu__DOT__alu_unit__DOT____Vtogcov__zero = 0;
    vlSelf->cpu__DOT__data_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2152391682741197388ull);
    vlSelf->cpu__DOT__data_mem__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18375079959662753906ull);
    vlSelf->cpu__DOT__data_mem__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 745715477423679061ull);
    vlSelf->cpu__DOT__data_mem__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16635158611204330070ull);
    vlSelf->cpu__DOT__data_mem__DOT__w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7048281100590671813ull);
    vlSelf->cpu__DOT__data_mem__DOT__r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15822259173855586159ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__data_mem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4925398035149892246ull);
    }
    vlSelf->cpu__DOT__data_mem__DOT____Vtogcov__clk = 0;
    vlSelf->cpu__DOT__data_mem__DOT____Vtogcov__rst_n = 0;
    vlSelf->cpu__DOT__data_mem__DOT____Vtogcov__addr = 0;
    vlSelf->cpu__DOT__data_mem__DOT____Vtogcov__w_data = 0;
    vlSelf->cpu__DOT__data_mem__DOT____Vtogcov__w_en = 0;
    vlSelf->cpu__DOT__data_mem__DOT____Vtogcov__r_data = 0;
    vlSelf->cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__instr_mem__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__regf__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__data_mem__DOT__clk__0 = 0;
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
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 2, 17, ".cpu", "v_toggle/cpu", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 3, 17, ".cpu", "v_toggle/cpu", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[4]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 6, 12, ".cpu", "v_toggle/cpu", "pc");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[68]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 7, 14, ".cpu", "v_toggle/cpu", "pc_next");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 8, 1, ".cpu", "v_line/cpu", "block", "8-9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 13, 5, ".cpu", "v_branch/cpu", "if", "13-14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 13, 6, ".cpu", "v_branch/cpu", "else", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 12, 1, ".cpu", "v_line/cpu", "block", "12");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[136]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 21, 13, ".cpu", "v_toggle/cpu", "instr");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[200]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 34, 13, ".cpu", "v_toggle/cpu", "op");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[214]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 36, 13, ".cpu", "v_toggle/cpu", "rd");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[224]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 38, 13, ".cpu", "v_toggle/cpu", "funct3");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[230]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 40, 13, ".cpu", "v_toggle/cpu", "rs1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[240]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 42, 13, ".cpu", "v_toggle/cpu", "rs2");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[250]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 44, 14, ".cpu", "v_toggle/cpu", "imm");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[274]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 46, 13, ".cpu", "v_toggle/cpu", "alu_ctrl");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[282]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 47, 13, ".cpu", "v_toggle/cpu", "imm_src");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[288]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 48, 6, ".cpu", "v_toggle/cpu", "reg_write");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[290]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 49, 6, ".cpu", "v_toggle/cpu", "mem_write");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[292]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 62, 14, ".cpu", "v_toggle/cpu", "read1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[356]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 63, 14, ".cpu", "v_toggle/cpu", "read2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[420]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 64, 14, ".cpu", "v_toggle/cpu", "mem_read");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[484]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 65, 14, ".cpu", "v_toggle/cpu", "write_data");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 67, 1, ".cpu", "v_line/cpu", "block", "67-68");
    vlSelf->__vlCoverToggleInsert(0, 24, 1, &(vlSymsp->__Vcoverage[549]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 84, 14, ".cpu", "v_toggle/cpu", "raw_imm");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[599]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 86, 14, ".cpu", "v_toggle/cpu", "imm_ext");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[663]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 94, 6, ".cpu", "v_toggle/cpu", "zero");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[665]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/cpu.sv", 95, 14, ".cpu", "v_toggle/cpu", "alu_result");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[729]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 5, 17, ".cpu.instr_mem", "v_toggle/memory__Mz1", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[731]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 6, 17, ".cpu.instr_mem", "v_toggle/memory__Mz1", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[733]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 7, 24, ".cpu.instr_mem", "v_toggle/memory__Mz1", "addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[797]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 8, 24, ".cpu.instr_mem", "v_toggle/memory__Mz1", "w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[861]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 9, 17, ".cpu.instr_mem", "v_toggle/memory__Mz1", "w_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[863]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 11, 25, ".cpu.instr_mem", "v_toggle/memory__Mz1", "r_data");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[927]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 21, 1, ".cpu.instr_mem", "v_line/memory__Mz1", "block", "21-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[928]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 28, 9, ".cpu.instr_mem", "v_line/memory__Mz1", "block", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[929]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 34, 9, ".cpu.instr_mem", "v_branch/memory__Mz1", "if", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[930]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 34, 10, ".cpu.instr_mem", "v_branch/memory__Mz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[931]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 33, 10, ".cpu.instr_mem", "v_branch/memory__Mz1", "if", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[932]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 33, 11, ".cpu.instr_mem", "v_branch/memory__Mz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[933]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 27, 5, ".cpu.instr_mem", "v_line/memory__Mz1", "elsif", "27-28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[934]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 25, 1, ".cpu.instr_mem", "v_line/memory__Mz1", "block", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[935]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 40, 1, ".cpu.instr_mem", "v_line/memory__Mz1", "block", "40-41");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[936]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 2, 17, ".cpu.ctrl", "v_toggle/control", "zero");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[938]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 3, 23, ".cpu.ctrl", "v_toggle/control", "op");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[952]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 4, 23, ".cpu.ctrl", "v_toggle/control", "funct3");
    vlSelf->__vlCoverToggleInsert(0, 6, 1, &(vlSymsp->__Vcoverage[958]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 5, 23, ".cpu.ctrl", "v_toggle/control", "funct7");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[972]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 7, 18, ".cpu.ctrl", "v_toggle/control", "alu_src");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[974]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 8, 24, ".cpu.ctrl", "v_toggle/control", "write_back_src");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[978]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 9, 24, ".cpu.ctrl", "v_toggle/control", "alu_ctrl");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[986]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 10, 24, ".cpu.ctrl", "v_toggle/control", "imm_src");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[992]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 11, 18, ".cpu.ctrl", "v_toggle/control", "reg_write");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[994]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 12, 18, ".cpu.ctrl", "v_toggle/control", "mem_write");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[996]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 15, 13, ".cpu.ctrl", "v_toggle/control", "alu_op");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1000]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 23, 19, ".cpu.ctrl", "v_line/control", "case", "23-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1001]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 32, 19, ".cpu.ctrl", "v_line/control", "case", "32-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1002]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 41, 31, ".cpu.ctrl", "v_line/control", "case", "41-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1003]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 49, 9, ".cpu.ctrl", "v_line/control", "case", "49-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1004]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 20, 1, ".cpu.ctrl", "v_line/control", "block", "20-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1005]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 65, 14, ".cpu.ctrl", "v_line/control", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 66, 14, ".cpu.ctrl", "v_line/control", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 67, 9, ".cpu.ctrl", "v_line/control", "case", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1008]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/control.sv", 63, 1, ".cpu.ctrl", "v_line/control", "block", "63-64");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1009]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 2, 17, ".cpu.regf", "v_toggle/regfile", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1011]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 3, 17, ".cpu.regf", "v_toggle/regfile", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1013]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 5, 23, ".cpu.regf", "v_toggle/regfile", "r_addr1");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1023]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 6, 23, ".cpu.regf", "v_toggle/regfile", "r_addr2");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1033]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 7, 25, ".cpu.regf", "v_toggle/regfile", "r_data1");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1097]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 8, 25, ".cpu.regf", "v_toggle/regfile", "r_data2");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[1161]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 10, 23, ".cpu.regf", "v_toggle/regfile", "w_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1171]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 11, 24, ".cpu.regf", "v_toggle/regfile", "w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1235]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 12, 17, ".cpu.regf", "v_toggle/regfile", "w_en");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1237]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 19, 9, ".cpu.regf", "v_line/regfile", "block", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1238]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 24, 10, ".cpu.regf", "v_branch/regfile", "if", "24-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1239]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 24, 11, ".cpu.regf", "v_branch/regfile", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1240]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 24, 26, ".cpu.regf", "v_expr/regfile", "((w_en == 1'h1)==1 && (w_addr != 5'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1241]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 24, 26, ".cpu.regf", "v_expr/regfile", "((w_addr != 5'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1242]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 24, 26, ".cpu.regf", "v_expr/regfile", "((w_en == 1'h1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1243]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 18, 5, ".cpu.regf", "v_line/regfile", "elsif", "18-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1244]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 17, 1, ".cpu.regf", "v_line/regfile", "block", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1245]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/regfile.sv", 29, 1, ".cpu.regf", "v_line/regfile", "block", "29-31");
    vlSelf->__vlCoverToggleInsert(0, 24, 1, &(vlSymsp->__Vcoverage[1246]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 2, 24, ".cpu.ext", "v_toggle/signext", "raw_instr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[1296]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 3, 23, ".cpu.ext", "v_toggle/signext", "imm_src");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1302]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 5, 25, ".cpu.ext", "v_toggle/signext", "imm_out");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1366]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 8, 14, ".cpu.ext", "v_toggle/signext", "imm_gathered");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 12, 15, ".cpu.ext", "v_line/signext", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 13, 15, ".cpu.ext", "v_line/signext", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 14, 9, ".cpu.ext", "v_line/signext", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/signext.sv", 10, 1, ".cpu.ext", "v_line/signext", "block", "10-11");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[1394]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 2, 23, ".cpu.alu_unit", "v_toggle/alu", "op");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1400]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 3, 24, ".cpu.alu_unit", "v_toggle/alu", "operand_a");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1464]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 4, 24, ".cpu.alu_unit", "v_toggle/alu", "operand_b");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1528]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 6, 25, ".cpu.alu_unit", "v_toggle/alu", "alu_result");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1592]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 7, 18, ".cpu.alu_unit", "v_toggle/alu", "zero");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1594]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 12, 16, ".cpu.alu_unit", "v_line/alu", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1595]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 13, 16, ".cpu.alu_unit", "v_line/alu", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1596]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 14, 16, ".cpu.alu_unit", "v_line/alu", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1597]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 15, 16, ".cpu.alu_unit", "v_line/alu", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1598]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 16, 16, ".cpu.alu_unit", "v_line/alu", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1599]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 17, 16, ".cpu.alu_unit", "v_line/alu", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1600]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 18, 9, ".cpu.alu_unit", "v_line/alu", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1601]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/alu.sv", 10, 1, ".cpu.alu_unit", "v_line/alu", "block", "10-11");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1602]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 5, 17, ".cpu.data_mem", "v_toggle/memory__Mz2", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1604]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 6, 17, ".cpu.data_mem", "v_toggle/memory__Mz2", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1606]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 7, 24, ".cpu.data_mem", "v_toggle/memory__Mz2", "addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1670]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 8, 24, ".cpu.data_mem", "v_toggle/memory__Mz2", "w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1734]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 9, 17, ".cpu.data_mem", "v_toggle/memory__Mz2", "w_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1736]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 11, 25, ".cpu.data_mem", "v_toggle/memory__Mz2", "r_data");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1800]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 21, 1, ".cpu.data_mem", "v_line/memory__Mz2", "block", "21-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1801]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 28, 9, ".cpu.data_mem", "v_line/memory__Mz2", "block", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 34, 9, ".cpu.data_mem", "v_branch/memory__Mz2", "if", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1803]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 34, 10, ".cpu.data_mem", "v_branch/memory__Mz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1804]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 33, 10, ".cpu.data_mem", "v_branch/memory__Mz2", "if", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1805]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 33, 11, ".cpu.data_mem", "v_branch/memory__Mz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1806]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 27, 5, ".cpu.data_mem", "v_line/memory__Mz2", "elsif", "27-28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1807]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 25, 1, ".cpu.data_mem", "v_line/memory__Mz2", "block", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1808]), first, "/home/citmain/Holy-Core-Pynq/tb/cpu/../../src/SystemVerilog/memory.sv", 40, 1, ".cpu.data_mem", "v_line/memory__Mz2", "block", "40-41");
}
