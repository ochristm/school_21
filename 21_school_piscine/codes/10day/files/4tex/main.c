/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 14:34:08 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 17:27:41 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_putstr(char *str);
int	ft_count_if(char **tab, int (*f)(char*));

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
	printf("res = %d.", ft_count_if(arr, f));
	return (0);
}
