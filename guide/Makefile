FLAGS = -march=rv32imv -mabi=ilp32 
CC = riscv32-unknown-elf-gcc
AS = riscv32-unknown-elf-as

SRC ?= vle32_32.s
SRC_BASENAME = $(basename $(SRC))

OUT ?= $(SRC_BASENAME).o
ELF ?= $(SRC_BASENAME).elf
RISCV_PATH ?= /opt/riscv32
VICUNA_PATH ?= ~/vicuna-build/vicuna
VICUNA_PROJ_PATH ?= ~/Nikhil/ElectronicsDev/RISC-V/Vicuna/tests/
PROJ ?=  
ifneq ($(PROJ),)
	FULL_PROJ_DIR = $(VICUNA_PROJ_PATH)$(PROJ)
endif

CORE ?= ibex
VPROC_CONFIG ?= triple
VPORT_POLICY ?= some
VREG_W ?= 128
VMEM_W ?= 32
TARGET_TECH = fpga	
BOARD ?= nexysvideo

default: 
	@echo "Run 'make help' to see available targets."

help:
	@echo "Available targets:\n"
	@echo "\tmake help \t\t- Show this help message"
	@echo "\tmake <file>.o \t\t- Compile a .c or .s file into an object file"
	@echo "\tmake run-spike \t\t- Run the program on the Spike simulator"
	@echo "\tmake dism-obj \t\t- Disassemble the output object file"
	@echo "\tmake dism-elf \t\t- Disassemble the output elf file"
	@echo "\tmake dism-elf-file \t- Disassemble the output elf file and write to a file"
	@echo "\tmake dism-obj-file \t- Disassemble the output object file and write to a file"
	@echo "\tmake run-vicuna \t- Compile SRC file into the obj, elf and vmem file to use it on Vicuna"
	@echo "\tmake sim-vicuna \t- Simulate the PROJ on Vicuna using verilator"
	@echo "\tmake synth-vicuna \t- Synthesize the design using vicuna from vmem file"
	@echo "\tmake clean \t\t- Remove generated object files"
	@echo "\tmake clean-obj \t\t- Remove generated object files"
	@echo "\tmake clean-vicuna-run \t- Remove generated files for Vicuna run"
	@echo "\tmake clean-sim \t\t- Remove generated files for Vicuna simulation"
	@echo "\tmake clean-synth \t- Remove generated files for Vicuna synthesis"

%.o:%.c
	$(CC) -v $(FLAGS) -o $(OUT) $(SRC)

%.elf:%.c
	$(CC) -v $(FLAGS) -o $(ELF) $(SRC)

%.o:%.s
	$(AS) $(FLAGS) -o $(OUT) $(SRC)

set-src:
	SRC=$(SRC) && \
	echo "SRC set to: $$SRC" 

run-spike:
	spike --isa=rv32imv -d $(RISCV_PATH)/riscv32-unknown-elf/bin/pk ./$(OUT)

run-spike-elf:
	spike --isa=rv32imv -d $(RISCV_PATH)/riscv32-unknown-elf/bin/pk ./$(ELF)

run-spike-elf-log:
	spike -l --isa=rv32imv $(RISCV_PATH)/riscv32-unknown-elf/bin/pk ./$(ELF) 2> spike_elf_log.log

dism-obj:
	riscv32-unknown-elf-objdump -d $(OUT)

dism-elf:
	riscv32-unknown-elf-objdump -d $(ELF)

dism-elf-file:
	riscv32-unknown-elf-objdump -d $(ELF) > $(SRC_BASENAME)_elf_dism.txt && code $(SRC_BASENAME)_elf_dism.txt

dism-obj-file:
	riscv32-unknown-elf-objdump -d $(OUT) > $(SRC_BASENAME)_obj_dism.txt && code $(SRC_BASENAME)_obj_dism.txt

check_proj_dir:
	@if [ -z "$(PROJ)" ]; then \
		echo "[empty PROJ] Please set PROJ to the project directory!"; \
		exit 1; \
	fi
	
run-vicuna:
	@$(MAKE) check_proj_dir
	make -f $(VICUNA_PATH)/sw/Makefile PROG=$(SRC_BASENAME) OBJ=$(OUT)\
		VPROC_CONFIG=$(VPROC_CONFIG) VPORT_POLICY=$(VPORT_POLICY) \
		VREG_W=$(VREG_W) VMEM_W=$(VMEM_W) TARGET_TECH=$(TARGET_TECH) \
		PROJ_DIR=$(FULL_PROJ_DIR) CORE=$(CORE)

sim-vicuna:
	@$(MAKE) check_proj_dir
	@mkdir -p $(FULL_PROJ_DIR)/sim
	echo "$(SRC_BASENAME).vmem" > progs.txt
	make -f $(VICUNA_PATH)/sim/Makefile PROGS_PATH=progs.txt \
		VPROC_CONFIG=$(VPROC_CONFIG) VPORT_POLICY=$(VPORT_POLICY) \
		VREG_W=$(VREG_W) VMEM_W=$(VMEM_W) TARGET_TECH=$(TARGET_TECH) \
		PROJ_DIR=$(FULL_PROJ_DIR)/sim CORE=$(CORE)

synth-vicuna:
	@$(MAKE) check_proj_dir
	@mkdir -p $(FULL_PROJ_DIR)/synth
	cd $(VICUNA_PATH)/demo && \
	make RAM_FILE=$(FULL_PROJ_DIR)/$(SRC_BASENAME).vmem BOARD=$(BOARD)\
		VPROC_CONFIG=$(VPROC_CONFIG) VPORT_POLICY=$(VPORT_POLICY) \
		VREG_W=$(VREG_W) VMEM_W=$(VMEM_W) TARGET_TECH=$(TARGET_TECH) \
		PROJ_DIR=$(FULL_PROJ_DIR)/synth CORE=$(CORE)
	cp $(VICUNA_PROJ_PATH)/demo_tb_behav.wcfg $(FULL_PROJ_DIR)/synth/vicuna_demo
clean-obj:check_proj_dir
	rm -f $(OUT)

clean-vicuna-run: check_proj_dir
	rm -f $(SRC_BASENAME).o  $(SRC_BASENAME).elf $(SRC_BASENAME).vmem 

clean-sim: check_proj_dir
	rm -rf $(FULL_PROJ_DIR)/sim/*

clean-synth: check_proj_dir
	rm -rf $(FULL_PROJ_DIR)/synth/*

tmp_debug:
	@echo "FLAGS: $(FLAGS)"
	@echo "SRC: $(SRC)"
	@echo "SRC_BASENAME: $(SRC_BASENAME)"
	@echo "OUT: $(OUT)"
	@echo "RISCV_PATH: $(RISCV_PATH)"
	@echo "VICUNA_PATH: $(VICUNA_PATH)"
	@echo "VICUNA_PROJ_PATH: $(VICUNA_PATH)"
	@echo "PROJ: $(PROJ)"
	@echo "FULL_PROJ_DIR: $(FULL_PROJ_DIR)"
	@echo "VPROC_CONFIG: $(VPROC_CONFIG)"
	@echo "VPORT_POLICY: $(VPORT_POLICY)"
	@echo "VREG_W: $(VREG_W)"
	@echo "VMEM_W: $(VMEM_W)"
	@echo "TARGET_TECH: $(TARGET_TECH)"	
