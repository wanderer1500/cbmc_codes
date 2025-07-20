CBMC=cbmc

all: pointer_check loop_unwind array_bounds all_checks

pointer_check:
	@echo "🔍 Verifying pointer_check.c"
	$(CBMC) pointer_check.c --pointer-check --trace

loop_unwind:
	@echo "🔍 Verifying loop_unwind.c"
	$(CBMC) loop_unwind.c --unwind 5 --trace

array_bounds:
	@echo "🔍 Verifying array_bounds.c"
	$(CBMC) array_bounds.c --bounds-check --trace

all_checks:
	@echo "🔍 Verifying all_checks.c"
	$(CBMC) all_checks.c --bounds-check --pointer-check --unwind 3 --trace

clean:
	@echo "🧹 Cleaning temporary files (none needed for CBMC)"

help:
	@echo "🛠️  Targets available:"
	@echo "    make             - Run all checks"
	@echo "    make pointer_check"
	@echo "    make loop_unwind"
	@echo "    make array_bounds"
	@echo "    make all_checks"
	@echo "    make clean"
