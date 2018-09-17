/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrost-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:06:15 by jfrost-a          #+#    #+#             */
/*   Updated: 2018/09/02 10:06:18 by jfrost-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_start(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc != 10)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < '1' || argv[i][j] > '9') && argv[i][j] != '.')
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_line(int sudoku[81][2], int which_line)
{
	int i;
	int cor1;
	int cor2;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			cor1 = which_line * 9 + i;
			cor2 = which_line * 9 + j;
			if (sudoku[cor1][0] == sudoku[cor2][0] && cor1 != cor2
				&& sudoku[cor1][0] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_column(int sudoku[81][2], int which_vert)
{
	int i;
	int cor1;
	int cor2;
	int j;

	which_vert--;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			cor1 = which_vert + 9 * i;
			cor2 = which_vert + 9 * j;
			if (sudoku[cor1][0] == sudoku[cor2][0] && cor1 != cor2
				&& sudoku[cor1][0] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
