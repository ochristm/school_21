/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:49:31 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 16:06:25 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char	str[] = "sa87lutconttuvasmotsquantedeucinquanteetun";

	printf("str = %s.\n", str);
	printf("res (1 - ok, 0 - no) = %d.\n", ft_str_is_lowercase(str));
	return (0);
}
