CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=challenge02
TEST_TARGET=test_challenge02

all: $(TARGET)

$(TARGET): challenge02.c
	$(CC) $(CFLAGS) -o $(TARGET) challenge02.c

test: challenge02.c test_challenge02.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) challenge02.c test_challenge02.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
