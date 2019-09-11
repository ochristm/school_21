/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:39:12 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/11 19:46:03 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t strln;

	i = 0;
	if (!src || !dst)
		return (NULL);
	strln = ft_strlen((char*)src);
	while ((i < n) && src[i])
	{
		if (i > strln)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
