/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush04.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:10:34 by ahyman            #+#    #+#             */
/*   Updated: 2019/06/23 22:52:45 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int		ft_check_rush04(char *str, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (*str != ft_elem_check_rush04(i, j, x, y))
				return (0);
			str++;
			i++;
		}
		i = 0;
		j++;
	}
	return (16);
}

char	ft_elem_check_rush04(int i, int j, int x, int y)
{
	char	c;

	if (i == x - 1)
		c = '\n';
	else if ((i == 0 && j == 0) || (i == x - 2 && j == y - 1 && i * j > 0))
		c = 'A';
	else if ((i == 0 && j == y - 1) || (i == x - 2 && j == 0))
		c = 'C';
	else if (j == 0 || j == y - 1 || i == 0 || i == x - 2)
		c = 'B';
	else
		c = ' ';
	return (c);
}
