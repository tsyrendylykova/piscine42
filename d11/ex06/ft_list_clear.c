/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:06:16 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/05 10:06:18 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *tmp;

	elem = *begin_list;
	while (elem)
	{
		tmp = elem->next;
		free(tmp);
		elem = tmp;
	}
	*begin_list = NULL;
}
