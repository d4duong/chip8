# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -std=c99 `sdl2-config --cflags`
LDFLAGS = `sdl2-config --libs`

TARGET = chip8_emulator

SRCS = main.c

OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Compiling
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean