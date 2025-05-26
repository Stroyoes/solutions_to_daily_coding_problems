# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Target executable
TARGET = test

# Source and object files
SRCS = test.c sum_of_evens.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking the target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	@echo "Compiled successfully! 🎉"

# Compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)
	@echo "Removed the compiled files! 🚽"
