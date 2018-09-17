/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 22:21:03 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/30 22:50:03 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	int		n;
	int		temp;
	int		array[3];

	array[0] = i;
	array[1] = j;
	array[2] = k;
	n = 0;
	while (n < 2)
	{
		if (array[n] > array[n + 1])
		{
			temp = array[n];
			array[n] = array[n + 1];
			array[n + 1] = temp;
			n = 0;
		}
		else
			n++;
	}
	return (array[1]);
}
