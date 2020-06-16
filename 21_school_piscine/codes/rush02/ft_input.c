/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:46:23 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 20:36:18 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_2.h"

int		ft_count_rows(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		ft_count_cols(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '\n')
		{
			count++;
			break ;
		}
		count++;
	}
	return (count);
}

int		ft_read_input(t_list **input)
{
	int			res;
	char		buf[BUF_LEN + 1];
	t_string	*temp;
	int			count;

	res = read(0, buf, BUF_LEN);
	if (res == -1)
		return (-1);
	count = res;
	buf[res] = '\0';
	while (res)
	{
		temp = create_t_string(buf);
		ft_list_push_back(input, temp);
		if (res == BUF_LEN)
		{
			res = read(0, buf, BUF_LEN);
			count += res;
			buf[res] = '\0';
		}
		else
			res = 0;
	}
	return (count);
}

void	ft_concat_from_list(char *output, t_list *b_list)
{
	int cur;

	cur = 0;
	while (b_list)
	{
		ft_strncpy(output + cur, b_list->data->data, b_list->data->len);
		cur += b_list->data->len;
		b_list = b_list->next;
	}
	output[cur] = '\0';
}

int		ft_process_input(char **input, int *row_length)
{
	t_list	*read_data;
	int		sym_count;

	read_data = NULL;
	sym_count = ft_read_input(&read_data);
	if (sym_count == -1)
		return (-1);
	*input = (char *)malloc((sym_count + 1) * sizeof(char));
	if (!(*input))
		return (-2);
	ft_concat_from_list(*input, read_data);
	*row_length = ft_count_cols(*input);
	ft_destroy_list(&read_data);
	return (ft_count_rows(*input));
}
