/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_rush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 20:09:16 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/23 22:14:32 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int	sum_rush(char *str, int row, int column)
{
	int k;

	k = 0;
	k += ft_check_rush00(str, row, column);
	k += ft_check_rush01(str, row, column);
	k += ft_check_rush02(str, row, column);
	k += ft_check_rush03(str, row, column);
	k += ft_check_rush04(str, row, column);
	return (k);
}
