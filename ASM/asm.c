/*
** asm.c for asm.c in /home/lafon_l/rendu/CW/ASM
**
** Made by leo lzfon
** Login   <lafon_l@epitech.net>
**
** Started on  Thu Mar 19 11:40:00 2015 leo lzfon
** Last update Thu Mar 19 12:07:48 2015 leo lzfon
*/

#include "asm.h"

void		is_dot_s(char *file_name)
{
  int		len;

  len = my_strlen(file_name);
  if (file_name[len -1] != 's' || file_name[len - 2] != '.')
    {
      write(2, DOT_S, my_strlen(DOT_S));
      exit(EXIT_FAILURE);
    }
}

int		main(int ac, char **av)
{
  int		k;

  k = 1;
  if (ac < 2)
    {
      write(2, "Error\n", 6);
      return (EXIT_FAILURE);
    }
  while (k < ac)
    {
      is_dot_s(av[k]);
      ++k;
    }
  return (EXIT_SUCCESS);
}
