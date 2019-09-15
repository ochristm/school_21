/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 10:22:36 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/15 10:25:15 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tcnt;
	t_list *tnxt;

	tcnt = *alst;
	while (tcnt)
	{
		tnxt = tcnt->next;
		del((tcnt->content), (tcnt->content_size));
		free(tcnt);
		tcnt = tnxt;
	}
	*alst = NULL;
}
