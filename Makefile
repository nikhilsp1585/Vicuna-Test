PROJ ?= 
VICUNA_MAKEFILE = /home/nikhil/Nikhil/ElectronicsDev/RISC-V/Vicuna/tests/guide/Makefile

.PHONY: create-vicuna-test-proj check_proj_dir
defualt: create-vicuna-test-proj

check_proj_dir:
	if [ -z "$(PROJ)" ]; then \
		echo "Please set the PROJ variable to the project directory."; \
		exit 1; \
	fi

create-vicuna-test-proj: check_proj_dir
	@echo "Creating Vicuna test project in $(PROJ)..."
	mkdir -p $(PROJ)
	cp $(VICUNA_MAKEFILE) $(PROJ) 
	@echo "Vicuna test project created in $(PROJ)."
	@echo "Opening the project in VS Code..."
	code $(PROJ) || echo "VS Code is not installed or not found in PATH. Please open the project manually."
