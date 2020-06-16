/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:33:00 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 17:15:30 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[4]={"abc"}, dest[10]={"def"};
	char *res;

	printf("src = %s\n", src);
	printf("dest before = %s.\n", dest);
	res = ft_strcat(dest, src);
	printf("dest after = %s.\n", res);
	return (0);
}
