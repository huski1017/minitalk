##
## Makefile for Make in /home/wroble_h/rendu/PSU_2014_minitalk
## 
## Made by Hubert Wroblewski
## Login   <wroble_h@epitech.net>
## 
## Started on  Tue Mar  3 16:51:14 2015 Hubert Wroblewski
## Last update Thu Mar 19 17:48:14 2015 Hubert WROBLEWSKI
##

CC	= gcc

RM	= rm -f

NAME	= client

NAMEE	= server

SRCS	= server.c \
	my_put_nbr.c \
	my_putstr.c \
	traduct.c

SRCSS	= client.c \
	my_putstr.c \
	my_getnbr.c \
	convert.c

OBJS	= $(SRCS:.c=.o)

OBJSS	= $(SRCSS:.c=.o)

all: $(NAME) $(NAMEE)

$(NAME): $(OBJSS)
	$(CC) $(OBJSS) -o $(NAME)

$(NAMEE): $(OBJS)
	$(CC) $(OBJS) -o $(NAMEE)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJSS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAMEE)

re: fclean all

.PHONY: all clean fclean re
