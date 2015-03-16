/*
** my_strncat.c for STRNCAT in /home/monge_p/rendu/Piscine_C_J07
** 
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
** 
** Started on  Tue Oct  7 10:53:57 2014 Pierre Monge
** Last update Tue Oct  7 11:19:03 2014 Pierre Monge
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	p;
  int	i;

  i = 0;
  p = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[p] != '\0' && nb > 0)
    {
      dest[i] = src[p];
      i = i + 1;
      p = p + 1;
      nb = nb - 1;
    }
  dest[i] = '\0';
  return (dest);
}
