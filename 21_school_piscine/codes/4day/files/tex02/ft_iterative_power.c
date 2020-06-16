/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:27:31 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/08 19:36:08 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if ((power == 0) || (nb == 1))
	{
		return (1);
	}
	else
	{
		while (power != 0)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
}
