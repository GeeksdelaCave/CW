/*
** my_revstr.c for revstr in /home/mongep/rendu/CPE/CW/VM/lib/vm
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Tue Mar 17 14:20:09 2015 Monge Pierre
** Last update Tue Mar 17 14:23:18 2015 Monge Pierre
*/

#include		"corewar_vm_lib.h"

char			*my_revstr(char *str)
{
  int			i;
    int			j;
    int			c;

    i = 0;
    j = my_strlen(str) - 1;
    while (i < j)
      {
	c = str[i];
	str[i] = str[j];
	str[j] = c;
	i++;
	j--;
      }
    return (str);
}
