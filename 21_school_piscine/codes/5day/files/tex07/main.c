/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:49:10 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 19:18:59 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

void	test(char* s1, char* s2, unsigned int n)
{
	printf("%4s == %4s, (off) %5d == %d (my)\n", s1, s2, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
}

int		main()
{
	test("test", "test", 4);
	test("test", "tset", 4);
	test("etst", "exst", 4);
	test("test", "txst", 4);
	test("test", "txst", 3);
	test("test", "test", 1);
	test("test", "t", 40);
	test("t", "test", 40);
	test("t", "test", 1);
}
