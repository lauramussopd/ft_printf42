#include "ft_printf.h"

int ft_count_hex(unsigned int b)
{
	unsigned int	res;
	long int	     num;

	num = (unsigned long int)b;
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

int		ft_puthex(int n)
{
	unsigned int	num;
	int				rtn;
    int             res;

	rtn = ft_count_hex(n);
	num = n;
	if (num < 16)
    { 
        if (num < 10)
		    ft_putchar(num + '0');
        else
            ft_putchar(num - 10 + 'A');
    }
	else
	{
		ft_putnbr(num / 16);        
        ft_putnbr(num % 16);

	}
	return (rtn);
}