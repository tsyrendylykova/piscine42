/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:19:42 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/08 23:19:44 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>

t_stack		*ft_create_elem(char *data)
{
	t_stack		*s;

	s = (t_stack*)malloc(sizeof(*s));
	if (s)
	{
		s->data = data;
		s->next = 0;
	}
	return (s);
}

void		ft_stack_push(t_stack **begin_stack, char *data)
{
	t_stack *node;

	node = ft_create_elem(data);
	node->next = *begin_stack;
	*begin_stack = node;
}

char		*ft_stack_pop(t_stack **begin_stack)
{
	t_stack *node;
	char	*data;

	data = "";
	node = *begin_stack;
	if (node)
	{
		*begin_stack = node->next;
		data = node->data;
	}
	return (data);
}

char		*ft_stack_get_last(t_stack *begin_stack)
{
	t_stack	*node;
	char	*data;

	data = "";
	node = begin_stack;
	if (node)
		data = node->data;
	return (data);
}

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
