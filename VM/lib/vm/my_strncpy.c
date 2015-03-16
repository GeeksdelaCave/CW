/*
** ex_02.c for EX 02 in /home/monge_p/rendu/Piscine_C_J06/ex_02
** 
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
** 
** Started on  Mon Oct  6 10:52:51 2014 Pierre Monge
** Last update Mon Oct  6 11:11:21 2014 Pierre Monge
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  while (*src != '\0' &&  n != 0)
    {
      *dest = *src;
      src = src + 1;
      dest = dest + 1;
      n = n - 1;
    }
  while (*dest != '\0')
    {
      *dest = '\0';
      dest = dest + 1;
    }
  return (dest);
}
