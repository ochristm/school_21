/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:35:30 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 11:58:02 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*str = "string example";
	char	buf[32];
	
	buf[0] = '\0';
	printf("string: \"%s\"\n", str);
	printf("buffer before copying: \"%s\"\n", buf);
	ft_strcpy(buf, str);
	printf("buffer after copying: \"%s\"\n", buf);
}
