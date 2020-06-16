/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:29:49 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 19:00:16 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char string[] = "\t\n\v\f\r  -0254.6";
	int nb;

	nb = ft_atoi(string);
	printf("ft = %d.\nAtoi = %d.\n", nb, atoi(string));
	return (0);
}
