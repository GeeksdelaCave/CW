##
## Makefile for make asm in /home/lafon_l/rendu/CW/ASM
## 
## Made by leo lzfon
## Login   <lafon_l@epitech.net>
## 
## Started on  Thu Mar 19 11:18:20 2015 leo lzfon
## Last update Thu Mar 19 22:33:50 2015 Florian Huet
##

CC		= cc

RM		= rm -f

NAME		= asm

SRC		= asm.c \
		  generic.c \
		  error.c

OBJ		= $(SRC:.c=.o)

CFLAGS		= -g -I./include/ -W -Wall -Wextra

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
