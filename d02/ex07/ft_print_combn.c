/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:19:54 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/23 16:53:03 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int n, int data[])
{
	int j;

	j = 0;
	while (j < n)
	{
		ft_putchar(data[j] + '0');
		j++;
	}
	if (data[0] == 10 - n)
	{
		ft_putchar('\n');
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
	return ;
}

void	ft_combine(int data[], int start, int index, int n)
{
	int i;
	int j;

	i = start;
	j = 0;
	if (index == n)
	{
		ft_print(n, data);
	}
	while (i <= 9 && 10 - i >= n - index)
	{
		data[index] = i;
		ft_combine(data, i + 1, index + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int data[n];

	ft_combine(data, 0, 0, n);
}
