/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:31:35 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/23 17:25:27 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int	main(int ac, char **av)
{
//	t_list  *elem;

//	elem = NULL;
//	if (av[1] != NULL)
//		elem = ft_create_elem(av[1]);
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
//	while (elem)
//	{
//		printf("%s", elem->data);
//		elem = elem->next;
//	}
	return (0);
}
