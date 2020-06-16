/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:45:15 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/12 19:53:49 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_rev_params(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc > 1)
	{
		i = argc - 1;
		while (i >= 1)
		{
			str = argv[i];
			ft_rev_params(str);
			i--;
		}
	}
	return (0);
}
