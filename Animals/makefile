#This makefile is complete.

BIN = bin
SRC = source
EXE = makeAnimals
OBJ = objects

help:
	@echo "To create executable: make $(EXE)"
	@echo "To create and run executable: make run"
	@echo "To remove *.o and $(EXE) files: make clean"

makeAnimals:
	(cd $(SRC) && make ../$(BIN)/$(EXE))

run:
	(cd $(SRC) && make ../$(BIN)/$(EXE))
	(cd $(BIN) && $(EXE))

clean:
	(cd $(BIN) && rm -f $(EXE))
	(cd $(OBJ) && rm -f *.o)
