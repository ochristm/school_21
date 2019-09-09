/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:22:17 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/09 18:32:04 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (*str++)
		++cnt;
	return (cnt);
}
