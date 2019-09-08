/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:08:50 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/08 18:09:45 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(int n, int base)
{
	size_t len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0 && base == 10)
		len++;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	n_len;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = ft_nlen(n, 10);
	if (!(str = (char *)malloc(sizeof(char) * (n_len + 1))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '0';
		n = -n;
		i++;
	}
	while (i < n_len--)
	{
		str[n_len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
