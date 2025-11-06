CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=calc
SRCS=starter.c suma.c resta.c multiplicacion.c division.c
OBJS=$(SRCS:.c=.o)
TEST=test_challenge04

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

TEST_SRCS = suma.c resta.c multiplicacion.c division.c test_challenge04.c

test: $(TEST_SRCS) 
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_SRCS)
	./$(TEST)
