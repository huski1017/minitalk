/*
** client.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Mar  3 16:24:29 2015 Hubert Wroblewski
** Last update Sun Mar 22 09:49:07 2015 Hubert WROBLEWSKI
*/

int	boucle(char *str, int nb)
{
  int	i;
  int	check;

  i = 0;
  while (str[i] != '\0')
    {
      if ((check = convert(str[i], nb)) != 0)
	{
	  if (check == -1)
	    my_putstr("Error : Invalid PID.\n");
	  else if (check == -2)
	    my_putstr("Error : usleep failed.\n");
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
