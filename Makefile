
EXE = main

IN = $(wildcard tests/*-input.txt)
ACT = $(IN:-input.txt=-actual.txt)
PASS = $(IN:-input.txt=.passed)

all: test

clean:
	@echo "Cleaning up..."
	@rm -f $(PASS)
	rm -f $(ACT) $(EXE)

test: $(PASS)
	@echo "All tests passed"

$(PASS): %.passed: %-input.txt %-expected.txt $(EXE)
	@echo "Running test $*..."
	@rm -f $@
	./$(EXE) < $< > $*-actual.txt 2>&1
	diff $*-actual.txt $*-expected.txt
	@touch $@

$(EXE): *.c *.h
	$(CC) *.c -o $@
