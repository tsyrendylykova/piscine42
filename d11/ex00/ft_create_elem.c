/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 23:58:48 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/04 23:58:50 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *a;

	a = (t_list*)malloc(sizeof(*a));
	if (a)
	{
		a->data = data;
		a->next = 0;
	}
	return (a);
}
