/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:17:43 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/09 20:15:43 by ochristm         ###   ########.fr       */
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
			if (((a == x) || (a == 1)) && ((b == y) || (b == 1)))
				ft_putchar('o');
			else if (((b == y) || (b == 1)) && ((a != 1) && (a != x)))
				ft_putchar('-');
			else if (((b != 1) && (b != y)) && ((a == x) || (a == 1)))
				ft_putchar('|');
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
