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

void	fill_map(void)
{
	int i;
	int j;
	int k;
	int cols;

	i = 0;
	k = 0;
	cols = len_first(g_cell.map);
	while (i < g_cell.size_map)
	{
		j = 0;
		while (j < cols + 1)
		{
			if (i < g_cell.x + g_cell.size_sq && j < g_cell.y + g_cell.size_sq\
				&& i >= g_cell.x && j >= g_cell.y)
				write(1, &g_cell.full, 1);
			else
			{
				write(1, &g_cell.map[k], 1);
			}
			k++;
			j++;
		}
		i++;
	}
}

void	fill_cell(unsigned short **arr, int i, int j, char c)
{
	if (c == g_cell.obstacle)
		arr[i][j] = 0;
	else
	{
		arr[i][j] = 1 + find_min(check_index(arr, i, j - 1),\
			check_index(arr, i - 1, j - 1), check_index(arr, i - 1, j));
		if (arr[i][j] > g_cell.size_sq)
		{
			g_cell.size_sq = arr[i][j];
			g_cell.x = i - arr[i][j] + 1;
			g_cell.y = j - arr[i][j] + 1;
		}
	}
}

int		bsq(void)
{
	unsigned short	**arr;
	int				cols;
	int				i;
	int				j;
	int				k;

	arr = (unsigned short **)malloc(sizeof(unsigned short *) * g_cell.size_map);
	cols = len_first(g_cell.map);
	k = 0;
	i = 0;
	while (i < g_cell.size_map)
	{
		arr[i] = (unsigned short *)malloc(sizeof(unsigned short) * cols);
		j = 0;
		while (j < cols)
		{
			if (*(g_cell.map + k) != '\n')
				fill_cell(arr, i, j++, *(g_cell.map + k));
			k++;
		}
		i++;
	}
	fill_map();
	return (0);
}

char	*get_map(int fd)
{
	char	*grid;
	size_t	l;
	size_t	len;
	size_t	buf_size;
	char	*help_str;

	len = 0;
	buf_size = 2;
	grid = (char *)malloc(sizeof(char) * 2);
	while ((l = read(fd, grid + len, buf_size)))
	{
		if ((grid[ft_strlen(grid) - 1] == '\n' &&\
			grid[ft_strlen(grid) - 2] == '\n') || (len == 0 && grid[0] == '\n'))
			break ;
		len += l;
		if (buf_size < 536870912)
			buf_size *= 2;
		grid[len] = '\0';
		help_str = grid;
		grid = (char *)malloc(sizeof(char) * (len + buf_size + 1));
		ft_strcpy(grid, help_str);
		free(help_str);
	}
	return (grid);
}

int		bsq_without_arg(int fd)
{
	char	*input_param;

	input_param = read_param();
	if (!input_param || !parse_param(input_param, ft_strlen(input_param)))
		return (0);
	g_cell.map = get_map(fd);
	if (check_grid(g_cell.map, len_first(g_cell.map)) == 0 ||\
		!check_n(g_cell.map))
		return (0);
	bsq();
	return (1);
}
