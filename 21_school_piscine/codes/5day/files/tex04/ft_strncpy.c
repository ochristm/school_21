/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:31:09 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 15:52:05 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	if (n > *src)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	//while (src[i] <= n)
	//{
	//	*dest++ = *src++;
	//	i++;
	//}
	//if (n > *src)
	//	*dest++ = '\0';
	return (dest);
}
