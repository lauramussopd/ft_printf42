/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:59:03 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/25 16:59:07 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_printf(char const *str, ...) //restituisce un int, -1 se errore
{
	va_list args; //where our arguments are gonna be stored
	int counter;
	int i;

	if(str == NULL)
		return (0);

	counter = 0;
	i = 0;

	va_start(args, str); //to inicialize the list  (list+1 parameter of the function)
	while(str[i])
	{
		if(str[i] == '%')
		{
			counter += ft_tipo(str[i+1], args);
			i++;
		}
		else
		{
			counter += write(1, &str[i], 1);
	
		}
		i++;
	}
	va_end(args);
	return(counter);
}

int main()
{
	char *str = "ciaooo";
	char c = 'H';
	int	num = 12345;
	long int hex = 851156164;

	ft_printf("Imprimi una string: %s\n", str);
	ft_printf("Imprimi un carattere: %c\n", c);
	ft_printf ("Print a percentage sign: %%\n");
	ft_printf ("scrivi un numero: %d\n", num);
	ft_printf ("scrivi un numero hexadecimal: %X\n", hex);


}
