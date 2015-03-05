/*
** client.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Mar  3 16:24:29 2015 Hubert Wroblewski
** Last update Tue Mar  3 17:12:04 2015 Hubert Wroblewski
*/

#include <signal.h>

int	main(int ac, char **av)
{
  int	nb;
  int	verif;

  if (ac <= 2)
    {
      my_putstr("Error : invalid number of argument.\n");
      return (1);
    }
  nb= my_getnbr(av[1]);
  if (av[2][0] == '1')
    {
      if ((verif = kill(nb, SIGUSR1)) == -1)
	{
	  my_putstr("Error : wrong PID\n");
	  return (1);
	}
    }
  else if (av[2][0] == '2')
    {
      if ((verif = kill(nb, SIGUSR2)) == -1)
	{
	  my_putstr("Error : wrong PID\n");
	  return (1);
	}
    }
  else
    return (1);
  return (0);
}
