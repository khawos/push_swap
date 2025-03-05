NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = check_error.c ft_atol.c ft_strlen.c instructions2.c push.c rotate.c \
      stack_utils.c ft_split.c init.c instructions3.c sort.c swap.c \
      clear_stack.c ft_strcmp.c instructions1.c main.c radix.c \
      sort_3_number.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

