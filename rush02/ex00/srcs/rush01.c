/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <varjya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:13:44 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 13:58:45 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		rush(int x, int y)
{
	int		j;
	int		i;

	j = 1;
	i = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (j == x && i == y && j > 1 && i > 1))
				ft_putchar('/');
			else if ((j == 1 && i == y) || (j == x && i == 1))
				ft_putchar('\\');
			else if (j != 1 && j != x && i != 1 && i != y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
	return (0);
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
