/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:58:15 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/25 17:23:49 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fnd_wrd(char *str, int *i)
{
	while (str[*i] != ' ' && str[*i] != '\t' && str[*i])
		(*i) += 1;
}

void	print_w(char *str, int start, int end)
{
	int i;
	int c;

	i = start;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && end--)
		write(1, &str[i++], 1);
}

int		main(int ac, char *av[])
{
	int i;
	int start;
	int end;

	i = 0;
	start = 0;
	end = 0;
	if (ac == 2)
	{
		while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
			i++;
		while (av[1][i])
		{
			start = i;
			fnd_wrd(av[1], &i);
			end = i;
			while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
				i++;
			if (!av[1][i])
				print_w(av[1], start, end);
		}
	}
	write(1, "\n", 1);
	return (0);
}
