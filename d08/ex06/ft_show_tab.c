/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:10:31 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/30 20:10:33 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
			return ;
		}
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	j = 0;
	while (par[j].str != '\0')
	{
		i = 0;
		ft_putstr(par[j].str);
		ft_putchar('\n');
		ft_putnbr(par[j].size_param);
		ft_putchar('\n');
		while ((par[j].tab)[i])
		{
			ft_putstr((par[j].tab)[i]);
			ft_putchar('\n');
			i++;
		}
		j++;
	}
}
