/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:30:41 by hsabir            #+#    #+#             */
/*   Updated: 2021/10/14 16:17:56 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	negative;
	int	res;
	int	i;

	res = 0;
	i = 0;
	negative = 0;
	while ((str[i] > 8 && str[i] < 20) || str[i] == ' ')
		i++;
	while ((str[i] == '-' ) || (str[i] == '+'))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += ((int)str[i] - 48);
		i++;
	}
	if (negative % 2 != 0)
		res = res * -1;
	return (res);
}
