/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 12:24:52 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 15:01:55 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
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
	while (start != end)
	{
		*tab = start;
		tab++;
		start += (start > end) ? -1 : 1;
	}
	*tab = start;
	return (res);
}

int	main(void)
{
	int start;
	int end;
	int *tab;

	start = 0;
	end = -3;
	tab = ft_range(start, end);
	printf("start = %d, end = %d.\n", start, end);
	if (!tab)
		printf("NULL\n");
	else
	{
		printf("tab = [");
		while (*tab != end)
		{
			printf("%d, ", *tab);
			tab++;
		}
		printf("%d].\n", *tab);
	}
	return (0);
}
