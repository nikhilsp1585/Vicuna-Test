// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvproc_top.h for the primary calling header

#include "Vvproc_top___024root.h"
#include "Vvproc_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vvproc_top___024root___combo__TOP__10(Vvproc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvproc_top___024root___combo__TOP__10\n"); );
    // Variables
    CData/*0:0*/ vproc_top__DOT__data_rvalid;
    QData/*36:0*/ TOP__vproc_top__DOT__vcore_xif__DOT__mem_result;
    // Body
    vlSelf->vproc_top__DOT__u_core__DOT__clk = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
                                                & (IData)(vlSelf->clk_i));
    TOP__vproc_top__DOT__vcore_xif__DOT__mem_result 
        = (((QData)((IData)(vlSelf->vproc_top__DOT__vdata_wait_id)) 
            << 0x22U) | (((QData)((IData)(vlSelf->mem_rdata_i)) 
                          << 2U) | (QData)((IData)(
                                                   ((IData)(vlSelf->mem_err_i) 
                                                    << 1U)))));
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->vproc_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__fetch_enable_q) 
               & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__core_busy_q));
    }
    vproc_top__DOT__data_rvalid = ((((IData)(vlSelf->mem_rvalid_i) 
                                     & vlSelf->vproc_top__DOT__req_sources
                                     [0U]) & (~ vlSelf->vproc_top__DOT__req_write
                                              [0U])) 
                                   | (((IData)(vlSelf->mem_rvalid_i) 
                                       & vlSelf->vproc_top__DOT__req_sources
                                       [0U]) & vlSelf->vproc_top__DOT__req_write
                                      [0U]));
    vlSymsp->TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif.mem_result 
        = TOP__vproc_top__DOT__vcore_xif__DOT__mem_result;
    vlSelf->vproc_top__DOT__vdata_rvalid = ((IData)(vlSelf->vproc_top__DOT__vdata_waiting) 
                                            & (IData)(vproc_top__DOT__data_rvalid));
    vlSelf->vproc_top__DOT__sdata_rvalid = ((IData)(vlSelf->vproc_top__DOT__sdata_waiting) 
                                            & (IData)(vproc_top__DOT__data_rvalid));
    vlSelf->vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit__DOT__genblk1__DOT__lsu__DOT__xif_mem_result_id_valid 
        = ((IData)(vlSelf->vproc_top__DOT__vdata_rvalid) 
           & ((7U & (IData)((vlSymsp->TOP__vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit_xif.mem_result 
                             >> 0x22U))) == (7U & (IData)(
                                                          (vlSelf->vproc_top__DOT__v_core__DOT__genblk9__BRA__0__KET____DOT__pipe__DOT__genblk1__DOT__pipeline__DOT__unit_mux__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__unit__DOT__genblk1__DOT__lsu__DOT____Vcellout__lsu_queue__deq_data_o 
                                                           >> 0x1fU)))));
}

