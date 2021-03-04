##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRCC = ./src/

SRC	=	$(SRCC)104intersection.c	\
		$(SRCC)calc.c 	\
		$(SRCC)init.c	\
		$(SRCC)main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -lm

NAME	=	104intersection

all:	$(NAME)

$(NAME):	 $(OBJ)
	gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	clean all
