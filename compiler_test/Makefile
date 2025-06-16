FLAGS = -march=rv32imv -mabi=ilp32 
CC = riscv32-unknown-elf-gcc
AS = riscv32-unknown-elf-as

SRC ?= compiler_test.c
SRC_BASENAME = $(basename $(SRC))

OUT ?= $(SRC_BASENAME).o
RISCV_PATH ?= /opt/riscv32
VICUNA_PATH ?= /home/nikhil/vicuna-build/vicuna
VICUNA_PROJ_PATH ?= /home/nikhil/Nikhil/ElectronicsDev/RISC-V/Vicuna/tests/
PROJ ?=  

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
	@echo "\tmake dism \t\t- Disassemble the output object file"
	@echo "\tmake run-vicuna \t- Run the Vicuna software flow"
	@echo "\tmake synth-vicuna \t- Synthesize the design using vicuna"
	@echo "\tmake clean \t\t- Remove generated object files"

%.o:%.c
	$(CC) -v $(FLAGS) -o $(OUT) $(SRC)

%.o:%.s
	$(AS) $(FLAGS) -o $(OUT) $(SRC)


run-spike:
	spike --isa=rv32imv $(RISCV_PATH)/riscv32-unknown-elf/bin/pk ./$(OUT)

dism:
	riscv32-unknown-elf-objdump -d $(OUT)

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
		PROJ_DIR=$(VICUNA_PROJ_PATH)$(PROJ) CORE=$(CORE)

sim-vicuna:
	@$(MAKE) check_proj_dir
	@mkdir -p $(VICUNA_PROJ_PATH)$(PROJ)/sim
	echo "$(SRC_BASENAME).vmem" > progs.txt
	make -f $(VICUNA_PATH)/sim/Makefile PROGS_PATH=progs.txt \
		VPROC_CONFIG=$(VPROC_CONFIG) VPORT_POLICY=$(VPORT_POLICY) \
		VREG_W=$(VREG_W) VMEM_W=$(VMEM_W) TARGET_TECH=$(TARGET_TECH) \
		PROJ_DIR=$(VICUNA_PROJ_PATH)$(PROJ)/sim CORE=$(CORE)

synth-vicuna:
	@$(MAKE) check_proj_dir
	@mkdir -p $(VICUNA_PROJ_PATH)$(PROJ)/synth
	cd $(VICUNA_PATH)/demo && \
	make RAM_FILE=$(VICUNA_PROJ_PATH)$(PROJ)/$(SRC_BASENAME).vmem BOARD=$(BOARD)\
		VPROC_CONFIG=$(VPROC_CONFIG) VPORT_POLICY=$(VPORT_POLICY) \
		VREG_W=$(VREG_W) VMEM_W=$(VMEM_W) TARGET_TECH=$(TARGET_TECH) \
		PROJ_DIR=$(VICUNA_PROJ_PATH)$(PROJ)/synth CORE=$(CORE)

clean:
	rm -f $(OUT)

tmp_debug:
	@echo "FLAGS: $(FLAGS)"
	@echo "SRC: $(SRC)"
	@echo "SRC_BASENAME: $(SRC_BASENAME)"
	@echo "OUT: $(OUT)"
	@echo "RISCV_PATH: $(RISCV_PATH)"
	@echo "VICUNA_PATH: $(VICUNA_PATH)"
	@echo "VICUNA_PROJ_PATH: $(VICUNA_PATH)"
	@echo "PROJ: $(PROJ)"
	@echo "FULL_PROJ_DIR: $(VICUNA_PROJ_PATH)$(PROJ)"
	@echo "VPROC_CONFIG: $(VPROC_CONFIG)"
	@echo "VPORT_POLICY: $(VPORT_POLICY)"
	@echo "VREG_W: $(VREG_W)"
	@echo "VMEM_W: $(VMEM_W)"
	@echo "TARGET_TECH: $(TARGET_TECH)"	