VL_INLINE_OPT void Vvproc_top___024root___sequent__TOP__12(Vvproc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvproc_top___024root___sequent__TOP__12\n"); );
    // Body
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id 
            = (0xffffU & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata);
    }
    if ((((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
          & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
         & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr;
    }
    if (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
         | ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
            & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U];
    }
    if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U];
    }
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U];
    }
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 
            = (1U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                     & ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                         ? (IData)((2U == (3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))
                         : (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                             & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                            & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
    }
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id 
            = (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
    }
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata));
    }
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err;
    }
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
    }
    if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    if ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((6U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((5U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
         | ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
            & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
}

VL_INLINE_OPT void Vvproc_top___024root___sequent__TOP__13(Vvproc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvproc_top___024root___sequent__TOP__13\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    CData/*0:0*/ __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    CData/*0:0*/ __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    CData/*0:0*/ __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    VlWide<32>/*1023:0*/ __Vtemp737;
    VlWide<32>/*1023:0*/ __Vtemp738;
    QData/*33:0*/ __Vdlyvval__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    QData/*33:0*/ __Vdlyvval__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    // Body
    __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (vlSelf->mem_rdata_i >> 8U);
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                    ? 1U : (1U | (0xffffff00U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q 
            = (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err))) 
               & 1U);
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
               & 1U);
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
        = ((IData)(vlSelf->rst_ni) ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                >> 1U))
                                       : (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                ? (1U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                         >> 1U)) : (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n));
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d) 
               & 1U);
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                ? (1U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                         >> 1U)) : (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n));
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d) 
               & 1U);
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
               & 1U);
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
               & 1U);
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
            = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
               & 1U);
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = 0U;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = (IData)((vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                           >> 1U));
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __Vdlyvval__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [0U];
            __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
    } else {
        __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __Vdlyvval__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [1U];
            __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
    } else {
        __Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((2U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((4U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((8U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x80U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x100U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x200U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x400U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x800U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x1000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x80000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x100000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x200000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x400000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x800000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x1000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x2000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x4000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x8000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40000000U & vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU] 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU] = 0U;
    }
    if (__Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __Vdlyvval__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __Vdlyvval__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__Vdlyvset__vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((6U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((5U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | ((IData)((1U == (3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
              << 1U));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | ((IData)((2U == (6U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
              << 2U));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set 
        = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
           & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    if (vlSelf->rst_ni) {
        if (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
            }
        }
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
            = (1U & ((~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                     | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    __Vtemp737[0U] = 0U;
    __Vtemp737[1U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp737[2U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp737[3U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp737[4U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp737[5U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp737[6U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp737[7U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp737[8U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp737[9U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp737[0xaU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp737[0xbU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    __Vtemp737[0xcU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    __Vtemp737[0xdU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    __Vtemp737[0xeU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    __Vtemp737[0xfU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    __Vtemp737[0x10U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    __Vtemp737[0x11U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    __Vtemp737[0x12U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    __Vtemp737[0x13U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    __Vtemp737[0x14U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    __Vtemp737[0x15U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    __Vtemp737[0x16U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    __Vtemp737[0x17U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    __Vtemp737[0x18U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    __Vtemp737[0x19U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    __Vtemp737[0x1aU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    __Vtemp737[0x1bU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    __Vtemp737[0x1cU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    __Vtemp737[0x1dU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    __Vtemp737[0x1eU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    __Vtemp737[0x1fU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
    vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc 
        = __Vtemp737[(0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 0xfU))];
    __Vtemp738[0U] = 0U;
    __Vtemp738[1U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp738[2U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp738[3U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp738[4U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp738[5U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp738[6U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp738[7U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp738[8U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp738[9U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp738[0xaU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp738[0xbU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    __Vtemp738[0xcU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    __Vtemp738[0xdU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    __Vtemp738[0xeU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    __Vtemp738[0xfU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    __Vtemp738[0x10U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    __Vtemp738[0x11U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    __Vtemp738[0x12U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    __Vtemp738[0x13U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    __Vtemp738[0x14U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    __Vtemp738[0x15U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    __Vtemp738[0x16U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    __Vtemp738[0x17U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    __Vtemp738[0x18U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    __Vtemp738[0x19U] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    __Vtemp738[0x1aU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    __Vtemp738[0x1bU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    __Vtemp738[0x1cU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    __Vtemp738[0x1dU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    __Vtemp738[0x1eU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    __Vtemp738[0x1fU] = vlSelf->vproc_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
    vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc 
        = __Vtemp738[(0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 0x14U))];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [0U];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_q_ex[1U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [1U];
    if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                              >> 0x10U) : (vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc 
                                           >> 0x10U)));
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc));
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc);
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc));
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_q_ex
        [1U];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [0U];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1U] 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [1U];
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                   << 1U));
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                  << 1U))));
    }
}

VL_INLINE_OPT void Vvproc_top___024root___sequent__TOP__14(Vvproc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvproc_top___024root___sequent__TOP__14\n"); );
    // Body
    if (VL_UNLIKELY(((((5U == (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                       & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                      & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                     & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d)))) {
        VL_WRITEF("%t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",
                  64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id,
                  32,vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id);
    }
}

VL_INLINE_OPT void Vvproc_top___024root___combo__TOP__15(Vvproc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvproc_top___024root___combo__TOP__15\n"); );
    // Variables
    IData/*31:0*/ vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
    IData/*31:0*/ vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    // Body
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = vlSelf->mem_rdata_i;
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = (IData)((((QData)((IData)(((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                      : vlSelf->mem_rdata_i))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                  ? 
                                                 vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                  : vlSelf->mem_rdata_i)))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = (IData)(((((QData)((IData)(((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                       : vlSelf->mem_rdata_i))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                   ? 
                                                  vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                   : vlSelf->mem_rdata_i)))) 
                   >> 0x20U));
    vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelf->mem_rdata_i);
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err 
        = (1U & ((IData)(vlSelf->mem_err_i) | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q)));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err 
        = (1U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 & (((IData)(vlSelf->mem_rvalid_i) 
                     & (~ vlSelf->vproc_top__DOT__req_sources
                        [0U])) | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
            | (IData)(vlSelf->mem_err_i)) | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = (((IData)(vlSelf->vproc_top__DOT__sdata_rvalid) 
            | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSelf->mem_rdata_i 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelf->mem_rdata_i 
                                      >> 0x18U)) : 
                       (vlSelf->mem_rdata_i >> 0x18U))
                    : ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelf->mem_rdata_i 
                                              >> 0x17U)))) 
                            << 8U) | (0xffU & (vlSelf->mem_rdata_i 
                                               >> 0x10U)))
                        : (0xffU & (vlSelf->mem_rdata_i 
                                    >> 0x10U)))) : 
               ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                 ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                     ? (((- (IData)((1U & (vlSelf->mem_rdata_i 
                                           >> 0xfU)))) 
                         << 8U) | (0xffU & (vlSelf->mem_rdata_i 
                                            >> 8U)))
                     : (0xffU & (vlSelf->mem_rdata_i 
                                 >> 8U))) : ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->mem_rdata_i 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->mem_rdata_i))
                                              : (0xffU 
                                                 & vlSelf->mem_rdata_i))))
            : ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelf->mem_rdata_i 
                                                  >> 7U)))) 
                                << 0x10U) | ((0xff00U 
                                              & (vlSelf->mem_rdata_i 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U))))
                            : ((0xff00U & (vlSelf->mem_rdata_i 
                                           << 8U)) 
                               | (0xffU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x10U))))
                        : ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSelf->mem_rdata_i 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelf->mem_rdata_i 
                                             >> 0x10U))
                            : (vlSelf->mem_rdata_i 
                               >> 0x10U))) : ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                               ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->mem_rdata_i 
                                                                   >> 0x17U)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (vlSelf->mem_rdata_i 
                                                         >> 8U)))
                                                   : 
                                                  (0xffffU 
                                                   & (vlSelf->mem_rdata_i 
                                                      >> 8U)))
                                               : ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->mem_rdata_i 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->mem_rdata_i))
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->mem_rdata_i))))
                : ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelf->mem_rdata_i << 8U) 
                           | (0xffU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x10U))) : 
                       ((vlSelf->mem_rdata_i << 0x10U) 
                        | (0xffffU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 8U)))) : (
                                                   (1U 
                                                    & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? 
                                                   ((vlSelf->mem_rdata_i 
                                                     << 0x18U) 
                                                    | vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                                    : vlSelf->mem_rdata_i))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->vproc_top__DOT__sdata_rvalid) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if (((IData)(vlSelf->vproc_top__DOT__sdata_rvalid) 
                 | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U)) : ((vlSelf->mem_rdata_i 
                                                << 0x10U) 
                                               | (vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                  >> 0x10U)))
            : vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
              << 2U));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | ((2U & (((4U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                       ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                          >> 2U) : (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)) 
                     << 1U)) | (1U & ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                          >> 1U) : (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)
                  : (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err) 
           & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((((0U == (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                 & (IData)(vlSelf->vproc_top__DOT__sdata_rvalid)) 
                & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
               & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
              << 1U));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err 
        = (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
           & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err 
        = (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 0xdU)))) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x1000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                            ? ((0U != (0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U)))
                                ? (0x33U | ((0x1f00000U 
                                             & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x12U)) 
                                            | ((0xf8000U 
                                                & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)) 
                                               | (0xf80U 
                                                  & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                : ((0U == (0x1fU & 
                                           (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))
                                    ? 0x100073U : (0xe7U 
                                                   | (0xf8000U 
                                                      & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)))))
                            : ((0U != (0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U)))
                                ? (0x33U | ((0x1f00000U 
                                             & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x12U)) 
                                            | (0xf80U 
                                               & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                : (0x67U | (0xf8000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))));
                }
            } else if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
            } else if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                 >> 0xdU)))) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x1013U | ((0x1f00000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                  | ((0xf8000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 8U)) 
                                     | (0xf80U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
        }
    } else if ((1U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | ((0x1000U 
                                                           & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              >> 1U)) 
                                                          | ((0xc00U 
                                                              & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                             | ((0x300U 
                                                                 & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                    << 5U)) 
                                                                | (0x80U 
                                                                   & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 5U))))))))));
            } else if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | ((0x80000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))));
            } else if ((0x800U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1aU) | 
                                       ((0x2000000U 
                                         & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU)) 
                                        | ((0x1f00000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                }
            } else {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | ((0x1f00000U & 
                                       (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0x38000U 
                                          & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0x380U 
                                            & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       ((0x18000000U 
                                         & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x18U)) 
                                        | ((0x4000000U 
                                            & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x17U)) 
                                              | (0x1000000U 
                                                 & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)))))));
                }
            } else {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | ((0x80000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))))
                    : (0x13U | (((- (IData)((1U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0xf8000U 
                                                     & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 8U)) 
                                                    | (0xf80U 
                                                       & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))));
        }
    } else if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((0x4000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x15U)) 
                                    | ((0x2000000U 
                                        & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | ((0x700000U 
                                           & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | ((0xc00U 
                                                 & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                | (0x200U 
                                                   & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 3U))))))));
            }
        }
    } else if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
    } else if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                         >> 0xdU)))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
            = (0x10413U | ((0x3c000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x13U)) 
                           | ((0x3000000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0xdU)) 
                              | ((0x800000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x12U)) 
                                 | ((0x400000U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x10U)) 
                                    | (0x380U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 0xcU)))) {
                    if ((0U == (0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 2U)))) {
                        if ((0U == (0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x1000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        }
    } else if ((1U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0U == ((0x20U & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((0x8000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x2000U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
    } else if ((0U == (0xffU & (vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                >> 5U)))) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
    }
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)) 
           & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                         >> 0x10U))) & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | (0xfffffffcU & (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                              << 2U) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((6U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (1U & (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                     & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((5U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (2U & ((((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                      << 1U) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((3U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (4U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    | (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                        << 2U) & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)))));
    vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    if ((1U & vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & ((2U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                           >> 1U) & (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                         | (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                      : (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                         | ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                            & ((~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                               | (~ (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))));
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw 
            = (1U & ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
    } else {
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw 
            = (1U & (IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
}

extern const VlUnpacked<CData/*2:0*/, 4> Vvproc_top__ConstPool__TABLE_544b3534_0;
extern const VlUnpacked<CData/*2:0*/, 4> Vvproc_top__ConstPool__TABLE_55f8016b_0;

VL_INLINE_OPT void Vvproc_top___024root___multiclk__TOP__16(Vvproc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvproc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvproc_top___024root___multiclk__TOP__16\n"); );
    // Variables
    CData/*6:0*/ vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o;
    CData/*1:0*/ vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o;
    CData/*1:0*/ vproc_top__DOT__v_core__DOT____Vcellout__dec__vsew_o;
    CData/*2:0*/ vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask;
    CData/*2:0*/ vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask_narrow;
    CData/*1:0*/ __Vtableidx7;
    // Body
    vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
        = (3U | ((IData)((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc)) 
                           << 0x20U) | (QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc)))) 
                 << 2U));
    vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
        = (((IData)((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc)) 
                      << 0x20U) | (QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc)))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc))) 
                                  >> 0x20U)) << 2U));
    vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
        = (((IData)((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                      << 5U) | (QData)((IData)(vlSelf->vproc_top__DOT__cpi_instr_id_q)))) 
            << 2U) | ((IData)(((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_b_ecc)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__rf_rdata_a_ecc))) 
                               >> 0x20U)) >> 0x1eU));
    vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
        = (((IData)((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                      << 5U) | (QData)((IData)(vlSelf->vproc_top__DOT__cpi_instr_id_q)))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelf->vproc_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                    << 5U) | (QData)((IData)(vlSelf->vproc_top__DOT__cpi_instr_id_q))) 
                                  >> 0x20U)) << 2U));
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((0x1000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x400U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                } else if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                } else if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal 
                                = (1U & ((~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                             >> 5U)) 
                                         | ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                             >> 4U) 
                                            | (IData)(
                                                      (((0U 
                                                         != 
                                                         (0xe0000000U 
                                                          & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) 
                                                        | (1U 
                                                           != 
                                                           (0xfU 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]))) 
                                                       | ((0x10000000U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                           ? 
                                                          ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x1bU) 
                                                           | ((~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x14U)) 
                                                              | (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x16U)))))
                                                           : 
                                                          ((0x8000000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                            ? 
                                                           ((~ 
                                                             (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                              >> 0x14U)) 
                                                            | (0U 
                                                               != 
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                   >> 0x16U))))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                              >> 0x14U)) 
                                                            | (0U 
                                                               != 
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                   >> 0x16U)))))))))));
                        } else if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((1U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                    >> 0x1fU)) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((0x40000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x20000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x10000000U & 
                                     vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x8000000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((0x10000000U 
                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x8000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x14U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                }
                            } else if ((0x8000000U 
                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x14U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0x14U)))) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            }
                        } else {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        }
                    } else {
                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                    }
                } else {
                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                }
            } else {
                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
            }
        } else if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((0x400U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
            } else if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                          >> 0x13U)))) {
                            if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                        }
                                                    } else {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((8U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x10U & 
                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                        }
                                                    } else if (
                                                               (0x80000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x14U)))) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    } else if (
                                                               (0x2000000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    } else if (
                                                               (0x1000000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x800000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x16U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                            }
                                                        } else {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                        }
                                                    } else if (
                                                               (0x800000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x16U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    } else if (
                                                               (0x80000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x14U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    }
                                } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x4000000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal 
                                                = (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                       >> 0x17U)));
                                        }
                                    } else {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal 
                                                = (3U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                       >> 0x17U)));
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x1bU))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        if ((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0x16U)))) {
                                            if ((0x10U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x11U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x16U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x80000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                                }
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            } else if (
                                                       (0x80000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        } else if (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else if ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x200000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((0x200000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x100000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                } else if ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0x14U)))) {
                                if ((0x80000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                    }
                } else {
                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                }
            } else {
                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
            }
        } else {
            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
        }
    } else if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
    } else if ((0x400U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
    } else if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0U != ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                            | (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                     >> 0x13U))))) {
                    if ((5U != ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                | (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                         >> 0x13U))))) {
                        if ((6U != ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                    | (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                             >> 0x13U))))) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                              >> 2U)))) {
                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                  >> 1U)))) {
                        if ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                             >> 0x1fU)) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal 
                                = (1U & ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                          >> 0x1eU) 
                                         | ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                             >> 0x1dU) 
                                            | ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                >> 0x1cU) 
                                               | ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x1bU) 
                                                  | (0x27U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 7U))))))));
                        } else if ((0x40000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x20000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                            } else if ((0x10000000U 
                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x1bU)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((0x8000000U 
                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                            } else if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                  >> 4U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                    }
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            } else if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                              >> 4U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                                }
                            }
                        } else if ((0x20000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((0x10000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        } else if ((0x8000000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
                        }
                    }
                }
            } else {
                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
            }
        } else {
            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
        }
    } else {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__instr_illegal = 1U;
    }
    vlSelf->vproc_top__DOT__v_core__DOT__issue_id_used 
        = (0U != (3U & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_state_q) 
                        >> (0xeU & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                    >> 1U)))));
    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xcU)))) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x20U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x10U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (8U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (0x100000U 
                                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                >> 1U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (0x10U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((8U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x200000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                            >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                    = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                            }
                                                        } else if (
                                                                   (0x100000U 
                                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = 
                                                                ((0x80000U 
                                                                  & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                  ? (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q)
                                                                  : 2U);
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                        >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    } else if (
                                                               (0x200000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                    = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                        >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                        >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = 
                                                            ((0x80000U 
                                                              & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                              ? (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q)
                                                              : 2U);
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                        = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                        >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                        }
                                    } else if ((0x20U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x10U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((8U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x200000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x14U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (0x100000U 
                                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (0x80000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x200000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                        >> 3U)))) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        }
                                    } else if ((0x10U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                    = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                                = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                            = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o 
                                                        = vlSelf->vproc_top__DOT__v_core__DOT__vxrm_q;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 1U)))) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o 
        = (0x1fU & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                    >> 0xeU));
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xcU)))) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o 
                                    = (0x20U | (0x1fU 
                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0xeU)));
                                if ((7U == (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o 
                                        = (0x1fU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o));
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                   >> 6U)))) {
                                    if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x15U)))) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o 
                                                                        = 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x10U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o 
                                                                    = 
                                                                    (0x20U 
                                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o 
                            = (0x20U | (0x1fU & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0xeU)));
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o = 0ULL;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((0x1000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                  >> 9U)))) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x200000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                            = ((0x7f00000000ULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                               | (IData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x16U)))));
                                    } else if ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                            = ((0x7f00000000ULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                               | (IData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x16U)))));
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = ((0x7f00000000ULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                           | (IData)((IData)(
                                                             ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                               << 0x1eU) 
                                                              | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                                                 >> 2U)))));
                                } else if ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = ((0x7f00000000ULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                           | (IData)((IData)(
                                                             ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                               << 0x1eU) 
                                                              | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                                                 >> 2U)))));
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x200000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x100000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                            = ((0x1fffffffffULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                               | ((QData)((IData)(
                                                                  (3U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                       >> 5U))))) 
                                                  << 0x25U));
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                            = ((0x7f00000000ULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                               | (IData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                                                              >> 0x25U)))
                                                                   ? 
                                                                  ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                                    << 0x1eU) 
                                                                   | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                                                      >> 2U))
                                                                   : 
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                      >> 0x16U))))));
                                    } else {
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                            = (0x2000000000ULL 
                                               | (0x1fffffffffULL 
                                                  & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o));
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                            = ((0x7f00000000ULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                               | (IData)((IData)(
                                                                 ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                                   << 0x1eU) 
                                                                  | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                                                     >> 2U)))));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = (0x2000000000ULL 
                                           | (0x1fffffffffULL 
                                              & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o));
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = ((0x7f00000000ULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                           | (IData)((IData)(
                                                             ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                               << 0x1eU) 
                                                              | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                                                 >> 2U)))));
                                }
                            } else if ((0x100000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x80000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = (0x1fffffffffULL 
                                           & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o);
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = ((0x7f00000000ULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                           | (IData)((IData)(
                                                             (((0xeU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                    >> 1U))) 
                                                               | (0xfU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                      >> 1U))))
                                                               ? 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                  >> 0x16U))
                                                               : 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                               >> 0x1aU)))) 
                                                                << 5U) 
                                                               | (0x1fU 
                                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x16U)))))));
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                        = ((0xffffffffULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                           | ((QData)((IData)(
                                                              (0x40U 
                                                               | (0x1fU 
                                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x16U))))) 
                                              << 0x20U));
                                }
                            } else {
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                    = ((0xffffffffULL 
                                        & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                       | ((QData)((IData)(
                                                          (0x40U 
                                                           | (0x1fU 
                                                              & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x16U))))) 
                                          << 0x20U));
                            }
                            if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x13U)))) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                              >> 6U)))) {
                                    if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x15U)))) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    if (
                                                                        (0x4000000U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                                                            = 
                                                                            (0x3fffffffffULL 
                                                                             & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                                                    = 
                                                                    (0x3fffffffffULL 
                                                                     & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o);
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                                                = 
                                                                (0x3fffffffffULL 
                                                                 & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                            = (0x2000000000ULL | (0x1fffffffffULL 
                                                  & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o));
                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                            = ((0x7f00000000ULL & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                               | (IData)((IData)(((
                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                   << 0x1eU) 
                                                  | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                                     >> 2U)))));
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xcU)))) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x15U)))) {
                                                                if (
                                                                    (0x100000U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    if (
                                                                        (0x80000U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                                >> 0x1aU)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                if (
                                                                                (0x800000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 3U;
                                                                                }
                                                                                }
                                                                                } else if (
                                                                                (0x800000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 2U;
                                                                                }
                                                                                } else {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul 
                                                                                = 
                                                                                ((0x400000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                                 ? 1U
                                                                                 : 0U);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x10U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((8U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x15U)))) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                                }
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x15U)))) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                          >> 1U)))) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x1fU)))) {
                                    if ((0x40000000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x1dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x40U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x20U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (0x10U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 3U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x20U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x10U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul = 2U;
                                                        }
                                                    } else {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul 
                                                            = 
                                                            ((0x10U 
                                                              & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                              ? 1U
                                                              : 0U);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xcU)))) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x15U)))) {
                                                                if (
                                                                    (0x100000U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    if (
                                                                        (0x80000U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x10U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((8U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x15U)))) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                                }
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x15U)))) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x15U)))) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                          >> 1U)))) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x1fU)))) {
                                    if ((0x40000000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x1dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x1bU)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xcU)))) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x15U)))) {
                                                                if (
                                                                    (0x100000U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    if (
                                                                        (0x80000U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol = 3U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (0x200000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    if (
                                                                        (0U 
                                                                         == 
                                                                         (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                          >> 0x1bU))) {
                                                                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                          >> 1U)))) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x1fU)))) {
                                    if ((0x40000000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x8000000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x1bU)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol = 3U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xcU)))) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((7U != (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x20U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x10U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (8U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (0x100000U 
                                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                >> 1U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x100000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 2U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                            }
                                        } else if (
                                                   (0x10U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((8U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (2U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        if (
                                                            (0x200000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x14U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (0x100000U 
                                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            if (
                                                                (0x80000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                        >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                        }
                                                    } else if (
                                                               (0x200000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x13U)))) {
                                                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                            }
                                                        }
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 3U;
                                                }
                                            }
                                        }
                                    } else if ((0x20U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x15U)))) {
                                                            if (
                                                                (0x100000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x13U)))) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode = 0U;
    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o = 0ULL;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((0x1000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                  >> 9U)))) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                     >> 0x1fU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                         >> 0x1eU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                             >> 0x1dU)))) {
                                                                        if (
                                                                            (0x10000000U 
                                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                (0x600U 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                                }
                                                                            }
                                                                        } else if (
                                                                                (0x8000000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                            if (
                                                                                (0x100000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                (0x200U 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                            }
                                                                        } else if (
                                                                                (0x100000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                (0x400U 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                   >> 5U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x1fU)))) {
                                                            if (
                                                                (0x40000000U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                if (
                                                                    (0x20000000U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    if (
                                                                        (0x10000000U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        if (
                                                                            (0x8000000U 
                                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                            if (
                                                                                (0x100000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                ((0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                                | (((0x80000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                                 ? 0xfU
                                                                                 : 0xeU) 
                                                                                << 9U));
                                                                            } else if (
                                                                                (0x80000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                (0x1a00U 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                            }
                                                                        }
                                                                    }
                                                                } else if (
                                                                           (0x10000000U 
                                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                             >> 0x1bU)))) {
                                                                        if (
                                                                            (0x100000U 
                                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                ((0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                                | (((0x80000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                                 ? 0xcU
                                                                                 : 0xbU) 
                                                                                << 9U));
                                                                        } else if (
                                                                                (0x80000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                                = 
                                                                                (0x1400U 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                        }
                                                                    }
                                                                } else if (
                                                                           (0x8000000U 
                                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    if (
                                                                        (0x100000U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                            = 
                                                                            ((0x1ffU 
                                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                             | (((0x80000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                                 ? 9U
                                                                                 : 8U) 
                                                                                << 9U));
                                                                    } else if (
                                                                               (0x80000U 
                                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                            = 
                                                                            (0xe00U 
                                                                             | (0x1ffU 
                                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                    }
                                                                } else if (
                                                                           (0x100000U 
                                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                        = 
                                                                        ((0x1ffU 
                                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                         | (((0x80000U 
                                                                              & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                              ? 6U
                                                                              : 5U) 
                                                                            << 9U));
                                                                } else if (
                                                                           (0x80000U 
                                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                        = 
                                                                        (0x800U 
                                                                         | (0x1ffU 
                                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x200000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x100000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                            = ((0x1fffffffffULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                               | ((QData)((IData)(
                                                                  (2U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                       >> 5U))))) 
                                                  << 0x25U));
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                            = ((0x7f00000000ULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                               | (IData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                                              >> 0x25U)))
                                                                   ? 
                                                                  ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    << 0x1eU) 
                                                                   | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                                      >> 2U))
                                                                   : 
                                                                  ((0x400U 
                                                                    & ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                        << 5U) 
                                                                       & ((~ 
                                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                            >> 6U)) 
                                                                          << 0xaU))) 
                                                                   | (0x3ffU 
                                                                      & ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                          << 5U) 
                                                                         | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                            >> 0x1bU))))))));
                                    } else {
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                            = (0x4000000000ULL 
                                               | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                            = ((0x60ffffffffULL 
                                                & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                               | ((QData)((IData)(
                                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                   >> 0x1bU))) 
                                                  << 0x20U));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = (0x4000000000ULL 
                                           | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = ((0x60ffffffffULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                           | ((QData)((IData)(
                                                              (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                               >> 0x1bU))) 
                                              << 0x20U));
                                }
                            } else if ((0x100000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x80000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = (0x4000000000ULL 
                                           | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = ((0x60ffffffffULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                           | ((QData)((IData)(
                                                              (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                               >> 0x1bU))) 
                                              << 0x20U));
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = (0x4000000000ULL 
                                           | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = ((0x60ffffffffULL 
                                            & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                           | ((QData)((IData)(
                                                              (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                               >> 0x1bU))) 
                                              << 0x20U));
                                }
                            } else {
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                    = (0x4000000000ULL 
                                       | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                    = ((0x60ffffffffULL 
                                        & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                       | ((QData)((IData)(
                                                          (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                           >> 0x1bU))) 
                                          << 0x20U));
                            }
                            if ((7U == (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x13U)))) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = (0x1ffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = ((0x1e7fU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                       | (((0U == (7U 
                                                   & (IData)(
                                                             (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                              >> 3U))))
                                            ? 0U : 
                                           ((1U == 
                                             (7U & (IData)(
                                                           (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                            >> 3U))))
                                             ? 1U : 
                                            ((2U == 
                                              (7U & (IData)(
                                                            (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                             >> 3U))))
                                              ? 2U : 3U))) 
                                          << 7U));
                                if ((0U != (0xffffffU 
                                            & (IData)(
                                                      (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                       >> 8U))))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0x180U | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                }
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = ((0x1f81U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                       | ((0x70U & 
                                           ((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                            << 4U)) 
                                          | (0xcU & 
                                             ((IData)(
                                                      (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                       >> 6U)) 
                                              << 2U))));
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = (0x1ffeU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                if (((0U == (0x1fU 
                                             & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                >> 0x16U))) 
                                     & (3U != (3U & 
                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                >> 5U))))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = ((0x1ffcU 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                           | (((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0xeU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0xeU)))));
                                }
                            } else if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                 | (0xd00U 
                                                                    | (0x1000U 
                                                                       & ((~ 
                                                                           vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                          << 0xcU))));
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xc80U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xd80U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xc00U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x180U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x80U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                        >> 1U)))) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x1000U 
                                                            & ((~ 
                                                                vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                               << 0xcU)));
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1c01U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (8U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (1U 
                                                             | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1c01U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (8U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1ffeU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1c01U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (((1U 
                                                              & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                              ? 0U
                                                              : 1U) 
                                                            << 5U));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (1U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (((1U 
                                                          & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                          ? 0U
                                                          : 1U) 
                                                        << 5U));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1c01U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (8U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (1U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (8U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1c01U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (((1U 
                                                              & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                              ? 0U
                                                              : 1U) 
                                                            << 5U));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (1U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (((1U 
                                                          & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                          ? 0U
                                                          : 1U) 
                                                        << 5U));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x3fU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x880U 
                                                      | (0x1000U 
                                                         & ((~ 
                                                             vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                            << 0xcU))));
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (((1U 
                                                          & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                          ? 0U
                                                          : 1U) 
                                                        << 5U));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (((1U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                        ? 0U
                                                        : 1U) 
                                                      << 5U));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1ffeU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x3fU 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x800U 
                                                  | (0x1000U 
                                                     & ((~ 
                                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                        << 0xcU))));
                                    }
                                } else if ((0x10U & 
                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                 | (0xe00U 
                                                                    | (0x1000U 
                                                                       & ((~ 
                                                                           vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                          << 0xcU))));
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1000U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xa83U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1000U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xa83U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    } else {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xe00U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1000U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xa83U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1000U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x682U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1000U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x682U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1000U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x682U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xc00U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xa80U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xa80U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xc00U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0xa80U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x680U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x680U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x680U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xe40U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xa80U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xa80U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xe40U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0xa80U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x680U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x680U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x680U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xc40U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0xa80U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0xa80U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0xc40U 
                                                        | (0x1000U 
                                                           & ((~ 
                                                               vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                              << 0xcU))));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0xa80U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x680U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x680U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1001U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x680U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x580U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x980U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                      ? 
                                                     (0xf00U 
                                                      | (1U 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)))
                                                      : 
                                                     ((0x3fU 
                                                       & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                      | (0x580U 
                                                         | (0x1000U 
                                                            & ((~ 
                                                                vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                               << 0xcU)))));
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x980U 
                                                        | (0x1000U 
                                                           & ((~ 
                                                               vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                              << 0xcU))));
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x480U 
                                                        | (0x1000U 
                                                           & ((~ 
                                                               vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                              << 0xcU))));
                                            }
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x1000U 
                                                            & ((~ 
                                                                vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                               << 0xcU)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x280U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x280U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x1000U 
                                                        & ((~ 
                                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                           << 0xcU)));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x280U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x3fU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x400U 
                                                      | (0x1000U 
                                                         & ((~ 
                                                             vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                            << 0xcU))));
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x488U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x88U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x480U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x480U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1001U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x480U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x80U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1001U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x80U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = ((0x1001U 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                           | (0x80U 
                                              | (((1U 
                                                   & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                   ? 0U
                                                   : 1U) 
                                                 << 5U)));
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0xfffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                }
                            } else if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                = 
                                                                ((0x1001U 
                                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                                 | (0x804U 
                                                                    | (((1U 
                                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                         ? 0U
                                                                         : 1U) 
                                                                       << 5U)));
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                                = 
                                                                (0x1000U 
                                                                 | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x80000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1001U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x804U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0x1000U 
                                                             | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    } else {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0x208U 
                                                             | (0x1c01U 
                                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1001U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (4U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0x1000U 
                                                             | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (4U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1000U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x10cU 
                                                         | (0x1c01U 
                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1001U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x884U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0x1000U 
                                                             | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x884U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1000U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x18cU 
                                                         | (0x1c01U 
                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x884U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x84U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1000U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x84U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x188U 
                                                     | (0x1c01U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x84U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1000U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1001U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x808U 
                                                                | (((1U 
                                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                     ? 0U
                                                                     : 1U) 
                                                                   << 5U)));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0x1000U 
                                                             | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x200U 
                                                         | (0x1c01U 
                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x808U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (8U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1000U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x180U 
                                                     | (0x1c01U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (8U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1000U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1c01U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x188U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1000U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x188U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x100U 
                                                     | (0x1c01U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x188U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1000U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x108U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x108U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1000U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x108U 
                                                   | (0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1c01U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x108U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x1000U 
                                               | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x1001U 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xc08U 
                                                                | ((((1U 
                                                                      & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                      ? 7U
                                                                      : 6U) 
                                                                    << 7U) 
                                                                   | (((1U 
                                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                        ? 0U
                                                                        : 3U) 
                                                                      << 5U))));
                                                        if (
                                                            (1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                                = 
                                                                (0x3fffffffffULL 
                                                                 & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                                        }
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0xc08U 
                                                            | ((((1U 
                                                                  & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                  ? 7U
                                                                  : 6U) 
                                                                << 7U) 
                                                               | (((1U 
                                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                    ? 0U
                                                                    : 3U) 
                                                                  << 5U))));
                                                    if (
                                                        (1U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                            = 
                                                            (0x3fffffffffULL 
                                                             & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                                    }
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                } else {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x600U 
                                                         | (0x10ffU 
                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1fbfU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0xfffU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x1000U 
                                                            & ((~ 
                                                                vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                               << 0xcU)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0xc08U 
                                                        | ((((1U 
                                                              & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                              ? 7U
                                                              : 6U) 
                                                            << 7U) 
                                                           | (((1U 
                                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                ? 0U
                                                                : 3U) 
                                                              << 5U))));
                                                if (
                                                    (1U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                        = 
                                                        (0x3fffffffffULL 
                                                         & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                                }
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 1U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x15U)))) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x10ffU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (((0x400000U 
                                                                  & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                                  ? 3U
                                                                  : 4U) 
                                                                << 8U));
                                                        vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                            = 
                                                            ((0x3fffffffffULL 
                                                              & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                                             | ((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                                >> 0x16U))))) 
                                                                << 0x26U));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            (0x1fbfU 
                                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0xfffU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0x1000U 
                                                                & ((~ 
                                                                    vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                   << 0xcU)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1001U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (8U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 2U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1000U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (8U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 2U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (8U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 2U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1000U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x48U 
                                                     | (0x1c01U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x48U 
                                                   | (0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0xf00U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1ffeU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x16U)));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x48U 
                                               | (0x1c01U 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1001U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (((1U 
                                                          & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                          ? 0U
                                                          : 2U) 
                                                        << 5U));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1000U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1001U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (((1U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                        ? 0U
                                                        : 2U) 
                                                      << 5U));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1000U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1001U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (((1U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                    ? 0U
                                                    : 2U) 
                                                  << 5U));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x1000U 
                                               | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            if ((0U 
                                                 == 
                                                 (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x1bU))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xf88U 
                                                     | (1U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x40U 
                                               | (0x1c01U 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x40U 
                                               | (0x1c01U 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    } else {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0x16U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x10ffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        } else if (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x16U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x100U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        } else if (
                                                   (0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x16U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x200U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        }
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x40U 
                                               | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0xfffU 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x1000U 
                                                  & ((~ 
                                                      vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                     << 0xcU)));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0x40U | 
                                           (0x1c01U 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0xfffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                }
                            } else if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                            = 
                                                            ((0x3ffU 
                                                              & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                             | (0xc00U 
                                                                | (0x1000U 
                                                                   & ((~ 
                                                                       vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                      << 0xcU))));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3ffU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x800U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3ffU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x800U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x3ffU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x400U 
                                                            | (0x1000U 
                                                               & ((~ 
                                                                   vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                                  << 0xcU))));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x3ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x1000U 
                                                        & ((~ 
                                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                           << 0xcU)));
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x3ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x1000U 
                                                        & ((~ 
                                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                           << 0xcU)));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 1U)))) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x500U 
                                                         | (0x10ffU 
                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0x1fbfU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0xfffU 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x1000U 
                                                            & ((~ 
                                                                vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                               << 0xcU)));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x500U 
                                                     | (0x10ffU 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1fbfU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0xfffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x1000U 
                                                        & ((~ 
                                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                           << 0xcU)));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x500U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1fbfU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0xfffU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                         << 0xcU)));
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        ((0x1c01U 
                                                          & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                         | (0x14U 
                                                            | (((1U 
                                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                                 ? 0U
                                                                 : 1U) 
                                                               << 5U)));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (1U 
                                                         | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x200U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x200U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            } else {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x14U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x200U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x14U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x180U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x180U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x14U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1ffeU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1c01U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x180U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x10U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x100U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x100U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x10U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (1U 
                                                   | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1c01U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x100U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1c01U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x10U 
                                                  | (((1U 
                                                       & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                       ? 0U
                                                       : 1U) 
                                                     << 5U)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x1ffeU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                }
                            } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                        = 
                                                        (0xb68U 
                                                         | (1U 
                                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xf00U 
                                                     | (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1fbfU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0xfffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (0x1000U 
                                                        & ((~ 
                                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                           << 0xcU)));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xb68U 
                                                   | (1U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x368U 
                                                     | (1U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xe00U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1fbfU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0xfffU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                         << 0xcU)));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x368U 
                                               | (1U 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xbe8U 
                                                     | (1U 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xd00U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1fbfU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0xfffU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                         << 0xcU)));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xbe8U 
                                               | (1U 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x3e8U 
                                                   | (1U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xc00U 
                                               | (0x10ffU 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x1fbfU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0xfffU 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x1000U 
                                                  & ((~ 
                                                      vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                     << 0xcU)));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0x3e8U | 
                                           (1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                }
                            } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    ((0x1c01U 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                     | (4U 
                                                        | (((1U 
                                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                             ? 0U
                                                             : 1U) 
                                                           << 5U)));
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (4U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        } else {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xb00U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1fbfU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0xfffU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                         << 0xcU)));
                                        }
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0x1c01U 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (8U 
                                                      | (((1U 
                                                           & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                           ? 0U
                                                           : 1U) 
                                                         << 5U)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0xfffU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xa00U 
                                               | (0x10ffU 
                                                  & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0x1fbfU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0xfffU 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (0x1000U 
                                                  & ((~ 
                                                      vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                     << 0xcU)));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = ((0x1c01U 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                           | (8U | 
                                              (((1U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                 ? 0U
                                                 : 1U) 
                                               << 5U)));
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0xfffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                }
                            } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x15U)))) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x900U 
                                                   | (0x10ffU 
                                                      & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (0x1fbfU 
                                                   & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                = (
                                                   (0xfffU 
                                                    & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                         << 0xcU)));
                                        }
                                    }
                                }
                            } else if ((0x200000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x14U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = ((0x1c01U 
                                                & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                               | (((1U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                    ? 0U
                                                    : 1U) 
                                                  << 5U));
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                            = (0xfffU 
                                               & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    }
                                }
                            } else if ((0x100000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((0x80000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = ((0x1c01U 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                           | (((1U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                                ? 0U
                                                : 1U) 
                                              << 5U));
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0xfffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                } else {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0x800U | 
                                           (0x10ffU 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = (0x1fbfU 
                                           & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                        = ((0xfffU 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                           | (0x1000U 
                                              & ((~ 
                                                  vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                                 << 0xcU)));
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0x13U)))) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = ((0x1c01U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                                       | (((1U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])
                                            ? 0U : 1U) 
                                          << 5U));
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = (0xfffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                            = ((0x7ffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                               | ((0x1000U & ((~ vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                              << 0xcU)) 
                                  | ((0x27U == (0x7fU 
                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 7U))) 
                                     << 0xbU)));
                        vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                            = ((0x1f8fU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)) 
                               | (0x70U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]));
                        if ((0U == ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                    | (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                             >> 0x13U))))) {
                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                = (0x1e7fU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                        } else if ((5U == ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                           | (7U & 
                                              (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                               >> 0x13U))))) {
                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                = (0x80U | (0x1e7fU 
                                            & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                        } else if ((6U == ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U]) 
                                           | (7U & 
                                              (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                               >> 0x13U))))) {
                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                = (0x100U | (0x1e7fU 
                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                        }
                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = (0x400U | (0x19ffU 
                                                 & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                    = (0x4000000000ULL 
                                       | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                    = ((0x60ffffffffULL 
                                        & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                       | ((QData)((IData)(
                                                          (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                           >> 0x1bU))) 
                                          << 0x20U));
                            } else {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = (0x200U | (0x19ffU 
                                                 & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                    = (0x2000000000ULL 
                                       | (0x1fffffffffULL 
                                          & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o));
                                vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                    = ((0x7f00000000ULL 
                                        & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                       | (IData)((IData)(
                                                         ((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                           << 0x1eU) 
                                                          | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[1U] 
                                                             >> 2U)))));
                            }
                        } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                = (0x400U | (0x19ffU 
                                             & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                = (0x4000000000ULL 
                                   | vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                = ((0x60ffffffffULL 
                                    & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                   | ((QData)((IData)(
                                                      (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                       >> 0x1bU))) 
                                      << 0x20U));
                        } else {
                            vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                = (0x19ffU & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                = (0x3fffffffffULL 
                                   & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                            vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                = (0x7f00000000ULL 
                                   & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o);
                            if ((0U != (3U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                              >> 2U)))) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                    = (0x200U | (0x19ffU 
                                                 & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                if ((0U == (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = (1ULL | (0x7f00000000ULL 
                                                   & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o));
                                } else if ((5U == (7U 
                                                   & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                      >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = (2ULL | (0x7f00000000ULL 
                                                   & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o));
                                } else if ((6U == (7U 
                                                   & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                      >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                        = (4ULL | (0x7f00000000ULL 
                                                   & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o));
                                }
                            }
                            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & 
                                     vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x1bU)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x1f8fU 
                                                     & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode));
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x1bU)))) {
                                            if ((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                     >> 4U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_mode 
                                                    = 
                                                    (0x200U 
                                                     | (0x19ffU 
                                                        & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode)));
                                                if (
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                        = 
                                                        ((0x7f00000000ULL 
                                                          & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                                         | (IData)((IData)(
                                                                           (0xfU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (7U 
                                                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                                >> 4U)))))));
                                                } else if (
                                                           (5U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                        = 
                                                        ((0x7f00000000ULL 
                                                          & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                                         | (IData)((IData)(
                                                                           (0x1eU 
                                                                            & (((IData)(1U) 
                                                                                + 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                                >> 4U))) 
                                                                               << 1U)))));
                                                } else if (
                                                           (6U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                        = 
                                                        ((0x7f00000000ULL 
                                                          & vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o) 
                                                         | (IData)((IData)(
                                                                           (0x3cU 
                                                                            & (((IData)(1U) 
                                                                                + 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                                                >> 4U))) 
                                                                               << 2U)))));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 0U;
    if ((0x2000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
        if ((0x1000U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                  >> 9U)))) {
                        if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 5U;
                            }
                        }
                    }
                }
            }
        } else if ((0x800U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
            if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                            if ((7U == (7U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x13U)))) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 5U;
                            } else if ((0x40U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((4U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (2U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                        >> 1U)))) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                    }
                                } else if ((0x10U & 
                                            vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                    >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                        = 
                                                        ((0x80000U 
                                                          & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                          ? 1U
                                                          : 2U);
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                    = 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                      ? 1U
                                                      : 2U);
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                    = 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                      ? 1U
                                                      : 2U);
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                = (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                    ? 1U
                                                    : 2U);
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                    = 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                      ? 1U
                                                      : 2U);
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                            }
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                = (
                                                   (0x80000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                    ? 1U
                                                    : 2U);
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 2U;
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x80000U & 
                                         vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                }
                            } else if ((0x20U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((2U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                                if (
                                                    (0x200000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                 >> 0x13U)))) {
                                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (0x200000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                    }
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                                    = 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                      ? 1U
                                                      : 4U);
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 1U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x15U)))) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x80000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            if ((0U 
                                                 == 
                                                 (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x1bU))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                        = ((0x80000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                            ? 1U : 4U);
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                }
                            } else if ((0x10U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                            if ((0x200000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x100000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                             >> 0x13U)))) {
                                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 3U;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                                >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 3U;
                                                }
                                            } else if (
                                                       (0x100000U 
                                                        & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (0x80000U 
                                                     & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 3U;
                                                }
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 3U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 3U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 3U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U] 
                                                    >> 1U)))) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x80000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((0x100000U 
                                                 & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                            >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                }
                            } else if ((8U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                         >> 0x13U)))) {
                                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                        >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                }
                            } else if ((4U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                    if ((0x200000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                     >> 0x13U)))) {
                                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                            }
                                        }
                                    } else if ((0x100000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                            = ((0x80000U 
                                                & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                                ? 1U
                                                : 4U);
                                    }
                                } else if ((0x200000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                   >> 0x13U)))) {
                                    vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                }
                            } else if ((2U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[3U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x15U)))) {
                                    if ((0x100000U 
                                         & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                    >> 0x13U)))) {
                                            vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 4U;
                                        }
                                    }
                                }
                            } else if ((0x200000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                              >> 0x14U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                  >> 0x13U)))) {
                                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                                    }
                                }
                            } else if ((0x100000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit 
                                    = ((0x80000U & 
                                        vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])
                                        ? 1U : 4U);
                            } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                                 >> 0x13U)))) {
                                vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                         >> 0xbU)))) {
        if ((1U & (~ (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                if ((0x100U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                    if ((0x80U & vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U])) {
                        vlSelf->vproc_top__DOT__v_core__DOT__instr_unit = 0U;
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[0U] 
        = ((3U & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[0U]) 
           | ((IData)(((vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                        << 6U) | (QData)((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o)))) 
              << 2U));
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[1U] 
        = (((IData)(((vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                      << 6U) | (QData)((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o)))) 
            >> 0x1eU) | (((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                          << 0xfU) | ((IData)((((vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                                 << 6U) 
                                                | (QData)((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o))) 
                                               >> 0x20U)) 
                                      << 2U)));
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[2U] 
        = ((0xff000000U & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[2U]) 
           | (((3U & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                      >> 0x11U)) | ((IData)((((vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                                               << 6U) 
                                              | (QData)((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o))) 
                                             >> 0x20U)) 
                                    >> 0x1eU)) | (((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o) 
                                                   << 0x16U) 
                                                  | ((0x7ffcU 
                                                      & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o) 
                                                         >> 0x11U)) 
                                                     | ((IData)(
                                                                (vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                                                                 >> 0x20U)) 
                                                        << 0xfU)))));
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_invalid = 0U;
    if ((0U != (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((0U != (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))) {
            if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_invalid = 1U;
                    }
                }
            }
        }
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[2U] 
        = ((0xffffffU & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[2U]) 
           | ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
              << 0x18U));
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[3U] 
        = ((0x1ffff00U & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[3U]) 
           | (0xffffffU & ((0xffffe0U & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit) 
                                         << 5U)) | 
                           ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                            >> 8U))));
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[0U] 
        = ((0xfffffffcU & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[0U]) 
           | ((((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit)) 
                & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                      >> 0xbU))) << 1U) | ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit)) 
                                           & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                                              >> 0xbU))));
    vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o = 0U;
    if ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((0x100U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
            if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                          >> 7U)))) {
                if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
                    if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q)))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
                            = vlSelf->vproc_top__DOT__v_core__DOT__vl_q;
                    }
                } else {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
                        = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))
                            ? (1U | (0x7eU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                              << 1U)))
                            : (3U | (0x7cU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                              << 2U))));
                }
            }
        } else if ((0x80U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
            if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
                if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q)))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
                        = (0x3fU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                    >> 1U));
                }
            } else {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
                    = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))
                        ? (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q)
                        : (1U | (0x7eU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                          << 1U))));
            }
        } else if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q)))) {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
                    = (0x1fU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                >> 2U));
            }
        } else {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
                = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))
                    ? (0x3fU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                >> 1U)) : (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q));
        }
    } else {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
            = ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q)
                : (1U | (0x7eU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                                  << 1U))));
    }
    if ((1U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol))) {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o = 0U;
        if ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o = 0U;
        } else if ((1U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o = 1U;
        } else if ((2U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o = 3U;
        }
    } else if ((2U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol))) {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o 
            = (0xfU & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__vl_q) 
                       >> 3U));
    } else if ((3U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol))) {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o = 0x7fU;
    }
    vproc_top__DOT__v_core__DOT____Vcellout__dec__vsew_o = 0U;
    if ((0U != (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vsew_o 
                = vlSelf->vproc_top__DOT__v_core__DOT__vsew_q;
        } else if ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vsew_o = 1U;
        } else if ((1U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__vsew_o = 2U;
        }
    }
    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
    if ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((0x100U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
            if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                          >> 7U)))) {
                if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
                    if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q)))) {
                        if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                            if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                            } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                            }
                        } else {
                            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                                = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                    ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                        ? 3U : 2U) : 
                                   ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                     ? 1U : 0U));
                        }
                    }
                } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
                    if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                        } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                        }
                    } else if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q)))) {
                            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 3U;
                        }
                    } else {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                            = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                ? 2U : 1U);
                    }
                } else if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                            = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                ? 1U : 0U);
                    } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q) 
                                     >> 1U)))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                        = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                            ? 3U : 2U);
                }
            }
        } else if ((0x80U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
            if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
                if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q)))) {
                    if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                        } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                        }
                    } else {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                            = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                    ? 2U : 1U) : 0U);
                    }
                }
            } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
                if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                    } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                    }
                } else {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                        = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                            ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                ? 3U : 2U) : ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                               ? 1U
                                               : 0U));
                }
            } else if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                }
            } else if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q)))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 3U;
                }
            } else {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                    = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                        ? 2U : 1U);
            }
        } else if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q)))) {
                if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                    } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                    }
                } else {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                        = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                            ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                ? 1U : 0U) : 0U);
                }
            }
        } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__vsew_q))) {
            if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                    vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
                }
            } else {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                    = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                        ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                            ? 2U : 1U) : 0U);
            }
        } else if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
            if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
            } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
            }
        } else {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                    ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                        ? 3U : 2U) : ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                       ? 1U : 0U));
        }
    } else if ((0U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))) {
        if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
            if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
            } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
                vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
            }
        } else {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
                = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                    ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                        ? 3U : 2U) : ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                                       ? 1U : 0U));
        }
    } else if ((4U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
        if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
        } else if ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
        }
    } else if ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))) {
        if ((1U & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q)))) {
            vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 3U;
        }
    } else {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
            = ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__lmul_q))
                ? 2U : 1U);
    }
    if (vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul_override) {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o 
            = vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__emul;
    }
    if ((1U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol))) {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
    } else if ((2U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__evl_pol))) {
        vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o = 0U;
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[3U] 
        = ((0x1ff80ffU & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[3U]) 
           | (0x1ffffffU & ((IData)(vproc_top__DOT__v_core__DOT____Vcellout__dec__vl_o) 
                            << 8U)));
    vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[3U] 
        = ((0xffffU & vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[3U]) 
           | (0x1ff0000U & ((0x1c00000U & (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                           << 0x14U)) 
                            | (((IData)(vproc_top__DOT__v_core__DOT____Vcellout__dec__vsew_o) 
                                << 0x14U) | (((IData)(vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o) 
                                              << 0x12U) 
                                             | ((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__vxrm_o) 
                                                << 0x10U))))));
    __Vtableidx7 = vproc_top__DOT__v_core__DOT____Vcellout__dec__emul_o;
    vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask 
        = Vvproc_top__ConstPool__TABLE_544b3534_0[__Vtableidx7];
    vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask_narrow 
        = Vvproc_top__ConstPool__TABLE_55f8016b_0[__Vtableidx7];
    vlSelf->vproc_top__DOT__v_core__DOT__source_xreg_valid 
        = (1U & (((~ (vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[2U] 
                      >> 0x14U)) | vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U]) 
                 & ((~ (vlSelf->vproc_top__DOT__v_core__DOT__dec_data_d[1U] 
                        >> 0xdU)) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[0U] 
                                     >> 1U))));
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs2_invalid 
        = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
            ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 5U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                      >> 0x1bU)) & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask)))
                : (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 5U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                      >> 0x1bU)) & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask))))
            : ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 5U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                      >> 0x1bU)) & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask_narrow)))
                : (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 5U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                      >> 0x1bU)) & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask)))));
    if ((4U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
                if ((0x200U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs2_invalid = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
                                     >> 8U)))) {
                    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs2_invalid = 0U;
                }
            } else {
                vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs2_invalid = 0U;
            }
        }
    }
    if ((1U & (~ (IData)((vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs2_o 
                          >> 0x26U))))) {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs2_invalid = 0U;
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vd_invalid 
        = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
            ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0x12U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                         >> 0xeU)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask_narrow)))
                : (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0x12U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                         >> 0xeU)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask))))
            : ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0x12U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                         >> 0xeU)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask)))
                : (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0x12U) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                         >> 0xeU)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask)))));
    if (((1U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit)) 
         & ((IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode) 
            >> 0xcU))) {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vd_invalid = 0U;
    }
    if ((4U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((0x800U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vd_invalid = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rd_o) 
                  >> 5U)))) {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vd_invalid = 0U;
    }
    vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs1_invalid 
        = ((2U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
            ? ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0xaU) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                        >> 0x16U)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask)))
                : (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0xaU) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                        >> 0x16U)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask_narrow))))
            : ((1U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__widenarrow_o))
                ? (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0xaU) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                        >> 0x16U)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask_narrow)))
                : (0U != (((vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                            << 0xaU) | (vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_req[2U] 
                                        >> 0x16U)) 
                          & (IData)(vproc_top__DOT__v_core__DOT__dec__DOT__regaddr_mask)))));
    if ((4U == (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_unit))) {
        if ((0x800U & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__instr_mode))) {
            vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs1_invalid = 0U;
        }
    }
    if ((1U & (~ (IData)((vlSelf->vproc_top__DOT__v_core__DOT____Vcellout__dec__rs1_o 
                          >> 0x26U))))) {
        vlSelf->vproc_top__DOT__v_core__DOT__dec__DOT__vs1_invalid = 0U;
    }
    vlSymsp->TOP__vproc_top__DOT__vcore_xif.issue_ready 
        = (((IData)(vlSelf->vproc_top__DOT__v_core__DOT__dec_ready) 
            & (~ (IData)(vlSelf->vproc_top__DOT__v_core__DOT__issue_id_used))) 
           & (IData)(vlSelf->vproc_top__DOT__v_core__DOT__source_xreg_valid));
}
