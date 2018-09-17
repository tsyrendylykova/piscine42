/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:10:26 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/09 12:56:40 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_list.h"
#include "../includes/ft_string.h"

int		rush_00(int x, int i, t_list *list)
{
	int		j;
	int		y;
	t_list	*current;
	int		count;

	j = 1;
	count = 0;
	current = list;
	y = ((current->next->data == ' ') && i != 1) ? -1 : 1;
	while (j <= x)
	{
		printf("|%c|\n", current->data);
		if ((j == 1 || j == x) && (i == 1 || i == y) && (current->data == 'o')) 
				count++;
		else if (j != 1 && j != x && i != 1 && i != y && (current->data == ' '))
				count++;
		else if ((j == 1 || j == x) && (current->data == '|'))
				count++;
		else if ((i == 1 || i == y) && (current->data == '-'))
				count++;
		j++;
		current = current->next;
	}
	return ((count == x) ? 1: 0);
}

int		main(int argc, char **argv)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, 'o');
	ft_list_push_back(&list, ' ');
	ft_list_push_back(&list, '-');
	ft_list_push_back(&list, '-');
	ft_list_push_back(&list, 'o');
	printf("res = %d\n", rush_00(5, 3, list));
	return (0);
}
