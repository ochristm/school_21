/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:24:25 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 18:55:07 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nbr_inbase(const char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') \
			|| (c >= 'A' && c <= ('A' + base - 10)) \
			|| (c >= 'a' && c <= ('a' + base - 10)));
}

int	last_part(const char *str, int base)
{
	int			nbr;
	int			i;

	nbr = 0;
	i = 0;
	while (str[i] && nbr_inbase(str[i], base))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * base) + (str[i] - '0');
		i++;
	}
	return (nbr);
}

int	ft_atoi_base(const char *str, int base)
{
	int			i;
	int			sign;
	int			tmp;

	i = 0;
	sign = 1;
	tmp = 0;
	if (!str[0] || (base < 2 || base > 16))
		return (0);
	while (str[i])
	{
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		if ((str[i] == '+' && str[i + 1] == '-') \
				|| (str[i] == '-' && str[i + 1] == '+'))
			return (0);
		if (str[i] == '-')
			sign *= -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		tmp = last_part(&str[i], base);
		break ;
	}
	return (tmp * sign);
}

int	main(void)
{
	const char	*str;
	int			nb;

	str = "\t\n\r\v  -0254";
	nb = ft_atoi_base(str, 16);
	printf("ft = %d.\n", nb);
	return (0);
}
