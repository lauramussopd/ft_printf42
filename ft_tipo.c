/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tipo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:33 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/22 13:06:31 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <stdio.h>

int	ft_tipo(char c, va_list args)
{
	int len;

	if (c == 's')
	{
		len = ft_putstr(va_arg(args, char *));
		return (len);
	}
	//if (c == 'd')
}
