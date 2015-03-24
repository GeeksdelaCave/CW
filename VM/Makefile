##
## Makefile for vm in /home/mongep/rendu/CPE/CW/VM
## 
## Made by Monge Pierre
## Login   <mongep@epitech.net>
## 
## Started on  Mon Mar 16 11:08:27 2015 Monge Pierre
## Last update Mon Mar 23 11:40:57 2015 johann gangai
##

SRC_INI	= 	vm_main.c		\
	  	vm_struct_init.c	\
	  	vm_create_champ.c

SRC_INS = 	vm_live.c	\
	  	vm_ld.c		\
	  	vm_st.c		\
	  	vm_add.c	\
	  	vm_sub.c	\
	  	vm_and.c	\
	  	vm_or.c		\
	  	vm_xor.c	\
	  	vm_zjmp.c	\
	  	vm_ldi.c	\
	  	vm_sti.c	\
	  	vm_fork.c	\
	  	vm_lld.c	\
	  	vm_lldi.c	\
	  	vm_lfork.c	\
	  	vm_aff.c

SRC_ERR = 	vm_error_exit.c

SRC_CON = 	vm_convert.c

SRC_ACT = 	vm_action.c	\
	  	vm_reg_set.c

OBJ	= 	$(addprefix src/instructions/, $(SRC_INS:.c=.o))	\
	  	$(addprefix src/init/, $(SRC_INI:.c=.o))		\
	  	$(addprefix src/error/, $(SRC_ERR:.c=.o))		\
	  	$(addprefix src/convert/, $(SRC_CON:.c=.o))		\
	  	$(addprefix src/action/, $(SRC_ACT:.c=.o))

NAME	= 	corewar

LIBS	= 	-L./lib/ -lcorewar_vm

LIBNAME =	lib/libcorewar_vm.a

LIBMAKE =	make -C lib/vm/

LDFLAGS	= 	$(LIBS)

FLAGS	= 	#-W -Wall-ansi -pedantic

INCLUDE	= 	-I./includes/

CFLAGS	= 	$(INCLUDE) $(FLAGS)

RM	= 	rm -f

CC	= 	gcc


$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

$(LIBNAME):
		$(LIBMAKE)

all: 	 	$(LIBNAME) $(NAME)

clean:
	 	$(RM) $(OBJ)

fclean:		clean
	 	$(RM) $(DIR)$(NAME)

re:		fclean all

.PHONY:		all clean fclean re
