/*
** convert.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert WROBLEWSKI
** Login   <wroble_h@epitech.eu>
** 
** Started on  Wed Mar 18 13:18:20 2015 Hubert WROBLEWSKI
** Last update Sun Mar 22 09:44:31 2015 Hubert WROBLEWSKI
*/

#include <signal.h>
#include <unistd.h>

int	convert(int i, int nb)
{
  int	bina;
  int	stock;
  int	verif;

  bina = 128;
  stock = 0;
  while (bina >= 1)
    {
      if (usleep(300) == -1)
	return (-2);
      if (i >= bina)
	{
	  if ((verif = kill(nb, SIGUSR2)) == -1)
	    return (-1);
	  i = i - bina;
	}
      else
	{
	  if ((verif = kill(nb, SIGUSR1)) == -1)
	    return (-1);
	}
      bina = bina / 2;
    }
  return (0);
}
