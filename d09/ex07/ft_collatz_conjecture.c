/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 00:33:31 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 01:14:35 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int count;

	count = 0;
	if (base % 2 == 0)
		count = 1 + ft_collatz_conjecture(base / 2);
	else if (base > 1)
		count = 1 + ft_collatz_conjecture(3 * base + 1);
	return (count++);
}
