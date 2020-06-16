/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:22:35 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 11:41:19 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int maxv;
	int nb1;
	int nb2;
	int i;
	int big;

	if (ac == 3)
	{
		i = 1;
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		if (nb1 > nb2)
			big = nb1;
		else
			big = nb2;
		while (big >= i)
		{
			if ((nb1 % i == 0) && (nb2 % i == 0))
				maxv = i;
			i++;
		}
		printf("%d", maxv);
	}
	printf("\n");
	return (0);
}
