/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:57:53 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/13 16:50:42 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *ret;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	else
	{
		ret = (int *)malloc(sizeof(int) * (max - min));
		i = 0;
		while (i < (max - min))
		{
			ret[i] = min + i;
			i++;
		}
		*range = ret;
		return (i);
	}
}
