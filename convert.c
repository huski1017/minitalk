/*
** convert.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert WROBLEWSKI
** Login   <wroble_h@epitech.eu>
** 
** Started on  Wed Mar 18 13:18:20 2015 Hubert WROBLEWSKI
** Last update Wed Mar 18 13:37:44 2015 Hubert WROBLEWSKI
*/

int	convert(int i)
{
  int	bina;
  int	stock;

  bina = 128;
  stock = 0;
  while (bina >= 1)
    {
      stock = stock * 10;
      if (i >= bina)
	{
	  i = i - bina;
	  stock = stock + 1;
	}
      bina = bina / 2;
    }
  return (stock);
}
