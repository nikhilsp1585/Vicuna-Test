// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvproc_top.h for the primary calling header

#include "Vvproc_top_vproc_xif__XC20_XF0.h"
#include "Vvproc_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vvproc_top_vproc_xif__XC20_XF0___ctor_var_reset(Vvproc_top_vproc_xif__XC20_XF0* vlSelf);

Vvproc_top_vproc_xif__XC20_XF0::Vvproc_top_vproc_xif__XC20_XF0(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vvproc_top_vproc_xif__XC20_XF0___ctor_var_reset(this);
}

void Vvproc_top_vproc_xif__XC20_XF0::__Vconfigure(Vvproc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vvproc_top_vproc_xif__XC20_XF0::~Vvproc_top_vproc_xif__XC20_XF0() {
}

void Vvproc_top_vproc_xif__XC20_XF0___ctor_var_reset(Vvproc_top_vproc_xif__XC20_XF0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvproc_top_vproc_xif__XC20_XF0___ctor_var_reset\n"); );
    // Body
    vlSelf->issue_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(103, vlSelf->issue_req);
    vlSelf->issue_resp = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(81, vlSelf->mem_req);
}
