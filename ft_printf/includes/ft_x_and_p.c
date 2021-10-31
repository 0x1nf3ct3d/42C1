#include "ft_printf.h"

static int	base_converter(int nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char	*ft_ptraddr(unsigned long int value, unsigned long int base)
{
	int			i;
	unsigned long int	tmp;
	char			*str;

	i = 0;
	tmp = value;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		tmp = value % base;
		str[i] = base_converter(tmp);
		value /= base;
		i--;
	}
	free(str);
	return (str);
}

char	*ft_hexnbr(unsigned int value, unsigned int base)
{
	int			i;
	unsigned long int	tmp;
	char			*str;

	i = 0;
	tmp = value;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		tmp = value % base;
		str[i] = base_converter(tmp);
		value /= base;
		i--;
	}
	free(str);
	return (str);
}
