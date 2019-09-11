/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:16:26 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/09 19:23:19 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t l)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!small[0])
		return ((char *)&big[i]);
	while (big[i] && (i < l))
	{
		while ((big[i + j] == small[j]) && small[j] && \
				((i + j) < l))
			j++;
		if (!small[j])
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	if (!small[0])
		return ((char *)&big[i]);
	return (NULL);
}
