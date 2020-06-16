/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:42:44 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/23 17:25:25 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int	is_sp(t_list *begin_l)
{
	if (*begin_l == ' ')
		return (1);
	return (0);
}

int	is_num(t_list *begin_l)
{
	if (*begin_l >= '0' && *begin_l <= '9')
		return (1);
	return (0);
}

int	is_fir_op(t_list *begin_l)
{
	if (*begin_l == '*' || *begin_l == '/' || *begin_l == '%')
		return (1);
	return (0);
}

int	is_sec_op(t_list *begin_l)
{
	if (*begin_l == '+' || *begin_l == '-')
		return (1);
	return (0);
}

int	is_br(t_list *begin_l)
{
	if (*begin_l == '(' || *begin_l == ')')
		return (1);
	return (0);
}

char	*split_list(t_list *elem)
{
	while (elem != NULL)
	{
		t_list  *nums;
		t_list  *opers;
		t_list **nums_next;
		t_list **opers_next;

		nums = NULL;
		opers = NULL;
		*nums_next = nums;
		*oper_next = opers;

	}
}

int	eval_expr(char *str)
{
	t_list	*elem;
	char	*ptr;
	char	*res;

	ptr = str;
	elem = NULL;
	if (str != NULL)
	{
		elem = ft_create_elem(av[1]);
		while (*str != '\0')
		{
			ft_list_push_front(&elem, str);
			str++;
		}
	}
	res = split_list(elem);
	return (ft_atoi(res));
}
