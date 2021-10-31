#include "ft_printf.h"

void	ft_putchar_pp(char c, int *count)
{
	write(1, &c, 1);
	*count = *count + 1;
}
