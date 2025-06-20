#!/usr/bin/env bash
# ****************************************************************************
# Vivado (TM) v2024.1 (64-bit)
#
# Filename    : elaborate.sh
# Simulator   : AMD Vivado Simulator
# Description : Script for elaborating the compiled design
#
# Generated by Vivado on Sat Jun 14 23:43:12 IST 2025
# SW Build 5076996 on Wed May 22 18:36:09 MDT 2024
#
# Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
# Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
#
# usage: elaborate.sh
#
# ****************************************************************************
set -Eeuo pipefail
# elaborate design
echo "xelab --incr --debug typical --relax --mt 8 -d "MAIN_CORE_IBEX=" -generic_top "RAM_FPATH="/home/nikhil/Nikhil/ElectronicsDev/RISC-V/Vicuna/tests/compiler_test/compiler_test.vmem"" -generic_top "DIFF_CLK=0" -generic_top "SYSCLK_PER=10.0" -L xil_defaultlib -L uvm -L unisims_ver -L unimacro_ver -L secureip --snapshot demo_tb_behav xil_defaultlib.demo_tb xil_defaultlib.glbl -log elaborate.log"
xelab --incr --debug typical --relax --mt 8 -d "MAIN_CORE_IBEX=" -generic_top "RAM_FPATH="/home/nikhil/Nikhil/ElectronicsDev/RISC-V/Vicuna/tests/compiler_test/compiler_test.vmem"" -generic_top "DIFF_CLK=0" -generic_top "SYSCLK_PER=10.0" -L xil_defaultlib -L uvm -L unisims_ver -L unimacro_ver -L secureip --snapshot demo_tb_behav xil_defaultlib.demo_tb xil_defaultlib.glbl -log elaborate.log

