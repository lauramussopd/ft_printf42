# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 19:44:49 by laurmuss          #+#    #+#              #
#    Updated: 2023/07/25 18:22:11 by laurmuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a 
HEADER	= ft_printf.h
SRCS	= ft_printf.c ft_tipo.c ft_putstr.c ft_putchar.c ft_putnbr.c ft_putpercentage.c ft_putuns.c ft_puthex_maius.c ft_puthex.c ft_putptr.c
OBJS	= $(SRCS:.c=.o) 
DEPS	= $(SRCS:.c=.d)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -g
RM		= rm -f 
AR		= ar crs # create, replace, add and index indice all'archvio (senza doverlo digitare ogni volta)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	#$(CC) $(CFLAGS) $(OBJS) # libft.a #crea esecutable

all: $(NAME) #compila il programma

clean:
	$(RM) $(OBJS) #rimuove i file oggetto

fclean:	clean
	$(RM) $(NAME) #per rimuovere i file oggetto e l'archivio statico

re:	fclean all #esegue una ricompilazione completa dopo una pulizia completa

.PHONY:	all clean fclean re 
