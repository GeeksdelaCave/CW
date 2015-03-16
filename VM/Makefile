##
## Makefile for corewar_VM in /home/mongep/rendu/CPE/CW/VM
##
## Made by Monge Pierre
## Login   <mongep@epitech.net>
##
## Started on  Mon Mar 16 11:04:08 2015 Monge Pierre
## Last update Mon Mar 16 11:51:11 2015 Monge Pierre
##

LIB	= lib/vm/

VM	= source/

CLEAN	= clean

FCLEAN	= fclean

CD	= cd

all:
	@($(CD) $(LIB) && $(MAKE))
	@($(CD) $(VM) && $(MAKE))

clean:
	@($(CD) $(LIB) && $(MAKE) $(CLEAN))
	@($(CD) $(VM) && $(MAKE) $(CLEAN))

fclean:
	@($(CD) $(LIB) && $(MAKE) $(FCLEAN))
	@($(CD) $(VM) && $(MAKE) $(FCLEAN))

re: fclean all

.PHONY: all clean fclean re
