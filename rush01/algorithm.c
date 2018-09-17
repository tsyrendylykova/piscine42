/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:41:43 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/02 18:41:45 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_struct_t_block.h"

void	ft_print_output(t_block **data)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &data[i][j].number, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int 	ft_count_is_not_empty(t_block **struct_sudoku) // 1 - not empty, 0 - empty
{
	int n;
	int i;
	int j;

	n = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (struct_sudoku[i][j].flag == 1)
				n++;
			j++;
		}
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (1);
}

int		ft_get_number(char *possib)
{
	int i;

	i = 0;
	while (possib[i])
	{
		if (possib[i] == '1')
			return (i);
		i++;
	}
	return (0);
}

int		ft_check_line2(t_block **struct_sud, int i, int number)
{
	int m;

	m = 0;
	while (m < 9)
	{
		if (struct_sud[i][m].number == number + '0')
			return (0);
		m++;
	}
	return (1);
}

int		ft_check_column2(t_block **struct_sud, int j, int number)
{
	int m;

	m = 0;
	while (m < 9)
	{
		if (struct_sud[m][j].number == number + '0')
			return (0);
		m++;
	}
	return (1);
}

int ft_check_square2(t_block **struct_sud, int i, int j, int number)
{
	int m;
	int n;

	m = 0;
	while (m < 3)
	{
		n = 0;
		while (n < 3)
		{
			if (struct_sud[3 * (i / 3) + m][3 * (j / 3) + n].number == number + '0')
				return (0);
			n++;
		}
		m++;
	}
	return (1);
}

char *find_possib2(t_block **struct_sud, int i, int j)
{
	int number;
	char *p;

	p = (char*)malloc(sizeof(*p));
	number = 1;

	while (number < 10)
	{
		if (ft_check_line2(struct_sud, i, number) && ft_check_column2(struct_sud, j, number) && ft_check_square2(struct_sud, i, j, number))
			p[number - 1] = '1';
		else
			p[number - 1] = '0';
		number++;
	}
	return (p);
}

void recount_possib(t_block **struct_sud)
{
	int i;
	int j;
	char *p;
	int number;

	p = (char*)malloc(sizeof(*p));

	i = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			number = 0;
			while (number < 10)
			{
				if (ft_check_line2(struct_sud, i, struct_sud[i][j].number - '0') && ft_check_column2(struct_sud, j, struct_sud[i][j].number - '0') && ft_check_square2(struct_sud, i, j, struct_sud[i][j].number - '0'))
					p[number - 1] = '1';
				else
					p[number - 1] = '0';
				number++;
			}
			printf("%s\n", p);
			struct_sud[i][j].possib = p;
			j++;
		}
		i++;
	}
}

void 	solve_sudoku(t_block **struct_sud)
{
	int i;
	int j;
	int k;
	int sum_possib;

	printf("\n\n\n");
	while (ft_count_is_not_empty(struct_sud))
	{
		i = 0;
		while (i < 9)
		{
			j = 0;
			while (j < 9)
			{
				//printf("%s, %d, %d\n", struct_sud[i][j].possib, struct_sud[i][j].sum, struct_sud[i][j].flag);
				if (struct_sud[i][j].sum == 1 && struct_sud[i][j].flag == 1)
				{
					ft_print_output(struct_sud);
					printf("\n\n");
					k = 0;
					sum_possib = 0;
					printf("Found possib: %s\n", struct_sud[i][j].possib);
					printf("%d\n", ft_get_number(struct_sud[i][j].possib));
					struct_sud[i][j].number = ft_get_number(struct_sud[i][j].possib) + '0';
					struct_sud[i][j].flag = 0;
					printf("%s\n", "inside");
					printf("%s\n", find_possib2(struct_sud, i, j));
					recount_possib(struct_sud);
					while (k < 9)
					{
						if (struct_sud[i][j].possib[k] == '1')
							sum_possib++;
						k++;
					}
					struct_sud[i][j].sum = sum_possib;
				}
				j++;
			}
			i++;
		}
	}
	return ;
}
