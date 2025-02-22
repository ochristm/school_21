/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:48:35 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 19:24:24 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int i;
	int ltr;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			ltr = av[1][i];
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ltr = 'Z' - av[1][i] + 'A';
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ltr = 'z' - av[1][i] + 'a';
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
