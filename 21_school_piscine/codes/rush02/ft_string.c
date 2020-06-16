/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:47:03 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 19:33:19 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

t_string	*create_t_string(char *str)
{
	t_string *result;

	result = (t_string *)malloc(sizeof(t_string));
	result->data = ft_strdup(str);
	result->len = ft_strlen(str);
	return (result);
}

void		destroy_t_string(t_string **tstr)
{
	free((*tstr)->data);
	free(*tstr);
	*tstr = NULL;
}
