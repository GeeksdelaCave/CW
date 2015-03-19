/*
** asm.c for asm.c in /home/lafon_l/rendu/CW/ASM
**
** Made by leo lzfon
** Login   <lafon_l@epitech.net>
**
** Started on  Thu Mar 19 11:40:00 2015 leo lzfon
** Last update Thu Mar 19 20:29:40 2015 leo lzfon
*/

#include "asm.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char		process_file(char *file_name)
{
  int		fd;

  if ((fd = open(file_name, O_RDONLY)) == -1)
    {
      write(2, "Cannot open file: ", my_strlen("Cannot open file: "));
      write(2, file_name, my_strlen(file_name));
      write(2, "\n", 1);
      return (EXIT_FAILURE);
    }
  /* while (); */
  if (close(fd) == -1)
    return (EXIT_FAILURE);
}

int		main(int ac, char **av)
{
  int		k;
  int		len;

  k = 1;
  if (ac < 2)
    put_error(ARG);
  while (av[k])
    {
      len = my_strlen(av[k]);
      if (av[k][len - 1] != 's' || av[k][len - 2] != '.')
	{
	  write(2, av[k], my_strlen(av[k]));
	  write(2, ": file extension must be '.s'\n"
		, my_strlen(": file extension must be '.s'\n"));
	}
      else
	process_file(av[k]);
      ++k;
    }
  return (EXIT_SUCCESS);
}
