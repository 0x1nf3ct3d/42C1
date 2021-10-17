#include "libft.h"

int	ft_pow(int n)
{
	size_t	p;

	p = 1;
	while (n-- > 0)
		p *= 10;
	return (p);
}

int	ft_count(int n)
{
	size_t	tmp;
	size_t	p;

	p = 1;
	if (n < 0)
		tmp = -n;
	else
		tmp = n;
	while (tmp >= 10)
	{
		tmp /= 10;
		p++;
	}
	return (p);
}

void	ft_makestr(char *cp, int *i, size_t tmp, int pow)
{
	while (((pow--) - 1) >= 0)
	{
		cp[(*i)++] = '0' + (tmp / ft_pow(pow));
		tmp %= ft_pow(pow);
	}
	cp[(*i)] = '\0';
}

char	*ft_itoa(int n)
{
	unsigned int	tmp;
	char		*cp;
	size_t		pow;
	int		i;

	pow = ft_count(n);
	i = 0;
	if (n < 0)
	{
		tmp = -n;
		cp = (char *)malloc(sizeof(char) * (pow + 2));
		if (!cp)
			return (NULL);
		cp[i++] = '-';
	}
	else
	{
		tmp = n;
		cp = (char *)malloc(sizeof(char) * (pow + 1));
		if (!cp)
			return (NULL);
	}
	ft_makestr(cp, &i, tmp, pow);
	return (cp);
}
