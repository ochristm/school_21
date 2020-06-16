/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:02:17 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:34:43 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		len;

	len = 0;
	while (src[len])
		len++;
	res = ((char*)malloc(sizeof(char) * len));
	if (!res || !src)
		return (NULL);
	len = 0;
	while (*(src + len) != '\0')
	{
		*(res + len) = *(src + len);
		len++;
	}
	*(res + len) = '\0';
	return (res);
}

int		main(void)
{
	char *src;
	
	src = "Hello!";
	printf("src = %s\n", src);
	printf("res = %s\n", ft_strdup(src));
	return (0);
}
