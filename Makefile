# Makefile

NAME = sokoban

SRCS = main.c \
	grid.c \

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

