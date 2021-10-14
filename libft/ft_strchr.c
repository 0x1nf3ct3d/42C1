/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:31:45 by hsabir            #+#    #+#             */
/*   Updated: 2021/10/14 13:03:35 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*sptr;

	sptr = (char *)s;
	while (*sptr != c)
	{
		if (*sptr == '\0')
		{
			return (NULL);
		}
		sptr++;
	}
	return (sptr);
}
