/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:12:22 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 16:28:17 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n);

//int	main(void)
//{
//	char *str = "copied string";
//	char buf[15];
//	//char *res;
//
//	printf("string: \"%s\"\n\n", str);
//	printf("buffer before copy: \"%s\"\n", buf);
	//ft_strncpy(buf, str, sizeof(buf) + 8);
//	printf("buffer after copy: \" %s \".", ft_strncpy(buf, str, sizeof(buf) + 8));
//	return (0);
//}

int	main(void)
{
	char *src;
	char dest[7] = "IIIIII";
	char ft_dest[7] = "IIIIII";
	char *res;
	int i;
	char c;
	unsigned int n;

	n = 6;
	src = "EEE";
	printf("   Strcpy dest = %s, src = %s ~ dest = ", dest, src);
	res = strncpy(dest, src, n);
	printf("%s\n", res);

	while (i <= 6)
	{
		c = *(dest + i);
		if (c != '\0')
			putchar(c);
		else
			putchar('0');
		i++;
	}
	printf("\n");
	src = "EEE";
	printf("FT_Strcpy dest = %s, src = %s ~ dest = ", ft_dest, src);
	res = ft_strncpy(ft_dest, src, n);
	printf("%s\n", res);
	i = 0;
	printf("In Memory on adress of dest[0..6] = ");
	while (i <= 6 )
	{
		c = *(ft_dest + i);
		if (c != '\0')
			putchar(c);
		else
			putchar('0');
		i++;
	}
	printf("\n");
	return (0);
}
