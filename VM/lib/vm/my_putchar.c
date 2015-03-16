/*
** my_putchar.c for MY PUTCHAR in /home/monge_p/rendu/Piscine_C_J07/lib/lib
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Tue Oct  7 09:27:26 2014 Pierre Monge
** Last update Mon Mar 16 11:29:26 2015 Monge Pierre
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
