/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 00:55:53 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 01:16:36 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		strcmp_ign_ws(char *s1, char *s2)
{
	while (*s1)
	{
		while (*s1 == ' ')
			s1++;
		if (!*s1)
			break ;
		while (*s2 == ' ')
			s2++;
		if (!*s2)
			return (1);
		if (*s2 > *s1)
			return (-1);
		if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	if (*s2)
		return (-1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
