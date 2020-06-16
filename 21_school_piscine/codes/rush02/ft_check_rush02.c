/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:31:24 by ahyman            #+#    #+#             */
/*   Updated: 2019/06/23 22:10:10 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int		ft_check_rush02(char *str, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (*str != ft_elem_check_rush02(i, j, x, y))
				return (0);
			str++;
			i++;
		}
		i = 0;
		j++;
	}
	return (4);
}

char	ft_elem_check_rush02(int i, int j, int x, int y)
{
	char	c;

	if (i == x - 1)
		c = '\n';
	else if ((i == 0 && j == 0) || (i == x - 2 && j == 0))
		c = 'A';
	else if ((i == 0 && j == y - 1) || (i == x - 2 && j == y - 1))
		c = 'C';
	else if (i == 0 || i == x - 2 || j == 0 || j == y - 1)
		c = 'B';
	else
		c = ' ';
	return (c);
}
