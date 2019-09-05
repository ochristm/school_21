/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:27:06 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/12 19:50:34 by ochristm         ###   ########.fr       */
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

int			main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			ft_print_params(str);
			i++;
		}
	}
	return (0);
}
