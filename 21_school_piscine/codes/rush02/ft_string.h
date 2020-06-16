/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:02:38 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 19:03:42 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include <stdlib.h>

typedef struct s_string	t_string;

struct		s_string
{
	char	*data;
	int		len;
};

t_string	*create_t_string(char *str);
void		destroy_t_string(t_string **tstr);
int			ft_strlen(char *str);
char		*ft_strdup(char *str);
char		*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
