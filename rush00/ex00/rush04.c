/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slindgre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:31:11 by slindgre          #+#    #+#             */
/*   Updated: 2018/08/26 19:08:45 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if (i == x && j == y && y != 1 && x != 1)
				ft_putchar('A');
			else if (i == 1 && j == 1)
				ft_putchar('A');
			else if ((j == 1 && i == x) || (j == y && i == 1))
				ft_putchar('C');
			else if (i == 1 || j == 1 || j == y || i == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
