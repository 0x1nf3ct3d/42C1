/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:44:28 by hsabir            #+#    #+#             */
/*   Updated: 2021/10/12 12:47:26 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char c;
	c = 'A';
	if(ft_isalpha(c) == 1)
	{
		printf("It is indeed alpha!");
	}
	else
	{
		printf("Nah, it is not!");
	}
}
