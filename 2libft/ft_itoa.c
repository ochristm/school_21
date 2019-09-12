/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:06:41 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/12 18:31:25 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int nb)
{
	int len;

	len = 0;
	len = (nb <= 0 ? 1 : 0);
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*nch;
	int		sign;
	int		len;
	int		nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nch = NULL;
	sign = (n < 0 ? 1 : 0);
	len = ft_intlen(n);
	nb = (n < 0 ? -n : n);
	if (!(nch = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	nch[len--] = '\0';
	while (len >= 0)
	{
		nch[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	if (sign == 1)
		nch[0] = '-';
	return (nch);
}
