/*
** my_printf.c for MY PRINTF in /home/monge_p/rendu/PSU_2014_my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Tue Nov 11 12:04:21 2014 Pierre Monge
** Last update Mon Mar 16 11:29:14 2015 Monge Pierre
*/

#include <stdlib.h>
#include <stdarg.h>
#include "corewar_vm_lib.h"
#include "my_printf_struct.h"

int		cmp_tab_func(char *formatage, char *option_func,
			     option *option, int i, va_list ap)
{
  int		p;

  p = 0;
  while ((formatage[i] != option_func[p]) && (option_func[p] != '\0'))
    {
      p = p + 1;
    }
  if (option_func[p] == '\0')
    {
      my_putchar('%');
      my_putchar(formatage[i]);
    }
  else
    option[p](ap);
  return (i);
}

option		*option_tab(option *option_func)
{
  option_func = malloc(sizeof(option) * 13);

  option_func[0] = option_d;
  option_func[1] = option_u;
  option_func[2] = option_b;
  option_func[3] = option_x;
  option_func[4] = option_X;
  option_func[5] = option_i;
  option_func[6] = option_s;
  option_func[7] = option_S;
  option_func[8] = option_o;
  option_func[9] = option_c;
  option_func[10] = option_p;
  option_func[11] = option_m;
  option_func[12] = '\0';
  return (option_func);
}

char		*option_possible(char *func)
{
  func = malloc(sizeof(char) * 13);

  func[0] = 'd';
  func[1] = 'u';
  func[2] = 'b';
  func[3] = 'x';
  func[4] = 'X';
  func[5] = 'i';
  func[6] = 's';
  func[7] = 'S';
  func[8] = 'o';
  func[9] = 'c';
  func[10] = 'p';
  func[11] = 'm';
  func[12] = '\0';
  return (func);
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  char		*option_;
  option       	*option_func;
  int		i;

  i = 0;
  va_start(ap, format);
  option_func = option_tab(option_func);
  option_ = option_possible(option_);
    while (format[i] != '\0')
      {
	if (format[i] == '%')
	  {
	    i = i + 1;
	    if (format[i] == '%')
	      my_putchar('%');
	    else
	      cmp_tab_func(format, option_, option_func, i, ap);
	  }
	else
	  my_putchar(format[i]);
	i++;
      }
    return (i);
}
