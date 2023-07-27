/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:15:36 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/25 18:20:25 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

int	ft_putstr(char *s);
int	ft_tipo(char c, va_list args);
int	ft_putchar(char c);
int ft_putpercentage(void);
int	ft_putnbr(int n);
int ft_putuns(unsigned int b);
int		ft_puthex(unsigned int n);
int ft_count_hex(unsigned int b);
int	ft_printf(const char *str, ...);

#endif //FT_PRINTF_H
