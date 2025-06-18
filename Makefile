PROJ ?= 
ABS_PROJ := $(abspath $(PROJ))
WITH_SRC ?= $(PROJ).c
VICUNA_MAKEFILE := $(abspath guide/Makefile)
SRC_TXT_TO_REPLACE := /src/file/name
PROJ_TXT_TO_REPLACE := /project/name


.PHONY: default create-vicuna-test-proj check_proj_dir
default: check_proj_dir create-vicuna-test-proj

check_proj_dir:
	if [ -z "$(PROJ)" ]; then \
		echo "Please set the PROJ variable to the project directory."; \
		exit 1; \
	fi
	if [ -z "$(ABS_PROJ)" ]; then \
		echo "Failed to compute the absolute path for the project directory."; \
		exit 1; \
	fi
	if [ -d "$(ABS_PROJ)" ]; then \
		echo "Project directory $(ABS_PROJ) already exists. Please choose a different name or remove the existing directory."; \
		exit 1; \
	fi

create-vicuna-test-proj: 
	@$(MAKE) check_proj_dir
	@echo "Creating Vicuna test project in $(PROJ)..."
	mkdir -p $(ABS_PROJ)
	# cp $(VICUNA_MAKEFILE) $(ABS_PROJ) 
	@echo "Vicuna test project created in $(ABS_PROJ)."
	sed "s|$(SRC_TXT_TO_REPLACE)|$(WITH_SRC)|g" $(VICUNA_MAKEFILE) > $(ABS_PROJ)/Makefile.tmp
	sed "s|$(PROJ_TXT_TO_REPLACE)|$(ABS_PROJ)|g" $(ABS_PROJ)/Makefile.tmp > $(ABS_PROJ)/Makefile
	rm -f $(ABS_PROJ)/Makefile.tmp
	touch $(ABS_PROJ)/$(WITH_SRC)
	@echo "Opening the project in VS Code..."
	code $(ABS_PROJ) || echo "VS Code is not installed or not found in PATH. Please open the project manually."

tmp_debug:
	@echo "Running temporary debug command..."
	@echo "This is a placeholder for debugging purposes."
	@echo "VICUNA_MAKEFILE : $(VICUNA_MAKEFILE)"
	@echo "PROJ : $(PROJ)"
	@echo "ABS_PROJ : $(ABS_PROJ)"
	@echo "WITH_SRC : $(WITH_SRC)"
	@echo "SRC_TXT_TO_REPLACE : $(SRC_TXT_TO_REPLACE)"
	@echo "PROJ_TXT_TO_REPLACE : $(PROJ_TXT_TO_REPLACE)"
