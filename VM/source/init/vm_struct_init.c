/*
** vm_struct_init.c for struct init in /home/mongep/rendu/CPE/CW/VM/source
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 16:24:26 2015 Monge Pierre
** Last update Wed Mar 18 18:01:37 2015 Monge Pierre
*/

#include			"corewar_vm.h"

/*
** init with 4 but we have to parse how many champ is set
*/

t_vm				*vm_data_init(t_vm *vm, char **args)
{
  int				i;

  i = 1;
  while (args[i] != NULL)
    {
      if (IS_COR(i))
	{
	  if (vm_create_champ(vm, args[i]) == -1)
	    return (NULL);
	}
      else if (IS_OPT(i))
	my_printf("opt : %s\n", args[i]);
      else
	return (NULL);
      i++;
    }
  return (vm);
}
