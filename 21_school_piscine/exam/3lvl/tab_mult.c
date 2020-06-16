/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:07:54 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 16:14:44 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int tmp;

	i = 0;
	sign = 1;
	tmp = 0;
	while (str[i])
	{
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		if ((str[i] == '+' && str[i + 1] == '-') \
				|| (str[i] == '-' && str[i + 1] == '+'))
			return (0);
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			tmp = tmp * 10 + str[i++] - '0';
		break ;
	}
	return (tmp * sign);
}

void	ft_putnbr(int nb)
{
	long int	nbl;
	char		c;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl;
	}
	if (nbl < 10)
	{
		c = nbl + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
}

int		main(int ac, char *av[])
{
	int i;
	int nbr;

	i = 1;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
