/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 19:45:20 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/23 22:42:00 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_output.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void	check(int nb, int cnt, int row, int column)
{
	if (cnt != 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(nb);
	ft_putstr("] ");
	ft_putstr("[");
	ft_putnbr(row);
	ft_putstr("] ");
	ft_putstr("[");
	ft_putnbr(column);
	ft_putstr("]");
}

void	ft_stdout(int k, int row, int column)
{
	int cnt;

	cnt = 0;
	if (k == 0 || row <= 0 || column <= 0)
	{
		ft_putstr("aucune\n");
		return ;
	}
	if ((k & 1) == 1)
		check(0, cnt++, row, column);
	if ((k & 2) == 2)
		check(1, cnt++, row, column);
	if ((k & 4) == 4)
		check(2, cnt++, row, column);
	if ((k & 8) == 8)
		check(3, cnt++, row, column);
	if ((k & 16) == 16)
		check(4, cnt++, row, column);
	ft_putstr("\n");
}
