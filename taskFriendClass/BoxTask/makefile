GXX = g++
TARGET = box.o
SRC = src/main.cpp src/box.cpp
INCLUDE = -Iinclude

$(TARGET):
	$(GXX) -o $(TARGET) $(SRC) $(INCLUDE)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)