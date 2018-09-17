/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 17:26:27 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 15:35:36 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (max - min > 0)
	{
		*range = (int*)malloc(sizeof(**range) * (max - min));
		i = 0;
		while (min < max)
		{
			range[0][i] = min;
			min++;
			i++;
		}
		return (i);
	}
	*range = NULL;
	return (0);
}
