/*
** my_strdup.c for STRDUP in /home/monge_p/rendu/PSU/PSU_2014_my_ls/lib/my
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Tue Nov 25 22:53:58 2014 Pierre Monge
** Last update Mon Mar 16 11:30:33 2015 Monge Pierre
*/

#include <stdlib.h>
#include "corewar_vm_lib.h"

char	*my_strdup(char *str)
{
  char	*dest;

  dest = malloc(sizeof(char *) * my_strlen(str) + 1);
  dest = my_strcpy(dest, str);
  dest[my_strlen(str)] = '\0';
  return (dest);
}
