/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:39:46 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/19 21:50:08 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ex01/ft_list.h"
#include "ex01/ft_list_push_back.c"
#include "ex00/ft_create_elem.c"
#include "ex02/ft_list_push_front.c"
#include "ex03/ft_list_size.c"
#include "ex04/ft_list_last.c"

int			main(void)
{
	t_list	*ptr;
	char	*str;
	int		res;
	t_list	value;
	
	str = "good";
	ptr = ft_create_elem(str);
	ft_list_push_back(&ptr, "_End1");
	ft_list_push_back(&ptr, "_End2");
	ft_list_push_back(&ptr, "_End3");
	ft_list_push_front(&ptr, "Begin1_");
	while (ptr)
	{
		printf("%s", ptr->data);
		ptr = ptr->next;
	}

	ptr = ft_create_elem(str);
	ft_list_push_back(&ptr, "_End1");
	ft_list_push_back(&ptr, "_End2");
	ft_list_push_back(&ptr, "_End3");
	ft_list_push_front(&ptr, "Begin1_");
	res = ft_list_size(ptr);
	value = ft_list_last(ptr);
	printf("\ncount elem = %d.\n", res);
	printf("last elem = %s.\n", value.data);
	return (0);
}
