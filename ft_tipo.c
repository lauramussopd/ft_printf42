/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tipo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:33 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/25 18:21:13 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h" 

int	ft_tipo(char c, va_list args)
{
	int len;
	
	len = 0;
	if (c == 's')
	{
		len = ft_putstr(va_arg(args, char *));
		return (len);
	} 
	else if (c == 'c')
	{
		len = ft_putchar(va_arg(args, int));
		return (len);
	}
	else if ((c == 'd') || ( c == 'i'))
	{
		len = ft_putnbr(va_arg(args, int));
		return (len);
	}
	else if (c == 'u')
	{
		len = ft_putuns(va_arg(args, unsigned int));
		return (len);
	}
	else if (c =='%')
		len = ft_putpercentage();
	return(len);	
}
