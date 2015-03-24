/*
** cerr.c for cerr in /home/mongep/rendu/PSU/PSU_2014_minitalk
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Wed Feb 25 17:59:49 2015 Monge Pierre
** Last update Mon Mar 16 11:28:56 2015 Monge Pierre
*/

#include "corewar_vm_lib.h"

int	cerr(char *error)
{
  if (error == NULL)
    return (-1);
  else
    write(2, error, my_strlen(error));
  return (-1);
}

void	cerr_void(char *error)
{
  if (error == NULL)
    return ;
  else
    write(2, error, my_strlen(error));
  return ;
}
