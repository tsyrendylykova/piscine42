/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 06:23:39 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/05 06:23:41 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp_begin_list;

	tmp_begin_list = begin_list;
	if (tmp_begin_list)
	{
		while (tmp_begin_list->next)
		{
			tmp_begin_list = tmp_begin_list->next;
		}
	}
	return (tmp_begin_list);
}
