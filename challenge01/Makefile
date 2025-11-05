CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=challenge
TEST_TARGET=test

all: $(TARGET)

$(TARGET): challenge.c
	$(CC) $(CFLAGS) -o $(TARGET) challenge.c

test: challenge.c test.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) challenge.c test.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
