/*
** vm_sub.c for sub in /home/mongep/rendu/CPE/CW/VM/source/instructions
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 14:10:27 2015 Monge Pierre
** Last update Thu Mar 19 12:23:54 2015 Monge Pierre
*/

#include			"corewar_vm.h"

int				vm_instruction_sub(t_vm *vm, t_champ *champ)
{
  champ->delay = 6;
  if (vm->param.type_1 != TYPE_REG || vm->param.type_2 != TYPE_REG
      || vm->param.type_3 != TYPE_REG)
    return (0);
  if (vm->param.param_1 < 1 || vm->param.param_2 < 1 || vm->param.param_3 < 1)
    return (0);
  RG((vm->param.param_3 - 1) % REG_NUMBER) = RG((vm->param.param_1 - 1)
					       % REG_NUMBER) -
    RG((vm->param.param_2 - 1) % REG_NUMBER);
  if (champ->carry == 0)
    champ->carry = 1;
  else
    champ->carry = 0;
  return (0);
}
