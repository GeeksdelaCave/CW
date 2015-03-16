##
## Makefile for vm in /home/mongep/rendu/CPE/CW/VM
## 
## Made by Monge Pierre
## Login   <mongep@epitech.net>
## 
## Started on  Mon Mar 16 11:08:27 2015 Monge Pierre
## Last update Mon Mar 16 16:46:06 2015 Monge Pierre
##

SRC	= init/vm_main.c		\
	  init/vm_struct_init.c		\
	  instructions/vm_live.c	\
	  instructions/vm_ld.c		\
	  instructions/vm_st.c		\
	  instructions/vm_add.c		\
	  instructions/vm_sub.c		\
	  instructions/vm_and.c		\
	  instructions/vm_or.c		\
	  instructions/vm_xor.c		\
	  instructions/vm_zjmp.c	\
	  instructions/vm_ldi.c		\
	  instructions/vm_sti.c		\
	  instructions/vm_fork.c	\
	  instructions/vm_lld.c		\
	  instructions/vm_lldi.c	\
	  instructions/vm_lfork.c	\
	  instructions/vm_aff.c		\
	  error/vm_error_exit.c		\

OBJ	= $(SRC:.c=.o)

NAME	= corewar

LIBS	= -L./../lib/ -lcorewar_vm

LDFLAGS	= $(LIBS)

FLAGS	= -W -Wall -ansi -pedantic

INCLUDE	= -I./../include/

CFLAGS	= $(INCLUDE) $(FLAGS)

RM	= rm -f

CC	= gcc

MV	= mv

DIR	= ../

$(NAME): $(OBJ)
	 $(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	 $(MV) $(NAME) $(DIR)

all: 	 $(NAME)

clean:
	 $(RM) $(OBJ)

fclean: clean
	 $(RM) $(DIR)$(NAME)

re: fclean all

.PHONY: $(NAME) all clean fclean re
