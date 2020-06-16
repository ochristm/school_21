/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 12:24:52 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 17:28:47 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int *tab;
	int *res;

	if (start > end)
		tab = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		tab = (int *)malloc(sizeof(int) * (end - start) + 1);
	if (tab == NULL)
		return (NULL);
	res = tab;
	while (end != start)
	{
		*tab = end;
		tab++;
		end += (end > start) ? -1 : 1;
	}
	*tab = end;
	return (res);
}

int	main(void)
{
	int start;
	int end;
	int *tab;

	start = -1;
	end = 2;
	tab = ft_rrange(start, end);
	printf("start = %d, end = %d.\n", start, end);
	if (!tab)
		printf("NULL\n");
	else
	{
		printf("tab = [");
		while (*tab != start)
		{
			printf("%d, ", *tab);
			tab++;
		}
		printf("%d].\n", *tab);
	}
	return (0);
}
