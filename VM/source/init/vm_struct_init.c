/*
** vm_struct_init.c for struct init in /home/mongep/rendu/CPE/CW/VM/source
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 16:24:26 2015 Monge Pierre
** Last update Tue Mar 17 15:37:40 2015 Monge Pierre
*/

#include			"corewar_vm.h"

/*
** init with 4 but we have to parse how many champ is set
*/

t_vm				*vm_data_init(t_vm *vm, char **args)
{
  vm->nbr_champ = 4;
  return (vm);
}
