/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:05:54 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/09 18:30:21 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
