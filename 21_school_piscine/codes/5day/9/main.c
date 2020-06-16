/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:49:31 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 13:17:05 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char	str[] = "HELLO8gGHTHtg7 89jjh RFC";
	char	*res;

	printf("str = %s.\n", str);
	res = ft_strlowcase(str);
	printf("res = %s.\n", res);
	return (0);
}
