/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:00:20 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/18 10:32:46 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_arr;

	i = 0;
	new_arr = (int *)malloc(sizeof(int) * length);
	if (!new_arr)
		return (NULL);
	while (i < length)
	{
		new_arr[i] = f(tab[i]);
		i++;
	}
	return (new_arr);
}
