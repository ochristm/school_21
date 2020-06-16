/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:03:49 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 16:06:27 by ochristm         ###   ########.fr       */
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

int	is_letter(char *str)
{
	if ((*str >= 'a' && *str <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (is_letter(&str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
