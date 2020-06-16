/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:56:02 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:03:47 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int cnt;

	cnt = 0;
	while (begin_list != NULL)
	{
		cnt++;
		begin_list = begin_list->next;
	}
	return (cnt);
}
