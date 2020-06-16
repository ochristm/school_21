/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_2.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:40:37 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 20:17:37 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_2_H
# define FT_RUSH_2_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "ft_list.h"
# include "ft_output.h"
# include "ft_check.h"
# define BUF_LEN 256

int		ft_process_input(char **input, int *row_length);
int		ft_read_input(t_list **input);
void	ft_concat_from_list(char *output, t_list *begin_list);
int		ft_count_rows(char *str);
int		ft_count_cols(char *str);
#endif
