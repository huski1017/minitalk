/*
** test.c for test in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert WROBLEWSKI
** Login   <wroble_h@epitech.eu>
** 
** Started on  Wed Mar 18 13:31:02 2015 Hubert WROBLEWSKI
** Last update Wed Mar 18 13:32:49 2015 Hubert WROBLEWSKI
*/

int	main(int ac, char **av)
{
  int	result;
  char	res;
  result = convert(av[1][0]);
  res = traduct(result);
  printf("%c\n", res);
  return (0);
}
