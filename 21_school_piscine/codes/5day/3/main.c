/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:33:00 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/19 13:44:47 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src = "Hello, World!";
	char buf[32];

	buf[0] = '\0';
	printf("src = %s\n", src);
	printf("buffer before copying: \"%s\"\n", buf);
	ft_strcpy(buf, src);
	printf("buffer after copying: \"%s\"\n", buf);
	return (0);
}
