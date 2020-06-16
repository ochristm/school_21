/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:29:30 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 21:36:08 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_output.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	if (nb >= 10)
		ft_putnbr(nb / 10);
	if (nb <= -10)
		ft_putnbr(-(nb / 10));
	if (nb >= 0)
		ft_putchar('0' + nb % 10);
	else
		ft_putchar('0' + (10 - nb % 10) % 10);
}
