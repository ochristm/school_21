/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 17:51:28 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 18:16:51 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_node(t_string *data)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

void	ft_list_push_back(t_list **begin_list, t_string *data)
{
	t_list *cur;

	cur = *begin_list;
	if (cur == NULL)
	{
		*begin_list = ft_create_node(data);
		return ;
	}
	while (cur->next)
		cur = cur->next;
	cur->next = ft_create_node(data);
}

void	ft_destroy_list(t_list **begin_list)
{
	t_list *tmp;

	if (!(*begin_list))
		return ;
	tmp = (*begin_list)->next;
	while (tmp)
	{
		destroy_t_string(&(*begin_list)->data);
		free(*begin_list);
		*begin_list = tmp;
		tmp = tmp->next;
	}
	*begin_list = tmp;
}
