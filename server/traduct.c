/*
** traduct.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert WROBLEWSKI
** Login   <wroble_h@epitech.eu>
** 
** Started on  Wed Mar 18 13:33:49 2015 Hubert WROBLEWSKI
** Last update Wed Mar 18 13:41:21 2015 Hubert WROBLEWSKI
*/

int	traduct(int i)
{
  int	stk;
  int	result;

  result = 0;
  stk = 1;
  while (stk < 128)
    {
      if ((i % 10) == 1)
	result = result + stk;
      stk = stk * 2;
      i = i / 10;
    }
  return (result);
}
