HIPCC = hipcc
HIPCC_FLAGS = -O2 -std=c++17

TARGET = distance_to_origin
SRC = distance_to_origin.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(HIPCC) $(HIPCC_FLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
