/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 20:42:16 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/13 13:56:51 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = ((char*)malloc(sizeof(char) * len + 1));
	if (str == NULL)
		return (NULL);
	len = 0;
	while (*(src + len) != '\0')
	{
		*(str + len) = *(src + len);
		len++;
	}
	*(str + len) = '\0';
	return (str);
}
