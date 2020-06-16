/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 19:44:01 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:31:41 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;
	int		slen;

	len = 0;
	while (str[len])
		len++;
	slen = len;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	str[slen + 1] = '\0';
	return (str);
}

int			main(void)
{
	char	str[100] = "12345";
	char	*res;

	printf("str before = %s.\n", str);
	res = ft_strrev(str);
	printf("str after = %s.\n", res);
	return (0);
}
