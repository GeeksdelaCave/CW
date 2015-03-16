/*
** ex_01.c for STRCPY in /home/monge_p/rendu/Piscine_C_J06
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Oct  6 09:36:39 2014 Pierre Monge
** Last update Tue Nov 25 23:26:04 2014 Pierre Monge
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
