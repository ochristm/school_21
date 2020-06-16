/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:18:09 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/08 19:38:04 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main(void)
{
	int nb;
	int power;
	int res;

	nb = -2;
	power = 11;
	res = ft_iterative_power(nb, power);
	printf("%d", res);
	return (0);
}
