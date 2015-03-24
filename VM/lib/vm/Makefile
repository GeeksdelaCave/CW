##
## Makefile for lib_vm in /home/mongep/rendu/CPE/CW/VM/lib/vm
## 
## Made by Monge Pierre
## Login   <mongep@epitech.net>
## 
## Started on  Mon Mar 16 11:16:10 2015 Monge Pierre
## Last update Tue Mar 24 18:03:53 2015 johann gangai
##

SRC	=	my_getnbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_strcat.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_printf.c	\
		printf_opt_1.c	\
		printf_opt_2.c	\
		printf_opt_3.c	\
		my_strdup.c	\
		cerr.c		\
		my_putstr.c	\
		my_revstr.c

OBJ	=	$(addprefix src/, $(SRC:.c=.o))

NAME	=	libcorewar_vm.a

CCLIB	=	ar rc

RANLIB	=	ranlib

RM	=	rm -f

CFLAGS	=	-I./includes/

$(NAME):	$(OBJ)
		$(CCLIB) $(NAME) $(OBJ)
		$(RANLIB) $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(DIR_LIB)$(NAME)
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
