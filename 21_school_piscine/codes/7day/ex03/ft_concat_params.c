/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:05:36 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/13 17:22:49 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *str;
	int i;
	int j;
	int cnt;

	cnt = 0;
	while (cnt < argc)
	{
		j = 0;
		while (argv[j])
		{
			cnt++;
			j++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (cnt + 1));
	i = 0;
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1]);
		i++;
	}
	return (str);
}
