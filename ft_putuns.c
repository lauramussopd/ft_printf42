/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:02:35 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/25 18:16:27 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_count_uns(unsigned int b)
{
	int			res;
	
	res = 0;
	if(b == 0)
		return (1);
	while (b)
	{
		b = b / 10;
		res++;
	}
	return (res);
}
int		ft_putuns(unsigned int n)
{
	int				rtn;

	rtn = ft_count_uns(n);
	if (n < 10)
	{
		if (ft_putchar(n + '0') == -1)
			return (-1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (rtn);
}
