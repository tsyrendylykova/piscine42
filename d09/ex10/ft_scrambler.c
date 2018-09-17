/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 03:50:18 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 04:10:23 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp_a;
	int temp_b;
	int temp_c;
	int temp_d;

	temp_c = *******c;
	temp_d = ****d;
	temp_b = *b;
	temp_a = ***a;
	*******c = temp_a;
	****d = temp_c;
	*b = temp_d;
	***a = temp_b;
}
