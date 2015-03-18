/*
** vm_reg_set.c for reg action in /home/mongep/rendu/CPE/CW/VM/source/action
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Wed Mar 18 13:26:13 2015 Monge Pierre
** Last update Wed Mar 18 13:42:32 2015 Monge Pierre
*/

#include			"corewar_vm.h"

void				vm_reg_set(int number, int reg, t_champ *champ)
{
  champ->reg[reg % REG_NUMBER] = number;
  return ;
}
