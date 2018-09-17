/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:00:06 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/30 18:16:00 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int			length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char				*ft_strdup(char *str)
{
	char		*s;
	int			i;
	int			length;

	length = 0;
	i = 0;
	while (str[length] != '\0')
		length++;
	s = (char*)malloc(sizeof(str) * (length + 1));
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*s_struct;
	int			i;

	s_struct = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		s_struct.size_param = ft_strlen(av[i]);
		s_struct.str = av[i];
		s_struct.copy = ft_strdup(av[i]);
		s_struct.tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s_struct[i].str = 0;
	return (s_struct);
}
