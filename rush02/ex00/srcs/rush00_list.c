/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:10:26 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 13:37:21 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*fill_str00(int x, int y, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i++ < y)
	{
		j = 0;
		while (j++ < x)
		{
			if ((j == 1 || j == x) && (i == 1 || i == y))
				str[k++] = 'o';
			else if (j != 1 && j != x && i != 1 && i != y)
				str[k++] = ' ';
			else if (j == 1 || j == x)
				str[k++] = '|';
			else if (i == 1 || i == y)
				str[k++] = '-';
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}

char	*rush00(int x, int y)
{
	char *s;

	s = (char*)malloc(sizeof(*s) * (x + 1) * y + 1);
	s = fill_str00(x, y, s);
	return (s);
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*s;

	if (argc != 3)
		return (ft_puterror("Invalid arguments.\n"));
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
		return (ft_puterror("Invalid arguments.\n"));
	s = rush00(x, y);
	ft_putstr(s);
	return (0);
}
