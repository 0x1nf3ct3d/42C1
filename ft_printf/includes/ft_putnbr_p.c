#include "ft_printf.h"

void	ft_putnbr_p(int n, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count = *count + 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_pp('-', count);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_p(n / 10, count);
	c = n % 10 + '0';
	ft_putchar_pp(c, count);
}
