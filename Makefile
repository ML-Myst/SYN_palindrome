##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make binary
##

CFLAGS	=	-I./include/

SRCDIR	=	src/

SRC		=	${SRCDIR}palindrome.c	\
			${SRCDIR}p_n_option.c	\
			${SRCDIR}flag.c			\
			${SRCDIR}base_converter.c	\
			${SRCDIR}base_addition.c

OBJ		=	$(SRC:.c=.o)

NAME	=	palindrome

LDFLAGS =	-L./lib/ -lmy

MKLIB	=	make -C lib/

RM 	=	rm -f

RMLIB	=	rm -f lib/libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MKLIB)
	clang -o $(NAME) $(OBJ) $(LDFLAGS)

debug:	$(OBJ)
	$(MKLIB)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) -g

clean:
	$(RM) $(OBJ)
	$(RM) lib/*.o

fclean: clean
	$(RM) $(NAME)
	$(RMLIB)

re:	fclean all
