##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Compile
##


RM	=	rm -f
SRC	=	my_convert_num.c	\
		my_put_nbr.c	\
		my_putstr.c		\
		my_strlen.c		\
		my_printf.c		\
		my_putchar.c	\
		my_revstr.c		\
		my_strcpy.c		\
		my_str_to_word_array.c	\
		my_getnbr.c		\
		my_strcmp.c		\
		my_int_to_str.c	\
		my_strdup.c
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

CFLAGS  = -g

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
