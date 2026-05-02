HIPCC = hipcc
HIPCC_FLAGS = -O2 -std=c++17

TARGET = matrix_multiplication
SRC = matrix_multiplication.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(HIPCC) $(HIPCC_FLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
