/*
** vm_convert.c for convert in /home/mongep/rendu/CPE/CW/VM/source/convert
**
** Made by Monge Pierre
** Login   <mongep@epitech.net>
**
** Started on  Tue Mar 17 13:52:20 2015 Monge Pierre
** Last update Tue Mar 17 14:17:37 2015 Monge Pierre
*/

#include			"corewar_vm.h"

int				init(char *base, int *nbr, int *j, int *i)
{
  int				len;

  len = my_strlen(base);
  *nbr = 0;
  *j = 0;
  *i = 1;
  return (len);
}

int				check_neg(char *s)
{
  int				i;
  int				cpt;

  i = 0;
  cpt = 0;
  while (s[i] && (s[i] < '0' || s[i] > '9'))
    {
      if (s[i] == '-')
	{
	  cpt = cpt + 1;
	}
      i = i + 1;
    }
  if (cpt % 2 == 0)
    {
      return (1);
    }
  return (-1);
}

int				check_base(char *base, int n)
{
  int				i;

  n = 0;
  while (base[n])
    {
      i = 0;
      while (base[i])
	{
	  if (i != n)
	    {
	      if (base[n] == base[i])
		{
		  return (-1);
		}
	    }
	  i = i + 1;
	}
      n = n + 1;
    }
  return (0);
}

int				vm_convert_base(char *str, char *base)
{
  int				nbr;
  int				len;
  int				j;
  int				k;
  int				i;

  len = init(base, &nbr, &j, &i);
  i = check_neg(str);
  if (check_base(base, 0) == -1)
    {
      return (0);
    }
  while (str[j])
    {
      k = 0;
      while (k < len && base[k] != str[j])
	k = k + 1;
      if (base[k] == str[j])
	nbr = nbr * len + k;
      else
	if ((str[j] != '-' && str[j] != '+'))
	  return (0);
      j = j + 1;
    }
  return (nbr * i);
}

char				*vm_convert(char *nbr, char *base_from,
					      char *base_to)
{
  int				i;
  int				nb;
  char				*res;

  i = 0;
  if (!(res = malloc(sizeof(char) * 300)))
    return (NULL);
  nb = vm_convert_base(nbr, base_from);
  while (nb > 0)
    {
      res[i] = base_to[nb % my_strlen(base_to)];
      nb = nb / my_strlen(base_to);
      i++;
    }
  res[i] = '\0';
  res = my_revstr(res);
  return (res);
}
