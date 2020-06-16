/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:32:28 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 18:40:13 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char string1[20];
	char string2[20];

	strcpy(string1, "Heloooo");
	strcpy(string2, "Helloo");
	printf("string1 = %s.\n", string1);
	printf("string2 = %s.\n", string2);
	printf("Strcmp = %d.\n", strcmp(string1, string2));
	printf("FT_strcmp = %d.\n", ft_strcmp(string1, string2));
}
