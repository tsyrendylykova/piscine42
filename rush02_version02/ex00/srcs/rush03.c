/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:27:43 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 14:10:21 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	rush(int x, int y)
{
	int		j;
	int		i;

	j = 1;
	i = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if (j == 1 && (i == 1 || i == y))
				ft_putchar('A');
			else if (j == x && (i == 1 || i == y))
				ft_putchar('C');
			else if (j != 1 && j != x && i != 1 && i != y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 3)
		return (ft_puterror("Invalid arguments.\n"));
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
		return (ft_puterror("Invalid arguments.\n"));
	rush(x, y);
	return (0);
}
