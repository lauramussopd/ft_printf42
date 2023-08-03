#include "ft_printf.h"

int		ft_putptr(unsigned long long p)
{
	int				rtn;

	rtn = 0;

	if (write(1, "0x", 2) != 2)
		return (-1);
			rtn = ft_puthex(p);
	if (rtn == -1)
		return (-1);
	return (rtn + 2);
}