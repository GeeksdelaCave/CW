/*
** vm_or.c for or in /home/mongep/rendu/CPE/CW/VM/source/instructions
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 14:11:32 2015 Monge Pierre
** Last update Thu Mar 19 12:28:17 2015 Monge Pierre
*/

#include			"corewar_vm.h"

int				vm_instruction_or(t_vm *vm, t_champ *champ)
{
  int				first_p;
  int				second_p;

  champ->delay = 6;
  if (vm->param.type_3 != TYPE_REG)
    return (0);
  if (vm->param.type_1 == TYPE_REG)
    first_p = RG(vm->param.param_1 - 1);
  else
    first_p = vm->param.param_1;
  if (vm->param.type_2 == TYPE_REG)
    second_p = RG(vm->param.param_2 - 1);
  else
    second_p = vm->param.param_2;
  RG((vm->param.param_3 - 1) % REG_NUMBER) = first_p | second_p;
  if (champ->carry == 0)
    champ->carry = 1;
  else
    champ->carry = 0;
  return(0);
}
