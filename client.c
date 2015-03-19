/*
** client.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Mar  3 16:24:29 2015 Hubert Wroblewski
** Last update Thu Mar 19 18:01:53 2015 Hubert WROBLEWSKI
*/

int	boucle(char *str, int nb)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      convert(str[i], nb);
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
  boucle(av[2], nb);
  return (0);
}
