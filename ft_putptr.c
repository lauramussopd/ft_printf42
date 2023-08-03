#include "ft_printf.h"

int		ft_putptr(void *p)
{
	unsigned long long	pointer;
	int				rtn;

	rtn = 0;
	pointer = (unsigned long long)p;

	if (write(1, "0x", 2) != 2)
		return (-1)
	rtn = ft_puthex(pointer); stessa funione ma che accetta long long
	if (rtn == -1)
		return (-1);
	return (rtn);
}