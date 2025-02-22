/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:06:50 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/21 15:07:58 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*strsub;

	if (len + 1 == 0)
		return (NULL);
	i = 0;
	if (!(strsub = (char *)malloc(sizeof(char) * len + 1)) || !s)
		return (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}
