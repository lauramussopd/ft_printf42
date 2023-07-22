/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:59:03 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/22 13:39:12 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include <unistd.h>

int ft_putstr(char *s)
{
	int i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return(i);
}

int	ft_tipo(char c, va_list args)
{
	int len;

	if (c == 's')
	{
		len = ft_putstr(va_arg(args, char *));
		return (len);
	}
	return(1);
	//if (c == 'd')
}


int	ft_printf(char const *str, ...) //restituisce un int, -1 se errore
{
	va_list args; //where our arguments are gonna be stored
	int counter;
	int i;

	//if(str != NULL)
	//	return (NULL);

	counter = 0;
	i = 0;

	va_start(args, str); //to inicialize the list  (list+1 parameter of the function)
	while(str[i])
	{
		if(str[i] == '%')
		{
			counter = ft_tipo(str[i+1], args);
				i++;
		}
		else
		{
			counter = write(1, &str[i], 1);
		}
		return(0);
	}





	va_end(args);
	return(counter);
}

int main()
{
	char *str = "hlahola";
	ft_printf("il numero e: %s", str);
}
