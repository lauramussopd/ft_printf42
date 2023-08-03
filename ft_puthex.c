#include "ft_printf.h"

int ft_count_hex(unsigned int b)
{
	unsigned int	res;
	long int	     num;

	num = (unsigned int)b;
	res = 0;
	if(b == 0)
		return (1);
	while (num)
	{
		num = num / 16;
		res++;
	}
	return (res);
}

int		ft_puthex(unsigned int num)
{
	int				rtn;


	rtn = ft_count_hex(num);
	if (num < 16)
    { 
        if (num < 10)
		{
			if (ft_putchar(num + '0') == -1)
				return (-1);
		}
        else
		{
			if (ft_putchar(num - 10 + 'a') == -1)
				return (-1);
		}
    }
	else
	{
		if (ft_puthex(num / 16) == -1)
				return (-1);      
		if (ft_puthex(num % 16) == -1)
				return (-1);  
	}
	return (rtn);
}