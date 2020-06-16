/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:36:08 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/13 15:44:19 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int min;
	int max;
	int i;
	int *arr2;

	min = 2;
	max = 13;
	i = 0;
	arr2 = ft_range(min, max);
	if (arr2 == NULL)
		printf("NULL\n");
	else
	{
		printf("min = %d, max = %d (not included)\n", min, max);
		while (arr2[i] < (max + 3))
		{
			printf("arr2[%d] = %d\n", i, arr2[i]);
			i++;
		}
	}
	return (0);
}
