/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:34:26 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 19:18:11 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str)
{
	int				i;
	int				sign;
	unsigned int	temp;

	temp = 0;
	i = 0;
	sign = 1;
	while (((str[i] >= '\t') && (str[i] <= '\r')) || (str[i] == ' '))
		i++;
	if (str[i] == '+' && str[i + 1] == '-')
		return (0);
	if ((str[i] == '-' && str[i + 1] == '+'))
		return (0);
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		temp = temp * 10 + str[i] - '0';
		i++;
	}
	return (temp * sign);
}
