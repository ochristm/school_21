/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:57:16 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 16:00:17 by ochristm         ###   ########.fr       */
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

int	is_number(char *str)
{
	if ((*str >= '0' && *str <= '9'))
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (is_number(&str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
