/*
** my_printf_struct.h for print struct in /home/monge_p/rendu/PSU_2014_my_printf/include
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Fri Nov 14 13:21:35 2014 Pierre Monge
** Last update Sun Nov 16 19:45:16 2014 Pierre Monge
*/

#ifndef MY_PRINTF_STRUCT_H_
# define MY_PRINTF_STRUCT_H_

typedef		int (*option)(va_list);

int		option_d(va_list list);
int		option_u(va_list list);
int		option_b(va_list list);
int		option_x(va_list list);
int		option_X(va_list list);
int		option_i(va_list list);
int		option_s(va_list list);
int		option_S(va_list list);
int		option_o(va_list list);
int		option_c(va_list list);
int		option_p(va_list list);
int		option_m(va_list list);

#endif /* !MY_PRINTF_STRUCT_H_ */
