#include "libft.h"

void	ft_put_long_nbr(long int n, int *count)
{
	char	c;

	if (n < 0)
		n = LONG_MAX -n;
	if (n >= 10)
		ft_put_long_nbr(n / 10, count);
	c = n % 10 + '0';
	ft_putchar_pp(c, count);
}
