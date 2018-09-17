/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 18:23:15 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 13:33:21 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' ||
		c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int		str_to_number(char *str)
{
	char	*c;
	int		digit;
	int		number;

	c = str;
	number = 0;
	while (*c != '\0')
	{
		digit = (int)(*c - '0');
		if (digit > 9 || digit < 0)
			break ;
		number = (10 * number) + digit;
		c++;
	}
	return (number);
}

int		ft_atoi(char *str)
{
	int		is_neg;
	int		result;
	char	*c;

	c = str;
	result = 0;
	while (ft_isspace(*c))
		c++;
	if (*c == '-')
	{
		is_neg = 1;
		c++;
	}
	else
	{
		is_neg = 0;
		if (*c == '+')
			c++;
	}
	result = str_to_number(c);
	if (is_neg)
		return (-result);
	return (result);
}
