/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:08:57 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 18:36:30 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_listcmp(t_list *list_1, char *str)
{
	char	*c;

	c = str;
	while (list_1 && list_1->data == *c)
	{
		if (list_1->next == NULL)
			return (0);
		list_1 = list_1->next;
		c++;
	}
	return (list_1->data - *c);
}
