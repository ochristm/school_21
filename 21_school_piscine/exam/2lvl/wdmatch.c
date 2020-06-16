/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 19:35:26 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/26 19:35:28 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	success(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_check(char *s1, char *s2, int len)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				cnt++;
				i++;
			}
			j++;
		}
		i++;
	}
	if (cnt == len)
		success(s1);
}

int		main(int ac, char *av[])
{
	int	len;

	if (ac == 3)
	{
		len = ft_strlen(av[1]);
		ft_check(av[1], av[2], len);
	}
	write(1, "\n", 1);
	return (0);
}
