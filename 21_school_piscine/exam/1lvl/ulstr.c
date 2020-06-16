/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:12:05 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 18:27:07 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_up_ltr(int av)
{
	if (av >= 'A' && av <= 'Z')
		return (1);
	return (0);
}

int	is_lw_ltr(int av)
{
	if (av >= 'a' && av <= 'z')
		return (1);
	return (0);
}

int	main(int ac, char *av[])
{
	int i;
	int mkup;
	int mkdwn;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			mkup = av[1][i] - 32;
			mkdwn = av[1][i] + 32;
			if (is_up_ltr(av[1][i]) == 1)
				write(1, &mkdwn, 1);
			else if (is_lw_ltr(av[1][i]) == 1)
				write(1, &mkup, 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
