/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:47:35 by gcody             #+#    #+#             */
/*   Updated: 2019/06/22 21:17:46 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*res;

	i = 0;
	while (src[i] != '\0')
		i++;
	res = (char *)malloc(i + 1);
	if (res == NULL)
		return (res);
	while (i >= 0)
	{
		res[i] = src[i];
		i--;
	}
	return (res);
}
