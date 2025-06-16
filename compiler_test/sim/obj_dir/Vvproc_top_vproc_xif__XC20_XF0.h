// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvproc_top.h for the primary calling header

#ifndef VERILATED_VVPROC_TOP_VPROC_XIF__XC20_XF0_H_
#define VERILATED_VVPROC_TOP_VPROC_XIF__XC20_XF0_H_  // guard

#include "verilated_heavy.h"

//==========

class Vvproc_top__Syms;

//----------

VL_MODULE(Vvproc_top_vproc_xif__XC20_XF0) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ issue_ready;
    CData/*7:0*/ issue_resp;
    VlWide<4>/*102:0*/ issue_req;
    VlWide<3>/*80:0*/ mem_req;

    // INTERNAL VARIABLES
    Vvproc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vvproc_top_vproc_xif__XC20_XF0);  ///< Copying not allowed
  public:
    Vvproc_top_vproc_xif__XC20_XF0(const char* name);
    ~Vvproc_top_vproc_xif__XC20_XF0();

    // INTERNAL METHODS
    void __Vconfigure(Vvproc_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
