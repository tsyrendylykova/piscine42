/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:50 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/05 16:08:52 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, \
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list *prev;
	t_list *curr;

	if ((curr = *begin_list) == NULL)
		return ;
	prev = NULL;
	while (curr)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (prev)
			{
				prev->next = curr->next;
			}
			else
			{
				*begin_list = curr->next;
			}
		}
		prev = curr;
		curr = curr->next;
	}
}
