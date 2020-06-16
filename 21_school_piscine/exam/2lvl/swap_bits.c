/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:03:12 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/25 15:34:21 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int				main(void)
{
	unsigned char octet;

	octet = 65;
	printf("bit = %u.\n", octet);
	printf("revbit = %u.\n", swap_bits(octet));
	return (0);
}
