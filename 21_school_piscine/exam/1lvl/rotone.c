/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:36:56 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 17:46:09 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int i;
	int mvup;
	int mvdwn;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			mvup = av[1][i] + 1;
			mvdwn = av[1][i] - 25;
			if ((av[1][i] >= 'A' && av[1][i] <= 'Y') \
					|| (av[1][i] >= 'a' && av[1][i] <= 'y'))
				write(1, &mvup, 1);
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
				write(1, &mvdwn, 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
