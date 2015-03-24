/*
** my_strcmp.c for STRCMP in /home/monge_p/rendu/Piscine_C_J06/ex_05
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Oct  6 18:42:37 2014 Pierre Monge
** Last update Wed Jan 14 16:15:48 2015 Pierre Monge
*/

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] < s2[i])
        return (-1);
      if (s1[i] > s2[i])
        return (1);
      i++;
    }
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i] > s2[i])
    return (1);
  return (0);
}
