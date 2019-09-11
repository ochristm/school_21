/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:27:03 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/11 20:27:58 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (ft_strchr(src, c) == NULL)
		return (NULL);
	while (*s)
		s++;
	while (*s != c)
		s--;
	return ((char*)s);
}
