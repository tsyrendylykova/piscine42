/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 12:40:01 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/29 12:17:26 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int number;
	int isneg;

	i = 0;
	number = 0;
	isneg = 0;
	while ((str[i] == '\n') || (str[i] == ' ') || (str[i] == '\t') || \
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		isneg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = 10 * number + (str[i] - 48);
		i++;
	}
	if (isneg)
		return (-number);
	return (number);
}
