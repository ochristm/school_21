/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:08:45 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/08 12:12:15 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	void	*ptr;

	if (!(ptr = (unsigned char *)malloc(size)))
		return (NULL);
	str = (char *)ptr;
	while (size--)
		*str++ = '\0';
	return (ptr);
}
