HIPCC = hipcc
HIPCC_FLAGS = -O2 -std=c++17

TARGET = hello
SRC = hello.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(HIPCC) $(HIPCC_FLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
