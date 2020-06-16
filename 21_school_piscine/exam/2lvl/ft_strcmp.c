/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 19:25:34 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:29:20 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char *s1;
	char *s2;
	
	s1 = "Hello!:";
	s2 = "Hello";
	printf("s1 = %s.\n", s1);
	printf("s2 = %s.\n", s2);
	printf("diff num = %d.\n", ft_strcmp(s1, s2));
	return (0);
}
