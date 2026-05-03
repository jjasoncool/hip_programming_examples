BIN_DIR = bin

all: $(BIN_DIR)/main

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/main: main.c | $(BIN_DIR)
	mpicc -o $@ $<

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
