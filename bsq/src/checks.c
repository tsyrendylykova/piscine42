/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marthur- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 22:07:53 by marthur-          #+#    #+#             */
/*   Updated: 2018/09/11 22:09:20 by marthur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int		len_first(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	return (i);
}

int		check_grid(char *str, int first)
{
	int		i;
	int		len_str;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\n' && str[i])
	{
		len_str = 0;
		while (str[i] != '\n' && str[i])
		{
			if ((str[i] != g_cell.empty && str[i] != g_cell.obstacle)\
				|| str[i] == g_cell.full)
				return (0);
			len_str++;
			i++;
		}
		len++;
		if (len_str != first)
			return (0);
		i++;
	}
	if (i == 0 || len != g_cell.size_map)
		return (0);
	return (1);
}

int		check_index(unsigned short **arr, int i, int j)
{
	if (i < 0 || j < 0)
		return (0);
	return (arr[i][j]);
}

int		check_n(char *str)
{
	int i;
	int kol;

	i = 0;
	kol = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			kol++;
		i++;
	}
	if (kol == g_cell.size_map)
		return (1);
	return (0);
}
