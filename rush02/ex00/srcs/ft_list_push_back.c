/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:05:00 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 17:03:06 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list	*current;
	t_list	*new;

	current = *begin_list;
	new = ft_create_elem(data);
	if (current == NULL)
		*begin_list = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
