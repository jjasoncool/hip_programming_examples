BIN_DIR = bin

all: $(BIN_DIR)/main

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/main: main.cpp | $(BIN_DIR)
	hipcc $< -o $@ \
		-I/opt/rocm-5.4.2/roctracer/include \
		-lroctx64 \
		-L/opt/rocm-5.4.2/roctracer/lib

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
