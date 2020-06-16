/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:02:12 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 17:26:36 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strstr(char *str, char *to_find);

int	main()
{
	char *string1="needle in a haystack";
	char *string2="hay";
	
	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	printf("res of Strstr = %s.\n", strstr(string1,string2));
	printf("res of FT_strstr = %s.\n", strstr(string1,string2));
	return (0);
}
