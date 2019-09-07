/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 13:11:19 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:34:14 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	unsigned int	res;
	int				i;
	int				sign;

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
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i++] - '0';
		break ;
	}
	return (res * sign);
}

int	main(void)
{
	char	*str;
	int		nb;
	
	str = "\t\n\r\v  -+0254";
	nb = ft_atoi(str);
	printf("ft = %d.\natoi = %d.\n", nb, atoi(str));
	return (0);
}
