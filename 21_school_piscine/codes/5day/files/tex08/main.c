/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 18:37:24 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/17 18:41:26 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main()
{
	char str[] = "Every Single Letter";
	printf("before = %s.\n", str);
	printf("after = %s.\n", ft_strupcase(str));
	return (0);
}
