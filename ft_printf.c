/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:59:03 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/20 20:13:31 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(char const *str, ...) //restituisce un int, -1 se errore
{
	va_list args; //where our arguments are gonna be stored
	int counter;
	int i;

	if(str != NULL)
		return NULL;

	conter = 0;
	i = 0;

	va_start(args, str); //to inicialize the list  (list+1 parameter of the function)
	while(str[i])
	{
		if(str[i] == '%')
		{
			counter = ft_format(s[i+1], args)
				i++;
		}
		else
		{
			counter = write(1, s[i], 1);
		}
	}
}




	va_end(args);
	return(counter);
}
