# Makefile

NAME = sokoban

SRCS = main.c \
	grid.c \
	win.c \
	linked_tab_functions.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

