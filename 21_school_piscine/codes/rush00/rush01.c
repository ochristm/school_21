/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:19:48 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/09 20:27:10 by ochristm         ###   ########.fr       */
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
			if (((b == 1) && (a == 1)) || ((b == y) && (a == x)))
				ft_putchar('/');
			else if (((b == y) && (a == 1)) || ((b == 1) && (a == x)))
				ft_putchar('\\');
			else if (((b == 1) && ((a < x) && (a > 1))) \
					|| ((b == y) && ((a < x) && (a > 1))) \
					|| (((a == x) || (a == 1)) && ((b < y) && (b > 1))))
				ft_putchar('*');
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
