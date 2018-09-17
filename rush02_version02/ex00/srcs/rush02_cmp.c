/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_cmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:50:52 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/09 13:50:54 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_list.h"
#include "../includes/ft_string.h"

int		rush_02(int x, int i, t_list *list)
{
	int		j;
	int		y;
	t_list	*current;
	int		count;

	j = 0;
	count = 0;
	current = list;
	y = ((current->next->data == ' ') && i != 1) ? -1 : i;
	printf("y = %d\n", y);
	printf("i = %d\n", i);
	while (j++ < x)
	{
		printf("|%c|\n", current->data);
		if (((j == 1 || j == x) && i == 1) && (current->data == 'A'))
				count++;
		else if (((j == x || j == 1) && i == y) && (current->data == 'C'))
				count++;
		else if ((j != 1 && j != x && i != 1 && i != y) && (current->data == ' '))
				count++;
		else if (current->data == 'B')
				count++;
		current = current->next;
		printf("count = %d\n", count);
		printf("j = %d\n", j);
		if (j != count)
			return (0);
	}
	return ((count == x) ? 1 + (y == i && i != 1) : 0);
}

int		main(int argc, char **argv)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, 'C');
	ft_list_push_back(&list, 'B');
	ft_list_push_back(&list, 'B');
	ft_list_push_back(&list, 'B');
	ft_list_push_back(&list, 'C');
	printf("res = %d\n", rush_02(5, 1, list));
	return (0);
}
