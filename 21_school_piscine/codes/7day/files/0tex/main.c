/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 20:27:18 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/13 13:14:08 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main()
{
	char    arr[] = "Hello World!";
	
	printf("arr = %s\n", arr);
	printf("ft = %s\n", ft_strdup(arr));
	return (0);
}
