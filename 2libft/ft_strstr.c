/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:30:33 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/21 15:25:43 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!small[0])
		return ((char *)&big[i]);
	while (big[i])
	{
		while ((big[i + j] == small[j]) && small[j])
			j++;
		if (!small[j])
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
