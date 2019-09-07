/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:57:11 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/24 15:26:18 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int		main(void)
{
	char *src = "Hello, Jo!\n";
	char dest[12] = {};
	char *ptr;

	ptr = dest;
	printf("src = %s", src);
	printf("dest before = %s.\n", ptr);
	printf("dest after = %s", ft_strcpy(ptr, src));

	return (0);
}*/
