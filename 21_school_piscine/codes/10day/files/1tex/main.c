/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:25:39 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 12:09:10 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char str);
void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void(*f)(int));

int	main()
{
	int	tab[4] = {13, 54, 78, 3};
	void	(*f)(int);

	f = &ft_putnbr;
	ft_foreach(tab, 4, f);
	return (0);
}
