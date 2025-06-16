// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVPROC_TOP_H_
#define VERILATED_VVPROC_TOP_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vvproc_top__Syms;
class Vvproc_top___024root;
class Vvproc_top_vproc_xif__XC20_XF0;
class Vvproc_top_vproc_xif__XB3_XC20;


// This class is the main interface to the Verilated model
class Vvproc_top VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vvproc_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_OUT8(&mem_req_o,0,0);
    VL_OUT(&mem_addr_o,31,0);
    VL_OUT8(&mem_we_o,0,0);
    VL_OUT8(&mem_be_o,3,0);
    VL_OUT(&mem_wdata_o,31,0);
    VL_IN8(&mem_rvalid_i,0,0);
    VL_IN8(&mem_err_i,0,0);
    VL_IN(&mem_rdata_i,31,0);
    VL_OUT(&pend_vreg_wr_map_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vvproc_top_vproc_xif__XC20_XF0* const __PVT__vproc_top__DOT__vcore_xif;
    Vvproc_top_vproc_xif__XB3_XC20* const __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe_xif;
    Vvproc_top_vproc_xif__XB3_XC20* const __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__1__KET____DOT__pipe_xif;
    Vvproc_top_vproc_xif__XB3_XC20* const __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__2__KET____DOT__pipe_xif;
    Vvproc_top_vproc_xif__XB3_XC20* const __PVT__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vvproc_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vvproc_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vvproc_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vvproc_top();
  private:
    VL_UNCOPYABLE(Vvproc_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
