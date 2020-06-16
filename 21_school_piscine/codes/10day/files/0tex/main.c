/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:30:12 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 19:49:23 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//#include "includes/"

int	main(void)
{
	int		a;
	int		b;
	char	string1[20];
	char	string2[20];

	a = 56;
	b = 45;
	printf("ft_swap:\n");
	printf("old a,b = %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("new a,b = %d, %d\n", a, b);
	printf("ft_strcmp:\n");
	strcpy(string1, "Heloooo");
	strcpy(string2, "Helloo");
	printf("string1 = %s.\n", string1);
	printf("string2 = %s.\n", string2);
	printf("Strcmp = %d.\n", strcmp(string1, string2));
	printf("FT_strcmp = %d.\n", ft_strcmp(string1, string2));
	printf("ft_putchar:\n");
	printf("printf printed = y\n");
	printf("ft_putchar printed = ");
	ft_putchar('y');
	ft_putchar('\n');
	printf("ft_strlen:\n");
	printf("string to count = %s.\n", string1);
	printf("strlen = %lu.\n", strlen(string1));
	printf("ft_strlen = %lu.\n", strlen(string1));
	printf("ft_putstr:\n");
	printf("printf printed = %s.\n", string1);
	printf("ft_putstr = ");
	ft_putstr(string1);
	printf("\n");

	
	return (0);
}
