/*
** printf_opt_1.c for OPT 1 in /home/monge_p/rendu/PSU_2014_my_printf/lib/my
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sat Nov 15 19:35:30 2014 Pierre Monge
** Last update Mon Mar 16 11:49:38 2015 Monge Pierre
*/

#include <stdarg.h>
#include "corewar_vm_lib.h"

int	option_d(va_list list)
{
  int	d;

  d = va_arg(list, int);
  my_put_nbr(d);
}

int		option_u(va_list list)
{
  unsigned int	u;
  int		utest;

  utest = va_arg(list, int);
  if (utest < 0)
    {
      my_putchar(10);
      return (0);
    }
  u = utest;
  my_put_nbr(u);
}

int		option_b(va_list list)
{
  unsigned int	b;
  char		*base;

  base = "01";
  b = va_arg(list, unsigned int);
  return (0);
}

int		option_x(va_list list)
{
  unsigned int	x;
  char		*base;
  int		xtest;

  base = "0123456789abcdef";
  xtest = va_arg(list, int);
  if (xtest < 0)
    {
      my_putstr("fffffff");
      return (0);
    }
  x = xtest;
  return (0);
}

int	option_X(va_list list)
{
  unsigned int	x;
  char		*base;
  int		xtest;

  base = "0123456789ABCDEF";
  xtest = va_arg(list, int);
  if (xtest < 0)
    {
      my_putstr("fffffff");
      return (0);
    }
  x = xtest;
  return (0);
}
