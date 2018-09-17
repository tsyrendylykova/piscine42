/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 09:27:34 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 09:27:37 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int				i;
	unsigned int	res;
	unsigned int	n;

	res = 0;
	i = 0;
	if (value > 0)
		n = (unsigned int)value;
	else
		n = (-1) * (unsigned int)value;
	while (i++ < 32)
	{
		res += n % 2;
		n /= 2;
	}
	if (value >= 0)
		return (res);
	else
		return (res + 1);
}
