/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:23:37 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 17:36:11 by ochristm         ###   ########.fr       */
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
			mvup = av[1][i] + 13;
			mvdwn = av[1][i] - 13;
			if ((av[1][i] >= 'A' && av[1][i] <= 'M') \
					|| (av[1][i] >= 'a' && av[1][i] <= 'm'))
				write(1, &mvup, 1);
			else if ((av[1][i] >= 'N' && av[1][i] <= 'Z') \
					|| (av[1][i] >= 'n' && av[1][i] <= 'z'))
				write(1, &mvdwn, 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
