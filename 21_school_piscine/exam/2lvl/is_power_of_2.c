/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:39:27 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/25 15:57:05 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s is power of 2?\n", av[1]);
		is_power_of_2(atoi(av[1])) ? printf("Yes\n") : printf("No\n");
	}
	return (0);
}
