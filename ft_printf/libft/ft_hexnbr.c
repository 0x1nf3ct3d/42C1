#include "libft.h"

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
		str[i] = ft_base_converter(tmp);
		value /= base;
		i--;
	}
	free(str);
	return (str);
}
