/*
** server.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Mar  3 16:36:24 2015 Hubert Wroblewski
** Last update Sun Mar 22 09:36:35 2015 Hubert WROBLEWSKI
*/

#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void		capt(int i)
{
  static int	stk = 0;
  static int	cnt = 0;
  int		result;

  if (cnt < 8)
    {
      if (cnt == 7)
	stk = stk + i;
      else
	stk = (stk + i) * 10;
      cnt++;
    }
  if (cnt == 8)
    {
      result = traduct(stk);
      my_putchar(result);
      stk = 0;
      cnt = 0;
    }
}

void	my_sig()
{
  capt(0);
}

void	my_sigi()
{
  capt(1);
}

int	main()
{
  pid_t	pid;

  pid = getpid();
  my_put_nbr(pid);
  my_putchar('\n');
  signal(SIGUSR1, &my_sig);
  signal(SIGUSR2, &my_sigi);
  while (42)
    {

    }
}
