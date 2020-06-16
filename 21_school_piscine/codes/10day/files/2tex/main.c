/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:25:39 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 13:43:33 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char str);
int	ft_putnbr(int nb);
void	ft_map(int *tab, int length, int (*f)(int));

int	main()
{
	int	tab[4] = {13, 54, 78, 3};
	//int arr[] = {};
	int	(*f)(int);

	f = &ft_putnbr; /*add to ft_map =  printf("arr[%d] = %d.", i, new_arr[i]); */
	ft_map(tab, 4, f);
	return (0);
}
