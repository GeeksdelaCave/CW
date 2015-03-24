/*
** my_putstr.c for MY_PUTSTR in /home/monge_p/rendu/Piscine_C_J04
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Thu Oct  2 11:30:16 2014 Pierre Monge
** Last update Mon Mar 16 11:29:50 2015 Monge Pierre
*/

#include "corewar_vm_lib.h"

int	my_putstr(char *str)
{
  if (str == NULL)
    return (-1);
  write(1, str, my_strlen(str));
  return (0);
}
