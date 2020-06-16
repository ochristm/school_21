/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:33:11 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/25 17:39:38 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int i;
	int max_v;

	i = 0;
	max_v = 0;
	if (!tab)
		return (0);
	while (len--)
	{
		if (tab[i] > max_v)
			max_v = tab[i];
		i++;
	}
	return (max_v);
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int i;

	i = 0;
	printf("tab = ");
	while (i <= 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf(".\n");
	printf("max of tab = %d.\n", max(tab, i));
	return (0);
}
