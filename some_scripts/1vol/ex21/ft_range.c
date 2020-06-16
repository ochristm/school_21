/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:11:30 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/05 21:11:44 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int *ret;

	if (min >= max)
		return (NULL);
	else
	{
		ret = ((int *)malloc(sizeof(int) * (max - min)));
		i = 0;
		while (i < (max - min))
		{
			ret[i] = min + i;
			i++;
		}
		return (ret);
	}
}
