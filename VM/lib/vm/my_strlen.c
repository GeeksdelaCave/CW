/*
** my_strlen.c for MY_STRLEN in /home/monge_p/rendu/Piscine_C_J04
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Thu Oct  2 11:51:55 2014 Pierre Monge
** Last update Tue Dec 23 23:10:49 2014 Pierre Monge
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
