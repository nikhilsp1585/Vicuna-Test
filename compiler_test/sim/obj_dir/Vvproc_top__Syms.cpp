// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vvproc_top__Syms.h"
#include "Vvproc_top.h"
#include "Vvproc_top___024root.h"
#include "Vvproc_top_vproc_xif__XB3_XC20.h"
#include "Vvproc_top_vproc_xif__XC20_XF0.h"

// FUNCTIONS
Vvproc_top__Syms::~Vvproc_top__Syms()
{
}

Vvproc_top__Syms::Vvproc_top__Syms(VerilatedContext* contextp, const char* namep,Vvproc_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif(Verilated::catName(namep, "vproc_top.v_core.genblk9[0].pipe.genblk1.pipeline.unit_mux.genblk1[0].genblk1.unit_xif"))
    , TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif(Verilated::catName(namep, "vproc_top.v_core.genblk9[0].pipe_xif"))
    , TOP__vproc_top__DOT__vcore_xif(Verilated::catName(namep, "vproc_top.vcore_xif"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif = &TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif;
    TOP.__PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif = &TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif;
    TOP.__PVT__vproc_top__DOT__vcore_xif = &TOP__vproc_top__DOT__vcore_xif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif.__Vconfigure(this, true);
    TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif.__Vconfigure(this, false);
    TOP__vproc_top__DOT__vcore_xif.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
