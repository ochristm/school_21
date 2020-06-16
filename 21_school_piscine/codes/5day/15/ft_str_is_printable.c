/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:31:45 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 16:36:04 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int	is_print(char *str)
{
	if ((*str >= 32 && *str <= 126))
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (is_print(&str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
