/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 17:19:42 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 17:51:09 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include "ft_string.h"

typedef struct s_list	t_list;

struct	s_list
{
	t_list		*next;
	t_string	*data;
};

t_list	*ft_create_node(t_string *data);
void	ft_destroy_list(t_list **begin_list);
void	ft_list_push_back(t_list **begin_list, t_string *data);
#endif
