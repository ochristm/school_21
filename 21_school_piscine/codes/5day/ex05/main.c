/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 18:13:54 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 18:22:06 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "Hello";
	char to_find[] = "el";

	printf("s1 = %s, s2 = %s.\n", str, to_find);
	printf("res = %s./n", ft_strstr(str, to_find));
	return (0);
}
