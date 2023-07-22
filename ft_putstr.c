/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:55:34 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/22 13:08:49 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <stdarg.h>

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
