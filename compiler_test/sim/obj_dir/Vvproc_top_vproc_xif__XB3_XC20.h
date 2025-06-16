// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvproc_top.h for the primary calling header

#ifndef VERILATED_VVPROC_TOP_VPROC_XIF__XB3_XC20_H_
#define VERILATED_VVPROC_TOP_VPROC_XIF__XB3_XC20_H_  // guard

#include "verilated_heavy.h"

//==========

class Vvproc_top__Syms;

//----------

VL_MODULE(Vvproc_top_vproc_xif__XB3_XC20) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ mem_valid;
    CData/*7:0*/ mem_resp;
    VlWide<3>/*80:0*/ mem_req;
    QData/*36:0*/ mem_result;

    // INTERNAL VARIABLES
    Vvproc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vvproc_top_vproc_xif__XB3_XC20);  ///< Copying not allowed
  public:
    Vvproc_top_vproc_xif__XB3_XC20(const char* name);
    ~Vvproc_top_vproc_xif__XB3_XC20();

    // INTERNAL METHODS
    void __Vconfigure(Vvproc_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
