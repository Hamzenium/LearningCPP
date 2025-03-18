# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++20 -Wall -pthread

# Target executable
TARGET = hellothread

# Source files
SRC = Udemy/module0.cpp

# Build the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up
clean:
	rm -f $(TARGET)
