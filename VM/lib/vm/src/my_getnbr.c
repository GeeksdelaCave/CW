/*
** my_getnbr.c for my_getnbr in /home/monge_p/rendu/Piscine_C_J04
** 
** Made by pierre monge
** Login   <monge_p@epitech.net>
** 
** Started on  Thu Oct  2 17:18:38 2014 pierre monge
** Last update Wed Oct 22 14:33:02 2014 Pierre Monge
*/

long	my_strlen4(char *str)
{
  long	pow;

  pow = 1;
  while (*str >= '0' && *str <= '9')
    {
      str = str + 1;
      pow = pow * 10;
    }
  return (pow);
}

long	overflow(long total)
{
  if (total < -2147483648 || total > 2147483647)
    {
      return (0);
    }
  return (total);
}

long	nega(int c, long total)
{
  if ((c % 2) == 1)
    {
      total = -total;
    }
  return (total);
}

int	my_getnbr(char *nbr)
{
  int	a;
  long	total;
  long	pow;

  total = 0;
  a = 0;
  while (*nbr == '+' || *nbr == '-')
    {
      if (*nbr == '-')
	{
	  a = a + 1;
	}
      nbr = nbr + 1;
    }
  pow = my_strlen4(nbr) / 10;
  while (*nbr >= '0' && *nbr <= '9')
    {
      total = total + (*nbr - 48) * pow;
      nbr = nbr + 1;
      pow = pow / 10;
    }
  total = nega(a, total);
  total = overflow(total);
  return (total);
}
