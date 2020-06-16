/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 17:27:53 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/23 22:50:57 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int		ft_check_rush03(char *str, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (*str != ft_elem_check_rush03(i, j, x, y))
				return (0);
			str++;
			i++;
		}
		i = 0;
		j++;
	}
	return (8);
}

char	ft_elem_check_rush03(int i, int j, int x, int y)
{
	char	c;

	if (i == x - 1)
		c = '\n';
	else if ((i == 0) && (j == 0 || j == y - 1))
		c = 'A';
	else if (((j == 0) && ((i < (x - 2)) && (i > 0))) \
			|| (((i == 0) || (i == (x - 2))) && ((j < (y - 1)) && (j > 0))) \
			|| ((j == (y - 1)) && ((i < (x - 2)) && (i > 0))))
		c = 'B';
	else if ((i == x - 2) && (j == 0 || j == y - 1))
		c = 'C';
	else
		c = ' ';
	return (c);
}
