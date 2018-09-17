/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slindgre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:31:11 by slindgre          #+#    #+#             */
/*   Updated: 2018/08/26 16:24:18 by slindgre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (j++ < y)
	{
		i = 0;
		if (j == 1 || j == y)
		{
			while (i++ < x)
				if (i == 1)
					ft_putchar('A');
				else if (i == x)
					ft_putchar('C');
				else
					ft_putchar('B');
		}
		else
			while (i++ < x)
				(i == 1 || i == x) ? ft_putchar('B') : ft_putchar(' ');
		ft_putchar('\n');
	}
}
