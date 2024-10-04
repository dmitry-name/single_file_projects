.PHONY: all run clean

CC = gcc
CFLAGS = -Wall -std=c99
SRC = src
TARGET = run.exe

all: $(TARGET)

$(TARGET): $(SRC)/main.c
	@echo "Building $(@F)"
	@$(CC) $(CFLAGS) $< -o $@

run:
	@./$(TARGET)

clean: 
	@del .\$(TARGET)