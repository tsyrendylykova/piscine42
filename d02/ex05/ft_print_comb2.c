/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:20:47 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/23 16:52:08 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_four_digits(char first, char second, char third, char fourth)
{
	if ((fourth > second && third == first) || third > first)
	{
		ft_putchar(first);
		ft_putchar(second);
		ft_putchar(' ');
		ft_putchar(third);
		ft_putchar(fourth);
		if (!(first == '9' && second == '8' && third == '9' && fourth == '9'))
		{
			ft_putchar(',');
		}
		else
		{
			ft_putchar('\n');
		}
	}
}

void	ft_print_comb2(void)
{
	char first;
	char second;
	char third;
	char fourth;

	first = '0';
	while (first <= '9')
	{
		second = '0';
		while (second <= '9')
		{
			third = first;
			while (third <= '9')
			{
				fourth = '0';
				while (fourth <= '9')
				{
					ft_print_four_digits(first, second, third, fourth++);
				}
				third++;
			}
			second++;
		}
		first++;
	}
}
