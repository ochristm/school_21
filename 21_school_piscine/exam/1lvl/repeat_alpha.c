/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:43:17 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 16:27:21 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_letter(int av)
{
	if ((av >= 'A' && av <= 'Z') \
			|| (av >= 'a' && av <= 'z'))
		return (1);
	return (0);
}

int	main(int ac, char *av[])
{
	int i;
	int ltr;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			ltr = 0;
			if (is_letter(av[1][i]) == 1)
			{
				if ((av[1][i] >= 'A' && av[1][i] <= 'Z'))
					ltr = av[1][i] - 63;
				else
					ltr = av[1][i] - 95;
				while (--ltr)
					write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
