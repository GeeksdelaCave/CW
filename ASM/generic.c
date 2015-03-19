/*
** generic.c for generic corewar in /home/lafon_l/rendu/CW/ASM
**
** Made by leo lzfon
** Login   <lafon_l@epitech.net>
**
** Started on  Thu Mar 19 11:59:35 2015 leo lzfon
** Last update Thu Mar 19 12:00:36 2015 leo lzfon
*/

int		my_strlen(char *str)
{
  int		k;

  k = 0;
  while (str[k])
    ++k;
  return (k);
}
