/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:30:30 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/19 21:49:33 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		cnt;

	cnt = 0;
	list = begin_list;
	if (list)
	{
		cnt = 1;
		while (list->next)
		{
			list = list->next;
			cnt++;
		}
	}
	return (cnt);
}
