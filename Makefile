# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 19:44:49 by laurmuss          #+#    #+#              #
#    Updated: 2023/07/22 13:35:43 by laurmuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= printf.a #definisce la variable NAME, che e l'archivio statico da creare
SRCS	= ft_printf.c #ft_tipo.c ft_putstr.c
OBJS	= $(SRCS:.c=.o) #sostituisce i .c con i .o
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f # rm -f viene utilizzato per rimuovere forzatamente e ricorsivamente fie e carpetas
AR		= ar crs # create, replace, add and index indice all'archvio (senza doverlo digitare ogni volta)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) # libft.a #crea esecutable

all: $(NAME) #compila il programma

clean:
	$(RM) $(OBJS) #rimuove i file oggetto

fclean:	clean
	$(RM) $(NAME) #per rimuovere i file oggetto e l'archivio statico

re:	fclean all #esegue una ricompilazione completa dopo una pulizia completa

.PHONY:	all clean fclean re 
