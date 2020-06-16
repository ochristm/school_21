/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:14:13 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/19 13:28:45 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = "\t\n\r\v  +02 54";
	int		nb;

	nb = ft_atoi(str);
	printf("ft = %d.\natoi = %d.\n", nb, atoi(str));
	return (0);
}
