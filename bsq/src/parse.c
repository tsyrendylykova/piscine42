/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marthur- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:53:42 by marthur-          #+#    #+#             */
/*   Updated: 2018/09/11 19:53:44 by marthur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

#include <stdio.h>

char	*read_param(void)
{
	char	c;
	int		l;
	char	*str;

	str = (char *)malloc(sizeof(char) * 15);
	c = '\0';
	l = 0;
	while (c != '\n' && (read(g_cell.fd, &c, 1)) > 0)
	{
		str[l++] = c;
	}
	str[--l] = '\0';
	if (l != 0)
		return (str);
	return (0);
}

int		parse_param(char *str, int l)
{
	int		i;
	int		size;

	size = 0;
	if (l < 4 || l > 13)
		return (0);
	g_cell.full = str[--l];
	g_cell.obstacle = str[--l];
	g_cell.empty = str[--l];
	if ((g_cell.full == g_cell.obstacle)\
		|| (g_cell.full == g_cell.empty)\
		|| (g_cell.obstacle == g_cell.empty))
		return (0);
	i = 0;
	while (i < l)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		size = size * 10 + str[i++] - '0';
	}
	g_cell.size_map = size;
	return (1);
}

char	*get_grid(void)
{
	size_t	len;
	size_t	l;
	char	*grid;
	char	*help_str;
	size_t	buf_size;

	len = 0;
	buf_size = 1;
	grid = (char *)malloc(sizeof(char) * 2);
	while ((l = read(g_cell.fd, grid + len, buf_size)) > 0)
	{
		len += l;
		if (buf_size < 536870912)
			buf_size *= 2;
		grid[len] = '\0';
		help_str = grid;
		grid = (char *)malloc(sizeof(char) * (len + buf_size + 1));
		ft_strcpy(grid, help_str);
		free(help_str);
	}
	if (buf_size != 1)
		return (grid);
	return (0);
}

int		get_file(char *path)
{
	int		i;
	char	*str;

	i = open(path, O_RDONLY);
	if (i < 0)
		return (0);
	g_cell.fd = i;
	str = read_param();
	if (!str || !parse_param(str, ft_strlen(str)))
		return (0);
	str = get_grid();
	if (!str || !check_grid(str, len_first(str)) || !check_n(str))
		return (0);
	g_cell.map = str;
	return (1);
}
