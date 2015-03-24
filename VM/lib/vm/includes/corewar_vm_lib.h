/*
** corewar_vm_lib.h for corewar vmlib in /home/mongep/rendu/CPE/CW/VM/include
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Mon Mar 16 11:42:10 2015 Monge Pierre
** Last update Tue Mar 24 18:11:45 2015 johann gangai
*/

#ifndef COREWAR_VM_LIB_H_
# define COREWAR_VM_LIB_H_

#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdarg.h>

/*
** Printf prototypes
*/
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

/*
** Other functions
*/
void		my_putchar(char c);
int		my_put_nbr(int nb);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_strstr(char *str, char *to_find);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int nb);
char		*my_strcat(char *dest, char *src);
char		*my_strncat(char *dest, char *src, int nb);
int		my_strlcat(char *dest, char *src, int size);
int		my_printf(char *format, ...);
char		*my_strdup(char *str);
char		**my_str_to_wordtab(char *, char, int);
int		cerr(char *);
void		cerr_void(char *);
char		*my_revstr(char *);

#endif		/* !COREWAR_VM_LIB_H_ */
