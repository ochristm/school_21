/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:39:46 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/19 21:26:33 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

int			main(int argc, char **argv)
{
	t_list	*value;
	value = ft_list_push_params(argc, argv);
	printf("first elem = %s  %s.\n", value->data, value->next->data);
	return (0);
}
