/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 07:23:32 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/05 07:23:37 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;
	int		i;

	i = 0;
	node = 0;
	while (i < ac)
	{
		ft_list_push_front(&node, av[i]);
		i++;
	}
	return (node);
}
