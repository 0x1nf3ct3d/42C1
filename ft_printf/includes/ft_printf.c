#include "ft_printf.h"

void	print_var(const char *s, va_list ap, int i, int *count)
{
	if (s[i + 1] == 's')
		ft_putstr_pp((char *)va_arg(ap, const char *), count);
	else if (s[i + 1] == 'c')
		ft_putchar_pp((int)va_arg(ap, int), count);
	else if (s[i + 1] == 'i' || s[i + 1] == 'd')
		ft_putnbr_p((int)va_arg(ap, int), count);
	else if (s[i + 1] == '%')
		ft_putchar_pp('%', count);
	else if (s[i + 1] == 'x')
		ft_putstr_pp(ft_hexnbr(va_arg(ap, int), 16), count);
	else if (s[i + 1] == 'X')
		ft_putstr_pp(ft_str_toupper(ft_hexnbr(va_arg(ap, int), 16)), count);
	else if (s[i + 1] == 'u')
		ft_put_long_nbr((unsigned int)va_arg(ap, unsigned int), count);
	else if (s[i + 1] == 'p')
	{
		ft_putstr_pp("0x", count);
		ft_putstr_pp(ft_ptraddr((unsigned long int)va_arg(ap, void *), 16), count);
	}
}

int	ft_printf(const char *s, ...)
{
	int	i;
	va_list	ap;
	int	count;

	va_start (ap, s);
	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != '%')
			ft_putchar_pp(s[i], &count);
		else
		{
			print_var(s, ap, i, &count);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
