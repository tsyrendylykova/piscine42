/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:08:43 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/05 14:08:46 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 0;
	while (begin_list && i < nbr)
	{
		begin_list = begin_list->next;
		if (begin_list == 0)
			return (0);
		i++;
	}
	return (begin_list);
}

t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = 0;
	printf("%p\n", ft_list_at(list, 0));
	printf("%p\n", ft_list_at(list, 1));
	printf("%p\n", ft_list_at(list, 100));
	list = CE("asdf");
	printf("%s\n", (char*)(ft_list_at(list, 0)->data));
	printf("%p\n", ft_list_at(list, 1));
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	list->next->next->next = CE("uiop");
	list->next->next->next->next = CE("hjkl");
	printf("%s\n", (char*)(ft_list_at(list, 0)->data));
	printf("%s\n", (char*)(ft_list_at(list, 1)->data));
	printf("%s\n", (char*)(ft_list_at(list, 2)->data));
	printf("%s\n", (char*)(ft_list_at(list, 3)->data));
	printf("%s\n", (char*)(ft_list_at(list, 4)->data));
	printf("%p\n", ft_list_at(list, 5));
	printf("%p\n", ft_list_at(list, 100));
}
