CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=challenge03
TEST_TARGET=test_challenge03

all: $(TARGET)

$(TARGET): challenge03.c
	$(CC) $(CFLAGS) -o $(TARGET) challenge03.c

test: challenge03.c test_challenge03.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) challenge03.c test_challenge03.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
