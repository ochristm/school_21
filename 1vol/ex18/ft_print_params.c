/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:45:12 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/05 20:45:16 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_print_params(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int			main(int ac, char **av)
{
	char	*str;
	int		i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			str = av[i];
			ft_print_params(str);
			i++;
		}
	}
	return (0);
}
