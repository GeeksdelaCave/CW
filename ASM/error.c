/*
** error.c for error asm corewar in /home/lafon_l/rendu/CW/ASM
**
** Made by leo lzfon
** Login   <lafon_l@epitech.net>
**
** Started on  Thu Mar 19 19:30:29 2015 leo lzfon
** Last update Thu Mar 19 19:53:49 2015 leo lzfon
*/

#include "asm.h"

void		put_error(char *error)
{
  write(2, error, my_strlen(error));
  exit(EXIT_FAILURE);
}
