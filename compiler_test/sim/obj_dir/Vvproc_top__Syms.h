// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVPROC_TOP__SYMS_H_
#define VERILATED_VVPROC_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vvproc_top.h"

// INCLUDE MODULE CLASSES
#include "Vvproc_top___024root.h"
#include "Vvproc_top_vproc_xif__XB3_XC20.h"
#include "Vvproc_top_vproc_xif__XC20_XF0.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vvproc_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvproc_top* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vvproc_top___024root           TOP;
    Vvproc_top_vproc_xif__XB3_XC20 TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif;
    Vvproc_top_vproc_xif__XB3_XC20 TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif;
    Vvproc_top_vproc_xif__XC20_XF0 TOP__vproc_top__DOT__vcore_xif;

    // CONSTRUCTORS
    Vvproc_top__Syms(VerilatedContext* contextp, const char* namep, Vvproc_top* modelp);
    ~Vvproc_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
