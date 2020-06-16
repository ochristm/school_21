/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 19:49:13 by gcody             #+#    #+#             */
/*   Updated: 2019/06/23 20:45:01 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_H
# define FT_CHECK_H

char	ft_elem_check_rush00(int i, int j, int x, int y);
int		ft_check_rush00(char *str, int x, int y);
char	ft_elem_check_rush01(int i, int j, int x, int y);
int		ft_check_rush01(char *str, int x, int y);
char	ft_elem_check_rush02(int i, int j, int x, int y);
int		ft_check_rush02(char *str, int x, int y);
char	ft_elem_check_rush03(int i, int j, int x, int y);
int		ft_check_rush03(char *str, int x, int y);
char	ft_elem_check_rush04(int i, int j, int x, int y);
int		ft_check_rush04(char *str, int x, int y);
int		sum_rush(char *str, int row, int column);
#endif
