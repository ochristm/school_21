/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:02:04 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 17:14:29 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point, *point)
{
	point->x = 42;
	point->y = 21;
}
int	main(void)
{
	t_point		point;

	set_point(&point);
	printf("x = %d, y= %d\n", point.x, point.y);
	return (0);
}
