/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:24:50 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/30 19:03:06 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 1 && hour <= 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.
		AND %d.00 A.M.\n", hour, (hour + 1));
	else if (hour >= 13 && hour <= 22)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M.
		AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	else if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.
		AND %d.00 A.M.\n", (hour + 12), (hour + 1));
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M.
		AND %d.00 P.M.\n", hour, (hour - 11));
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M
		AND %d.00 A.M.\n", (hour - 12), (hour - 11));
	else
		return ;
}
