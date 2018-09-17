/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:50:23 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 12:50:26 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j + 1] < tab[j])
			{
				tmp = *(tab + j + 1);
				*(tab + j + 1) = *(tab + j);
				*(tab + j) = tmp;
			}
			j++;
		}
		i++;
	}
}

int		ft_unmatch(int *ch, int length)
{
	int i;

	ft_sort_integer_table(ch, length);
	i = 0;
	while (i < length)
		printf("%d\n", ch[i++]);
	i = 0;
	while (i < length)
	{
		if (ch[i] != ch[i + 1])
			return (ch[i]);
		i += 2;
	}
	return (0);
}
