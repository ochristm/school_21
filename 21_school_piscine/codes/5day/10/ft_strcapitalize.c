/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:50:17 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/20 15:26:54 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_letter(char *str)
{
	if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		return (1);
	else
		return (0);
}

int		is_number(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_letter(&str[i - 1]) == 0 && is_number(&str[i - 1]) == 0)
				str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (is_letter(&str[i - 1]) == 1 || is_number(&str[i - 1]) == 1)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
