/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:10:46 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 15:37:20 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	char *str;
	char c;

	str = "0123456789abcdef";
	if (n == 0)
		write(1, "0", 1);
	else
	{
		if (n >= 16)
			print_hex(n / 16);
		if (n % 16 < 10)
			c = (n % 16) + 48;
		else
			c = (n % 16) - 10 + 97;
		write(1, &c, 1);
	}
}

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

int		main(int ac, char *av[])
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
