/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrost-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 09:52:27 by jfrost-a          #+#    #+#             */
/*   Updated: 2018/09/02 09:52:59 by jfrost-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int sudoku[81][2])
{
	int		cordinate;
	char	temp;

	cordinate = 0;
	while (cordinate != 81)
	{
		temp = sudoku[cordinate][0] + '0';
		write(1, &temp, 1);
		if ((cordinate + 1) % 9 == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		cordinate++;
	}
}

void	ft_create_array(int sudoku[81][2], int argc, char *argv[])
{
	int i;
	int j;
	int cordinate;

	i = 1;
	j = 0;
	cordinate = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i++][j] == '.')
			{
				sudoku[cordinate][0] = 0;
				sudoku[cordinate++][1] = 0;
			}
			else
			{
				sudoku[cordinate][0] = argv[i][j++] - '0';
				sudoku[cordinate++][1] = 1;
			}
		}
	}
}
