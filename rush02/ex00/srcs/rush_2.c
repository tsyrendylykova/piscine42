/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:27:16 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 17:10:14 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
//#include "ft_list.h"
//#include "ft_string.h"

void	print_list(t_list *list)
{
	t_list *current;

	current = list;
	while (current)
	{
		write(1, &current->data, 1);
		current = current->next;
	}
}

int		is_valid(char c)
{
	/* TODO */
	c = '1';
	return (1);
}

int		main(void)
{
	char	c;
	char	&buffer = NULL;
	unsigned int len;
	int		read;
	//t_list	*list;

	//list = NULL;
	read = getline(&buffer, &len, stdin);
	printf("%s\n", buffer);
	//while (read(0, &c, 1))
	//{
	//	ft_list_push_back(&list, c);
	//}
	//print_list(list);
	return (0);
}
