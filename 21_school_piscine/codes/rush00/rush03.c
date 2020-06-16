/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstacy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 14:39:04 by mstacy            #+#    #+#             */
/*   Updated: 2019/06/09 20:22:00 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	positive(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (++b <= y)
	{
		while (++a <= x)
		{
			if (((b == 1) && (a == 1)) || ((b == y) && (a == 1)))
				ft_putchar('A');
			else if (((b == 1) && (a == x)) || ((b == y) && (a == x)))
				ft_putchar('C');
			else if (((b == 1) && ((a < x) && (a > 1))) \
					|| ((b == y) && ((a < x) && (a > 1))) \
					|| (((a == x) || (a == 1)) && ((b < y) && (b > 1))))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		a = 0;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
		positive(x, y);
}
