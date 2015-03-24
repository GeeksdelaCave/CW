/*
** vm_live.c for live in /home/mongep/rendu/CPE/CW/VM/source/instructions
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 14:13:39 2015 Monge Pierre
** Last update Tue Mar 24 10:55:01 2015 Monge Pierre
*/

#include			"corewar_vm.h"

int				vm_instruction_live(t_vm *vm, t_champ *champ)
{
  vm->live_done += 1;
  if (vm->param.param_1 > vm->nbr_champ)
    return (0);
  champ = vm->champ_first;
  while (champ != NULL || champ->reg[0] != vm->param.param_1)
    champ = champ->next;
  if (champ == NULL)
    return (0);
  else
    {
      champ->live_before_die = CYCLE_TO_DIE - ((vm->live_done % NBR_LIVE)
					       * CYCLE_DELTA);
      champ->delay = 10;
      my_printf("champ %s is alive !! :)\n", champ->name);
    }
  return (0);
}
