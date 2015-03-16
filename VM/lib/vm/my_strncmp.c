/*
** ex_06.c for EX 06 in /home/monge_p/rendu/Piscine_C_J06/ex_06
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Oct  6 19:43:44 2014 Pierre Monge
** Last update Wed Nov 12 14:48:46 2014 Pierre Monge
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  char	ascii;

  n = n - 1;
  i = 0;
  while (s1[i] == s2[i] && n != 0)
    {
      if (s1[i] == '\0' && s2[i] == '\0')
	{
	  return (0);
	}
      i = i + 1;
      n = n - 1;
    }
  ascii = s1[i] - s2[i];
  return (ascii);
}
