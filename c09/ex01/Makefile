
CC = cc
CFLAGS = -Wextra -Werror -Wall

NAME = libft.a

SRC_DIR := srcs
INC_DIR = includes

DEPS = $(INC_DIR)/ft.h
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c $(DEPS)
	$(CC) -c $< -o $@ $(CFLAGS) -I$(INC_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
