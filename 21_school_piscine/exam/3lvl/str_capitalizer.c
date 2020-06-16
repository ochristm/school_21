/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 17:43:26 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 18:47:36 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ltr(char *str)
{
	if (*str == ' ' || *str == '\t')
		return (1);
	return (0);
}

void	str_cap(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	i++;
	while (str[i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (ft_ltr(&str[i - 1])))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char *av[])
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			str_cap(av[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
