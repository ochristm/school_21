/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:51:25 by ahyman            #+#    #+#             */
/*   Updated: 2019/06/23 22:17:43 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int		ft_check_rush00(char *str, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (*str != ft_elem_check_rush00(i, j, x, y))
				return (0);
			str++;
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}

char	ft_elem_check_rush00(int i, int j, int x, int y)
{
	char	c;

	if (i == x - 1)
		c = '\n';
	else if ((i == 0 || i == x - 2) && (j == 0 || j == y - 1))
		c = 'o';
	else if (i == 0 || i == x - 2)
		c = '|';
	else if (j == 0 || j == y - 1)
		c = '-';
	else
		c = ' ';
	return (c);
}
