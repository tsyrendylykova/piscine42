/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:30:51 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/09 17:30:53 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

char		*ft_itoa(int value)
{
	int		len;
	long	nbr;
	char	*pointer;

	if (value == 0)
		return ("0");
	len = 0;
	nbr = value;
	while (nbr)
	{
		nbr /= 10;
		len += 1;
	}
	nbr = value;
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';
	while (nbr)
	{
		pointer[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (value < 0)
		pointer[0] = '-';
	return (pointer);
}

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
