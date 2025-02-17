# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable name
TARGET = main

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Build the target executable
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files into object files
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
    rm -f $(TARGET) $(OBJS)

# Run the program
run: $(TARGET)
    ./$(TARGET)

# Phony targets
.PHONY: all clean run
