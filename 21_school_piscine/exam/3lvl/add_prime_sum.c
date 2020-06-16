/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 10:04:22 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 16:22:31 by ochristm         ###   ########.fr       */
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

int		is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int ac, char *av[])
{
	int nb;
	int sum;

	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		sum = 0;
		while (nb > 0)
			if (is_prime(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
}
