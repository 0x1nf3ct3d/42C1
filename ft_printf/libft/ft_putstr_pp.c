#include "libft.h"

void	ft_pustr_pp(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*count = *count + 6;
		return;
	}
	while (s[i])
	{
		ft_putchar_pp(s[i], count);
		i++;
	}
}
