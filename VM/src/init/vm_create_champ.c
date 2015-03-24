/*
** vm_create_champ.c for create champ in /home/mongep/rendu/CPE/CW/VM
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Wed Mar 18 11:14:24 2015 Monge Pierre
** Last update Tue Mar 24 11:08:07 2015 Monge Pierre
*/

#include			"corewar_vm.h"

int				vm_extract_data_file(t_champ *champ, char *name,
						     int len)
{
  int				fd;
  int				ret;

  if ((fd = open(name, O_RDONLY)) < 0)
    return (-1);
  if (!(champ->data = malloc(sizeof(char) * len + 1)))
    return (-1);
  ret = read(fd, champ->data, len);
  champ->data[ret] = -1;
  close(fd);

  int try = 0;
  while (champ->data[try] != -1)
    my_printf("%i ", champ->data[try++]);
  return (0);
}

int				vm_len_data_file(char *name)
{
  int				fd;
  int				len;
  int				ret;
  char				buf[2];

  len = 0;
  ret = 1;
  if ((fd = open(name, O_RDONLY)) < 0)
    return (vm_error("corewar : almost one champ does'nt exist\n"));
  while (ret > 0)
    {
      ret = read(fd, buf, 1);
      buf[ret] = '\0';
      len += ret;
    }
  close(fd);
  return (len);
}

t_champ				*vm_champ_alloc(t_vm *vm)
{
  t_champ			*prev;
  t_champ			*new;

  if (!(new = malloc(sizeof(t_champ))))
    return (NULL);
  if (vm->champ_first == NULL)
    vm->champ_first = new;
  else
    {
      prev = vm->champ_first;
      while (prev->next != NULL)
	prev = prev->next;
      prev->next = new;
    }
  new->next = NULL;
  return (new);
}

int				vm_create_champ(t_vm *vm, char *name)
{
  t_champ			*new;
  int				len;

  if (!(new = vm_champ_alloc(vm)))
    return (-1);
  if ((len = vm_len_data_file(name)) == -1)
    return (-1);
  if (vm_extract_data_file(new, name, len) == -1)
    return (-1);
  return (0);
}
