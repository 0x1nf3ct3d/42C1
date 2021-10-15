/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:43:16 by hsabir            #+#    #+#             */
/*   Updated: 2021/10/15 13:49:33 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	count;
	char	*copy;
	
	copy = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (start > i)
	{
		if(!copy)
			return (NULL);
		copy[0] = 0;
		return (copy);
	}
	if (!copy)
		return (NULL);
	i = start;
	count = 0;
	while (s[i] && count < len)
	{
		copy[count] = s[i];
		count++;
		i++;
	}
	copy[count] = '\0';
	return (copy);
}
