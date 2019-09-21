/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:41:41 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/21 15:47:35 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	fc(const char *s, char c)
{
	size_t	i;
	size_t	word;

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

static size_t	fl(const char *s, char c)
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

static int		ft_freemem(char **s1)
{
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	while (len)
	{
		free(s1[len]);
		s1[len] = NULL;
		len--;
	}
	free(s1);
	s1 = NULL;
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**s1;

	k = 0;
	i = -1;
	if (!s)
		return (NULL);
	if (!(s1 = (char **)malloc(sizeof(char *) * (fc(s, c)) + 1)))
		return (NULL);
	while (++i < fc(s, c))
	{
		s1[i] = (char *)malloc(sizeof(char) * (fl(&s[k], c) + 1));
		if (((!s1[i]) ? ft_freemem(s1) : 0))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			s1[i][j++] = s[k++];
		s1[i][j] = '\0';
	}
	s1[i] = NULL;
	return (s1);
}
