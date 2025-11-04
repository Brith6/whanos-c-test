CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=compiled-app

all: $(TARGET)

$(TARGET): app/main.c
	$(CC) $(CFLAGS) -o $(TARGET) app/main.c

clean:
	rm -f $(TARGET)