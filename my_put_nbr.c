/*
** my_put_nbr.c for my_put_nbr in /home/wroble_h/rendu/day03
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Thu Oct  2 09:28:15 2014 Hubert Wroblewski
** Last update Sun Mar 22 09:52:52 2015 Hubert WROBLEWSKI
*/

#include <stdlib.h>

void	my_putchar(char c)
{
  if ((write(1, &c, 1)) == -1)
    {
      (void)write(1, "Error : function write failed.\n", 31);
      exit(1);
    }
}

int	my_put_nbr(int nb)
{
  int	k;

  k = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  k = 1;
	  nb = nb + 1;
	}
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (k == 1)
    {
      k = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
