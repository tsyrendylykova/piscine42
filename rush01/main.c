/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrost-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:08:30 by jfrost-a          #+#    #+#             */
/*   Updated: 2018/09/02 10:08:37 by jfrost-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_struct_t_block.h"

char			**fill_array(int argc, char **argv);
void			ft_print_number_tables(char **tab);
struct s_block	**fill_struct(char **grid);
void			solve_sudoku(t_block **struct_sud);
void			ft_print_output(t_block **data);

int		main(int argc, char *argv[])
{
	char	**grid;
	t_block	**str;
	char	**arr;
	int i = 0;
	int j = 0;

	grid = fill_array(argc, argv);
	ft_print_number_tables(grid);
	str = fill_struct(grid);

	printf("\n\n");

	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("%s\n", str[i][j].possib);
			j++;
		}
		i++;
	}
	ft_print_output(str);
	solve_sudoku(str);
	printf("%s", "finish");
	return (0);
}
