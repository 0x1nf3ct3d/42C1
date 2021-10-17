#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	*str_init(char const *s, char c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * i + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

char    **ft_split(char const *s, char c)
{
        size_t	i;
	size_t	len;
	char	**ptr;

	if (!s)
		return (NULL);
	len = word_count(s, c);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (s[0] == c)
			s++;
		if (!(ptr[i] = str_init(s, c)))
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
