CC ?= gcc
CFLAGS ?= -Wall -Wextra -Werror
TEST_BIN := test_challenge05
OBJS := starter.o test_challenge05.o

.PHONY: all test clean

all: $(TEST_BIN)

$(TEST_BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

starter.o: starter.c
	$(CC) $(CFLAGS) -c -o $@ $<

test_challenge05.o: test_challenge05.c
	$(CC) $(CFLAGS) -c -o $@ $<

test: $(TEST_BIN)
	./run_tests.sh

clean:
	rm -f $(TEST_BIN) $(OBJS)