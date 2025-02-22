/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 13:11:19 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/21 15:42:38 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	size_t				i;
	int					sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		if ((str[i] == '-' && str[i + 1] == '+') \
				|| (str[i] == '+' && str[i + 1] == '-'))
			return (0);
		sign = (str[i] == '-') ? -1 : 1;
		i = (str[i] == '+' || str[i] == '-') ? i + 1 : i;
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i++] - '0';
		if (res >= 9223372036854775807)
			return (sign == 1 ? -1 : 0);
		break ;
	}
	return ((int)(res * sign));
}
