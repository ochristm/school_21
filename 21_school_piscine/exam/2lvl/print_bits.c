/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:20:07 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:28:07 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int		main(void)
{
	unsigned char	octet;
	unsigned char	bit;
	int				i;

	i = 8;
	octet = 45;
	print_bits(octet);
	write(1, "\noctet:\n", 8);
	while (--i)
	{
		bit = (octet >> i & 1) + '0';
		write(1, "i", 1);
		write(1, &bit, 1);
		write(1, "\n", 1);
	}
	return (0);
}
