/*
** server.c for minitalk in /home/wroble_h/rendu/PSU_2014_minitalk
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Mar  3 16:36:24 2015 Hubert Wroblewski
** Last update Tue Mar  3 17:06:55 2015 Hubert Wroblewski
*/

#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void	my_sig()
{
  printf("coucou\n");
}

void	my_sigi()
{
  printf("ma biche\n");
}

int	main()
{
  pid_t	pid;

  pid = getpid();
  my_put_nbr(pid);
  signal(SIGUSR1, &my_sig);
  signal(SIGUSR2, &my_sigi);
  while (42)
    {

    }
}
