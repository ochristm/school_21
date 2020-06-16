/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:13:41 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 18:30:23 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
//	unsigned char *p1;
//	unsigned char *p2;
//
//	p1 = (char *)s1;
//	p2 = (char *)s2;
//	while (*p1 != '\0')
//	{
//		if ((*p2 == '\0') || (*p1 > *p2))
//			return (1);
//		if (*p2 > *p1)
//			return (-1);
//		p1++;
//		p2++;
//	}
//	if (*p2 != '\0')
//		return (-1);
//	return (0);
}
