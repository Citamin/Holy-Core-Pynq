// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ cpu__DOT__clk;
        CData/*0:0*/ cpu__DOT__rst_n;
        CData/*6:0*/ cpu__DOT__op;
        CData/*4:0*/ cpu__DOT__rd;
        CData/*2:0*/ cpu__DOT__funct3;
        CData/*4:0*/ cpu__DOT__rs1;
        CData/*4:0*/ cpu__DOT__rs2;
        CData/*3:0*/ cpu__DOT__alu_ctrl;
        CData/*2:0*/ cpu__DOT__imm_src;
        CData/*0:0*/ cpu__DOT__reg_write;
        CData/*0:0*/ cpu__DOT__mem_write;
        CData/*0:0*/ cpu__DOT__zero;
        CData/*0:0*/ cpu__DOT____Vtogcov__clk;
        CData/*0:0*/ cpu__DOT____Vtogcov__rst_n;
        CData/*6:0*/ cpu__DOT____Vtogcov__op;
        CData/*4:0*/ cpu__DOT____Vtogcov__rd;
        CData/*2:0*/ cpu__DOT____Vtogcov__funct3;
        CData/*4:0*/ cpu__DOT____Vtogcov__rs1;
        CData/*4:0*/ cpu__DOT____Vtogcov__rs2;
        CData/*3:0*/ cpu__DOT____Vtogcov__alu_ctrl;
        CData/*2:0*/ cpu__DOT____Vtogcov__imm_src;
        CData/*0:0*/ cpu__DOT____Vtogcov__reg_write;
        CData/*0:0*/ cpu__DOT____Vtogcov__mem_write;
        CData/*0:0*/ cpu__DOT____Vtogcov__zero;
        CData/*0:0*/ cpu__DOT__instr_mem__DOT__clk;
        CData/*0:0*/ cpu__DOT__instr_mem__DOT__rst_n;
        CData/*0:0*/ cpu__DOT__instr_mem__DOT__w_en;
        CData/*0:0*/ cpu__DOT__instr_mem__DOT____Vtogcov__clk;
        CData/*0:0*/ cpu__DOT__instr_mem__DOT____Vtogcov__rst_n;
        CData/*0:0*/ cpu__DOT__instr_mem__DOT____Vtogcov__w_en;
        CData/*0:0*/ cpu__DOT__ctrl__DOT__zero;
        CData/*6:0*/ cpu__DOT__ctrl__DOT__op;
        CData/*2:0*/ cpu__DOT__ctrl__DOT__funct3;
        CData/*6:0*/ cpu__DOT__ctrl__DOT__funct7;
        CData/*0:0*/ cpu__DOT__ctrl__DOT__alu_src;
        CData/*1:0*/ cpu__DOT__ctrl__DOT__write_back_src;
        CData/*3:0*/ cpu__DOT__ctrl__DOT__alu_ctrl;
        CData/*2:0*/ cpu__DOT__ctrl__DOT__imm_src;
        CData/*0:0*/ cpu__DOT__ctrl__DOT__reg_write;
        CData/*0:0*/ cpu__DOT__ctrl__DOT__mem_write;
        CData/*1:0*/ cpu__DOT__ctrl__DOT__alu_op;
        CData/*0:0*/ cpu__DOT__ctrl__DOT____Vtogcov__zero;
        CData/*6:0*/ cpu__DOT__ctrl__DOT____Vtogcov__op;
        CData/*2:0*/ cpu__DOT__ctrl__DOT____Vtogcov__funct3;
        CData/*6:0*/ cpu__DOT__ctrl__DOT____Vtogcov__funct7;
        CData/*0:0*/ cpu__DOT__ctrl__DOT____Vtogcov__alu_src;
        CData/*1:0*/ cpu__DOT__ctrl__DOT____Vtogcov__write_back_src;
        CData/*3:0*/ cpu__DOT__ctrl__DOT____Vtogcov__alu_ctrl;
        CData/*2:0*/ cpu__DOT__ctrl__DOT____Vtogcov__imm_src;
        CData/*0:0*/ cpu__DOT__ctrl__DOT____Vtogcov__reg_write;
        CData/*0:0*/ cpu__DOT__ctrl__DOT____Vtogcov__mem_write;
        CData/*1:0*/ cpu__DOT__ctrl__DOT____Vtogcov__alu_op;
        CData/*0:0*/ cpu__DOT__regf__DOT__clk;
        CData/*0:0*/ cpu__DOT__regf__DOT__rst_n;
        CData/*4:0*/ cpu__DOT__regf__DOT__r_addr1;
        CData/*4:0*/ cpu__DOT__regf__DOT__r_addr2;
        CData/*4:0*/ cpu__DOT__regf__DOT__w_addr;
        CData/*0:0*/ cpu__DOT__regf__DOT__w_en;
        CData/*0:0*/ cpu__DOT__regf__DOT____Vtogcov__clk;
        CData/*0:0*/ cpu__DOT__regf__DOT____Vtogcov__rst_n;
        CData/*4:0*/ cpu__DOT__regf__DOT____Vtogcov__r_addr1;
        CData/*4:0*/ cpu__DOT__regf__DOT____Vtogcov__r_addr2;
    };
    struct {
        CData/*4:0*/ cpu__DOT__regf__DOT____Vtogcov__w_addr;
        CData/*0:0*/ cpu__DOT__regf__DOT____Vtogcov__w_en;
        CData/*2:0*/ cpu__DOT__ext__DOT__imm_src;
        CData/*2:0*/ cpu__DOT__ext__DOT____Vtogcov__imm_src;
        CData/*2:0*/ cpu__DOT__alu_unit__DOT__op;
        CData/*0:0*/ cpu__DOT__alu_unit__DOT__zero;
        CData/*2:0*/ cpu__DOT__alu_unit__DOT____Vtogcov__op;
        CData/*0:0*/ cpu__DOT__alu_unit__DOT____Vtogcov__zero;
        CData/*0:0*/ cpu__DOT__data_mem__DOT__clk;
        CData/*0:0*/ cpu__DOT__data_mem__DOT__rst_n;
        CData/*0:0*/ cpu__DOT__data_mem__DOT__w_en;
        CData/*0:0*/ cpu__DOT__data_mem__DOT____Vtogcov__clk;
        CData/*0:0*/ cpu__DOT__data_mem__DOT____Vtogcov__rst_n;
        CData/*0:0*/ cpu__DOT__data_mem__DOT____Vtogcov__w_en;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cpu__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cpu__DOT__instr_mem__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cpu__DOT__regf__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cpu__DOT__data_mem__DOT__clk__0;
        SData/*11:0*/ cpu__DOT__imm;
        SData/*11:0*/ cpu__DOT____Vtogcov__imm;
        SData/*11:0*/ cpu__DOT__ext__DOT__imm_gathered;
        SData/*11:0*/ cpu__DOT__ext__DOT____Vtogcov__imm_gathered;
        IData/*31:0*/ cpu__DOT__pc;
        IData/*31:0*/ cpu__DOT__pc_next;
        IData/*31:0*/ cpu__DOT__instr;
        IData/*31:0*/ cpu__DOT__read1;
        IData/*31:0*/ cpu__DOT__read2;
        IData/*31:0*/ cpu__DOT__mem_read;
        IData/*31:0*/ cpu__DOT__write_data;
        IData/*24:0*/ cpu__DOT__raw_imm;
        IData/*31:0*/ cpu__DOT__imm_ext;
        IData/*31:0*/ cpu__DOT__alu_result;
        IData/*31:0*/ cpu__DOT____Vtogcov__pc;
        IData/*31:0*/ cpu__DOT____Vtogcov__pc_next;
        IData/*31:0*/ cpu__DOT____Vtogcov__instr;
        IData/*31:0*/ cpu__DOT____Vtogcov__read1;
        IData/*31:0*/ cpu__DOT____Vtogcov__read2;
        IData/*31:0*/ cpu__DOT____Vtogcov__mem_read;
        IData/*31:0*/ cpu__DOT____Vtogcov__write_data;
        IData/*24:0*/ cpu__DOT____Vtogcov__raw_imm;
        IData/*31:0*/ cpu__DOT____Vtogcov__imm_ext;
        IData/*31:0*/ cpu__DOT____Vtogcov__alu_result;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT__addr;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT__w_data;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT__r_data;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT____Vtogcov__addr;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT____Vtogcov__w_data;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT____Vtogcov__r_data;
        IData/*31:0*/ cpu__DOT__instr_mem__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cpu__DOT__regf__DOT__r_data1;
        IData/*31:0*/ cpu__DOT__regf__DOT__r_data2;
        IData/*31:0*/ cpu__DOT__regf__DOT__w_data;
        IData/*31:0*/ cpu__DOT__regf__DOT____Vtogcov__r_data1;
        IData/*31:0*/ cpu__DOT__regf__DOT____Vtogcov__r_data2;
        IData/*31:0*/ cpu__DOT__regf__DOT____Vtogcov__w_data;
        IData/*31:0*/ cpu__DOT__regf__DOT__unnamedblk1__DOT__i;
        IData/*24:0*/ cpu__DOT__ext__DOT__raw_instr;
        IData/*31:0*/ cpu__DOT__ext__DOT__imm_out;
        IData/*24:0*/ cpu__DOT__ext__DOT____Vtogcov__raw_instr;
        IData/*31:0*/ cpu__DOT__ext__DOT____Vtogcov__imm_out;
        IData/*31:0*/ cpu__DOT__alu_unit__DOT__operand_a;
        IData/*31:0*/ cpu__DOT__alu_unit__DOT__operand_b;
    };
    struct {
        IData/*31:0*/ cpu__DOT__alu_unit__DOT__alu_result;
        IData/*31:0*/ cpu__DOT__alu_unit__DOT____Vtogcov__operand_a;
        IData/*31:0*/ cpu__DOT__alu_unit__DOT____Vtogcov__operand_b;
        IData/*31:0*/ cpu__DOT__alu_unit__DOT____Vtogcov__alu_result;
        IData/*31:0*/ cpu__DOT__data_mem__DOT__addr;
        IData/*31:0*/ cpu__DOT__data_mem__DOT__w_data;
        IData/*31:0*/ cpu__DOT__data_mem__DOT__r_data;
        IData/*31:0*/ cpu__DOT__data_mem__DOT____Vtogcov__addr;
        IData/*31:0*/ cpu__DOT__data_mem__DOT____Vtogcov__w_data;
        IData/*31:0*/ cpu__DOT__data_mem__DOT____Vtogcov__r_data;
        IData/*31:0*/ cpu__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 64> cpu__DOT__instr_mem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> cpu__DOT__regf__DOT__regfile;
        VlUnpacked<IData/*31:0*/, 64> cpu__DOT__data_mem__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 64>, false, IData/*31:0*/, 1> __VdlyCommitQueuecpu__DOT__instr_mem__DOT__mem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 32>, false, IData/*31:0*/, 1> __VdlyCommitQueuecpu__DOT__regf__DOT__regfile;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 64>, false, IData/*31:0*/, 1> __VdlyCommitQueuecpu__DOT__data_mem__DOT__mem;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ cpu__DOT__instr_mem__DOT__WORDS = 0x00000040U;
    static constexpr VlWide<5>/*143:0*/ cpu__DOT__instr_mem__DOT__mem_init = VlWide<5>{{
            0x2e6d656d, 0x6d6f7279, 0x5f696d65, 0x74657374,
            0x00002e2f
    }};
    static constexpr IData/*31:0*/ cpu__DOT__data_mem__DOT__WORDS = 0x00000040U;
    static constexpr VlWide<5>/*143:0*/ cpu__DOT__data_mem__DOT__mem_init = VlWide<5>{{
            0x2e6d656d, 0x6d6f7279, 0x5f646d65, 0x74657374,
            0x00002e2f
    }};

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
