/*
** printf_opt_2.c for OPT 2 in /home/monge_p/rendu/PSU_2014_my_printf/lib/my
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sat Nov 15 19:37:20 2014 Pierre Monge
** Last update Mon Mar 16 11:49:56 2015 Monge Pierre
*/

#include <stdarg.h>
#include "corewar_vm_lib.h"

int	option_i(va_list list)
{
  int	i;

  i = va_arg(list, int);
  my_put_nbr(i);
}

int	option_s(va_list list)
{
  char	*s;

  s = va_arg(list, char *);
  my_putstr(s);
}

int	option_S(va_list list)
{
}

int		option_o(va_list list)
{
  unsigned int	o;
  char		*base;

  base = "01234567";
  return (0);
}

int	option_c(va_list list)
{
  char	car;

  car = va_arg(list, int);
  my_putchar(car);
}
