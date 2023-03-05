##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	lib/my/my_get_nbr.c		\
	lib/my/my_strlen.c		\
	lib/my/my_strncpy.c		\
	lib/my/my_str_to_word_array.c	\
	lib/my/my_putstr.c		\
	lib/my/my_linecount.c		\
	lib/my/isnumber.c		\
	lib/my/my_calloc.c

SRC2	=	main.c				\
		src/my_map_creator.c		\
		src/my_map_printer.c		\
		src/my_square_modifier.c	\
		\
		src/my_board_generator.c	\
		src/my_square_modifier2.c	\
		src/my_map_printer2.c		\
		src/my_error_check.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsqlib.a

CFLAGS	=	-Wall -Werror -Wextra -g

all:	$(NAME)


$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o bsq $(CFLAGS) $(SRC2) bsqlib.a
	rm $(OBJ)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)
	rm -f bsq

re:	fclean all

.PHONY:	all clean fclean re
