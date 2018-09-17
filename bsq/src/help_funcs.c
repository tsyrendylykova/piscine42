/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marthur- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:02:59 by marthur-          #+#    #+#             */
/*   Updated: 2018/09/11 21:03:00 by marthur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	reset(void)
{
	g_cell.fd = 0;
	g_cell.size_map = 0;
	g_cell.empty = '\0';
	g_cell.obstacle = '\0';
	g_cell.full = '\0';
	g_cell.x = 0;
	g_cell.y = 0;
	g_cell.size_sq = 0;
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int		find_min(int a, int b, int c)
{
	int i;

	if (a > b)
	{
		i = a;
		a = b;
		b = i;
	}
	if (a > c)
	{
		i = c;
		c = a;
		a = i;
	}
	if (b > c)
	{
		i = b;
		b = c;
		c = i;
	}
	return (a);
}
