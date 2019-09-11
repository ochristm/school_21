/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:41:04 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/09 19:19:01 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *ucs1;
	unsigned char *ucs2;

	if (!n)
		return (0);
	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while ((*ucs1 && (*ucs1 == *ucs2)) && --n)
	{
		if (*ucs1 != *ucs2)
			return (*ucs1 - *ucs2);
		ucs1++;
		ucs2++;
	}
	return (*ucs1 - *ucs2);
}
