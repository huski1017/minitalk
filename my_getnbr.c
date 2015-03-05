/*
** my_getnbr.c for my_getnbr in /home/wroble_h/rendu/day04
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Fri Oct  3 14:36:23 2014 Hubert Wroblewski
** Last update Tue Mar  3 16:33:30 2015 Hubert Wroblewski
*/

int	my_getnbr(char *str)
{
  int	count;
  int	s;
  int	nbr;

  s = 1;
  count = 0;
  while (str[count] != '\0' && (str[count] == '+' || str[count] == '-'))
    {
      if (str[count] == '-')
	  s = s * -1;
      count = count + 1;
    }
  str = str + count;
  nbr = 0;
  count = 0;
  while (str[count] >= '0' && str[count] <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr - (str[count] - '0');
      count = count + 1;
    }
  return (nbr * s * -1);
}
