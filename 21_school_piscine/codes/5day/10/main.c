/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:49:31 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 15:10:22 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[] = "salut, coMMent tu vas ? 42mots quaRAnte-deux; cinquante+et+un";
	char	*res;

	printf("str = %s.\n", str);
	res = ft_strcapitalize(str);
	printf("res = %s.\n", res);
	return (0);
}
