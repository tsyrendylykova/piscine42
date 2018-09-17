/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:03:38 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/29 15:03:42 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;
	int length;

	arr = NULL;
	length = max - min;
	if (length > 0)
	{
		arr = (int*)malloc(sizeof(*arr) * (length));
		i = 0;
		while (i < length)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	return (arr);
}
