/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:03:56 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 22:43:08 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_2.h"

int		main(void)
{
	char	*input;
	int		row_length;
	int		row_count;
	int		check_result;

	row_count = ft_process_input(&input, &row_length);
	check_result = sum_rush(input, row_length, row_count);
	ft_stdout(check_result, row_length - 1, row_count);
	return (0);
}
