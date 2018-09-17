/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 14:58:36 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/26 15:12:10 by mcressen         ###   ########.fr       */
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
			{
				if (i == 1 || i == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
		}
		else
			while (i++ < x)
				(i == 1 || i == x) ? ft_putchar('|') : ft_putchar(' ');
		ft_putchar('\n');
	}
}
