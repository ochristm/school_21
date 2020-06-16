/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:24:52 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/08 21:52:24 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rush(int x, int y)
{
	int	cnt_x;
	int	cnt_y;

	cnt_x = 1;
	cnt_y = 1;
	while (cnt_x != x)
	{
		while (cnt_y != y)
		{
			if (((cnt_y == 1) && (cnt_x == 1)) || ((cnt_y == y) && (cnt_x == 1)))
			{
				ft_putchar('A');
			}
			else if (((cnt_y == 1) && (cnt_x == x)) || ((cnt_y == y) && (cnt_x == x)))
			{
				ft_putchar('C');
			}
			else if (((cnt_y == 1) && ((cnt_x < x) && (cnt_x > 1))) \
					|| ((cnt_y == y) && ((cnt_x < x) && (cnt_x > 1))) \
					|| (((cnt_x == x) || (cnt_x == 1)) && ((cnt_y < y) && (cnt_y > 1))))
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			cnt_y++;
		}
		cnt_x++;
		ft_putchar('\n');
	}
}

int		main(void)
{
	rush(5, 3);
	return (0);
}
