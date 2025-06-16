// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvproc_top.h"
#include "Vvproc_top__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vvproc_top::Vvproc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vvproc_top__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , mem_req_o{vlSymsp->TOP.mem_req_o}
    , mem_addr_o{vlSymsp->TOP.mem_addr_o}
    , mem_we_o{vlSymsp->TOP.mem_we_o}
    , mem_be_o{vlSymsp->TOP.mem_be_o}
    , mem_wdata_o{vlSymsp->TOP.mem_wdata_o}
    , mem_rvalid_i{vlSymsp->TOP.mem_rvalid_i}
    , mem_err_i{vlSymsp->TOP.mem_err_i}
    , mem_rdata_i{vlSymsp->TOP.mem_rdata_i}
    , pend_vreg_wr_map_o{vlSymsp->TOP.pend_vreg_wr_map_o}
    , __PVT__vproc_top__DOT__vcore_xif{vlSymsp->TOP.__PVT__vproc_top__DOT__vcore_xif}
    , __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif{vlSymsp->TOP.__PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif}
    , __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__1__KET____DOT__pipe_xif{vlSymsp->TOP.__PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__1__KET____DOT__pipe_xif}
    , __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__2__KET____DOT__pipe_xif{vlSymsp->TOP.__PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__2__KET____DOT__pipe_xif}
    , __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif{vlSymsp->TOP.__PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif}
    , rootp{&(vlSymsp->TOP)}
{
}

Vvproc_top::Vvproc_top(const char* _vcname__)
    : Vvproc_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vvproc_top::~Vvproc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvproc_top___024root___eval_initial(Vvproc_top___024root* vlSelf);
void Vvproc_top___024root___eval_settle(Vvproc_top___024root* vlSelf);
void Vvproc_top___024root___eval(Vvproc_top___024root* vlSelf);
QData Vvproc_top___024root___change_request(Vvproc_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vvproc_top___024root___eval_debug_assertions(Vvproc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vvproc_top___024root___final(Vvproc_top___024root* vlSelf);

static void _eval_initial_loop(Vvproc_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvproc_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvproc_top___024root___eval_settle(&(vlSymsp->TOP));
        Vvproc_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvproc_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/nikhil/vicuna-build/vicuna/sim//../rtl//vproc_top.sv", 6, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvproc_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vvproc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvproc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvproc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvproc_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvproc_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/nikhil/vicuna-build/vicuna/sim//../rtl//vproc_top.sv", 6, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvproc_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vvproc_top::final() {
    Vvproc_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vvproc_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvproc_top::name() const {
    return vlSymsp->name();
}
