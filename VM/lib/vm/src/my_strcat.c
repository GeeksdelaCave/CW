/*
** my_strcat.c for STRCAT in /home/monge_p/rendu/Piscine_C_J07/ex_01
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Tue Oct  7 09:56:10 2014 Pierre Monge
** Last update Mon Mar 16 11:30:19 2015 Monge Pierre
*/

#include "corewar_vm_lib.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
