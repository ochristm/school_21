/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:41:41 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/08 18:11:09 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wcount(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
			word++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (word);
}

static int		ft_wlen(const char *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i++])
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	k = 0;
	i = 0;
	if (!s \
			|| !(str = (char **)malloc(sizeof(char *) * (ft_wcount(s, c)) + 1)))
		return (NULL);
	while (i < ft_wcount(s, c))
	{
		if (!(str[i] = (char *)malloc(sizeof(char) * (ft_wlen(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			str[i][j++] = s[k++];
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
