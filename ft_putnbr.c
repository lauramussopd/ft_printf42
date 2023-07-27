/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:02:35 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/25 18:06:02 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_count_digits(int b)
{
	int			res;
	long int	num;

	num = (long int)b;
	res = 0;
	if(b == 0)
		return (1);
	if (b < 0)
	{
		num = -b;
		res++;
	}
	while (num)
	{
		num = num / 10;
		res++;
	}
	return (res);
}

int		ft_putnbr(int n)
{
	unsigned int	num;
	int				rtn;

	rtn = ft_count_digits(n);
	num = n;
	if (n < 0)
	{
		ft_putchar('-');
		num = -n;
	}
	if (num < 10)
		ft_putchar(num + '0');
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	return (rtn);
}
