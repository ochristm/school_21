/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:13:19 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/09 19:15:11 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s;

	s = NULL;
	if (s1 && s2)
	{
		s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!s)
			return (NULL);
		ft_strcpy(s, s1);
		ft_strcat(s, s2);
	}
	return (s);
}
