/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_cmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:01:56 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/09 13:01:58 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_list.h"
#include "../includes/ft_string.h"

void		print_list(t_stack *stack)
{
	t_stack *current;

	current = stack;
	while (current)
	{
		printf("%s, ", current->data);
		current = current->next;
	}
	printf("\n");
}

int		rush_01(int x, int i, t_list *list)
{
	int		j;
	int		y;
	t_list	*current;
	int		count;

	j = 0;
	count = 0;
	current = list;
	y = ((current->next->data == ' ') &&  i != 1) ? -1 : i;
	printf("y = %d\n", y);
	while (j++ < x)
	{
		printf("|%c|\n", current->data);
		if (((j == 1 && i == 1) || (j == x && i == y && j > 1 && i > 1)) && (current->data == '/'))
				count++;
		else if (((j == 1 && i == y) || (j == x && i == 1)) && (current->data == '\\'))
				count++;
		else if (j != 1 && j != x && i != 1 && i != y && (current->data == ' '))
				count++;
		else if (current->data == '*')
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
	ft_list_push_back(&list, '\\');
	printf("res = %d\n", rush_01(1, 2, list));
	return (0);
}
