/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:35:31 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 15:40:41 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int a;
	int b;

	a = 56;
	b = 14;
	printf("a = %d, b = %d. Before.\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d. After.\n", a, b);
	return (0);
}
