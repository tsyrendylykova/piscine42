/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:48:29 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/08 17:03:31 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(char data)
{
	t_list *a;
	a = (t_list*)malloc(sizeof(*a));
	if (a)
	{
		a->data = data;
		a->next = NULL;
	}
	return (a);
}
