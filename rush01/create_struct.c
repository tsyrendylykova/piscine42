/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:47:47 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/02 15:47:50 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_struct_t_block.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

char	**fill_array(int argc, char **argv)
{
	char **grid;
	int i;
	int j;

	i = 1;
	grid = (char**)malloc(sizeof(*grid) * 9);
	while (i < 10)
	{
		grid[i - 1] = (char*)malloc(sizeof(**grid) * 9);
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				grid[i - 1][j] = '0';
			else
				grid[i - 1][j] = argv[i][j];

			j++;
		}
		i++;
	}
	return (grid);
}

void	ft_print_number_tables(char **tab)
{
	while (*tab)
	{
		ft_putstr(*tab);
		ft_putchar('\n');
		tab++;
	}
}

int		ft_check_line(char **grid, int i, int number)
{
	int m;

	m = 0;
	while (m < 9)
	{
		if (grid[i][m] == number + '0')
			return (0);
		m++;
	}
	return (1);
}

int		ft_check_column(char **grid, int j, int number)
{
	int m;

	m = 0;
	while (m < 9)
	{
		if (grid[m][j] == number + '0')
			return (0);
		m++;
	}
	return (1);
}

int ft_check_square(char **grid, int i, int j, int number)
{
	int m;
	int n;

	m = 0;
	while (m < 3)
	{
		n = 0;
		while (n < 3)
		{
			if (grid[3 * (i / 3) + m][3 * (j / 3) + n] == number + '0')
				return (0);
			n++;
		}
		m++;
	}
	return (1);
}

char *find_possib(char **grid, int i, int j)
{
	int number;
	char *p;

	p = (char*)malloc(sizeof(*p) * 9);
	number = 1;

	while (number < 10)
	{
		if (ft_check_line(grid, i, number) && ft_check_column(grid, j, number) && ft_check_square(grid, i, j, number))
			p[number - 1] = '1';
		else
			p[number - 1] = '0';
		number++;
	}
	return (p);
}

struct s_block **fill_struct(char **grid)
{
	t_block		**s_struct;
	int			i;
	int			j;
	int			k;
	int			sum_possib;

	i = 0;
	s_struct = (t_block**)malloc(sizeof(*s_struct) * 9);
	while (i < 9)
	{
		j = 0;
		s_struct[i] = (t_block*)malloc(sizeof(**s_struct) * 9);
		while (j < 9)
		{
			k = 0;
			sum_possib = 0;
			s_struct[i][j].number = grid[i][j];
			if (grid[i][j] == '0')
				s_struct[i][j].flag = 1;
			else
				s_struct[i][j].flag = 0;
			s_struct[i][j].possib = find_possib(grid, i, j);
			while (k < 9)
			{
				if (s_struct[i][j].possib[k] == '1')
					sum_possib++;
				k++;
			}
			printf("%d\n", sum_possib);
			s_struct[i][j].sum = sum_possib;
			j++;
		}
		i++;
	}
	return (s_struct);
}
