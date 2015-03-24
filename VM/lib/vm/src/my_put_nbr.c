/*
** my_put_nbr.c for MY_PUT_NBR in /home/monge_p/rendu/Piscine_C_J03
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Wed Oct  1 21:38:16 2014 Pierre Monge
** Last update Tue Mar 24 18:08:54 2015 johann gangai
*/

#include "corewar_vm_lib.h"

int	overflow2(int nb)
{
  if (nb == -2147483648)
    {
      my_putchar('-');
      my_putchar('2');
      my_putchar('1');
      my_putchar('4');
      my_putchar('7');
      my_putchar('4');
      my_putchar('8');
      my_putchar('3');
      my_putchar('6');
      my_putchar('4');
      nb = 8;
    }
  return (nb);
}

int	puissance_dix(int i)
{
  int	e;

  e = 1;
  i = i - 1;
  while (i != 0)
    {
      e = e * 10;
      i = i - 1;
    }
  return (e);
}

int	affichage_lol(int nb)
{
  if (nb == 0)
    {
      my_putchar('0');
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  return (nb);
}

int	my_put_nbr(int nb)
{
  int	n;
  int	i;

  i = 0;
  nb = overflow2(nb);
  n = nb;
  while (n != 0)
    {
      n = n / 10;
      i = i + 1;
    }
  n = nb;
  nb = affichage_lol(nb);
  while (i != 0)
    {
      n = nb;
      n = (n / puissance_dix(i)) % 10;
      i = i - 1;
      my_putchar(n + 48);
    }
  return (0);
}
