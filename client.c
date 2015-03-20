/*
** client.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Mar  3 16:24:29 2015 Hubert Wroblewski
** Last update Fri Mar 20 11:08:22 2015 Hubert WROBLEWSKI
*/

int	boucle(char *str, int nb)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (convert(str[i], nb) == -1)
	{
	  my_putstr("Error : Invalid PID.\n");
	  return (-1);
	}
      i++;
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	nb;
  int	verif;

  if (ac != 3)
    {
      my_putstr("Error : invalid number of argument.\n");
      return (1);
    }
  nb = my_getnbr(av[1]);
  if (boucle(av[2], nb) == -1)
    return (-1);
  return (0);
}
