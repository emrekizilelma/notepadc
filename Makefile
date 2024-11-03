CC = gcc
INCLUDE = include
CFLAGS = -Wall -Wextra -std=c17 -g
SRCS = $(wildcard src/*.c)
TARGET = app

all:
	$(CC) $(SRCS) -o $(TARGET) -I $(INCLUDE) $(CFLAGS)
	./$(TARGET)


compile:
	$(CC) $(SRCS) -o $(OUT) -I $(INCLUDE) $(CFLAGS)

run:
	./$(TARGET)

clean:
	rm -rf $(TARGET)