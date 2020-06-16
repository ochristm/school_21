/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:53:49 by ochristm          #+#    #+#             */
/*   Updated: 2019/06/11 17:26:28 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int flag;

	i = 0;
	j = 0;
	while(*(str + i))
	{
		flag = 1;
		i++;
		while (*(to_find + j))
		{
			if ((*(str + i + j) != *(to_find + j)) || !*(str + i + j))
			{
				flag = 0;
				break;
			}
			if (flag == 1)
			{
				return (str + i);
			}
		}
	}
	return (0);
}
