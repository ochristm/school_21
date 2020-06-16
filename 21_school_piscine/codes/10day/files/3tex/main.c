/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 14:34:08 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 15:20:24 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_putstr(char *str);
int	ft_any(char **tab, int (*f)(char*));

int	main()
{
	int i;
	char *arr[] = {"test1", "test22", "test333", "test4444", 0};
	int (*f)(char*);
	
	f = &ft_putstr;
	i = 0;
	while (arr[i])
	{
		printf("arr[%d] = %s, ", i, arr[i]);
		i++;
	}
//	printf("arr[%d] = %s, ", i, arr[1]);
	printf("\n");
	printf("res = %d.", ft_any(arr, f));
	return (0);
}
