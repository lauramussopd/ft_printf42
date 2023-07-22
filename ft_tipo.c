/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tipo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:33 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/22 16:41:24 by laurmuss         ###   ########.fr       */
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
	return(len);	
}
