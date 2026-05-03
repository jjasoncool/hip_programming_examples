HIPCC = hipcc
HIPCC_FLAGS = -O2 -std=c++17

BIN_DIR = bin
TARGET = $(BIN_DIR)/distance_to_origin
SRC = distance_to_origin.cpp

all: $(TARGET)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(TARGET): $(SRC) | $(BIN_DIR)
	$(HIPCC) $(HIPCC_FLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BIN_DIR)

.PHONY: all run clean
