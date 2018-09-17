/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drdraugr <variya1@yandex.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:27:16 by drdraugr          #+#    #+#             */
/*   Updated: 2018/09/08 20:06:14 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"
#include "ft_string.h"

void	print_list(t_list *list)
{
	t_list *current;

	current = list;
	while (current)
	{
		ft_putchar(current->data);
		current = current->next;
	}
}

int		is_valid(char c)
{
	if (c == 'o' || c == '-' || c == '|' ||
		c == '/' || c == '*' || c == '\\' ||
		c == 'A' || c == 'B' || c == 'C' || 
		c == '\n'|| c == ' ')	
		return (1);
	return (0);
}

int		read_list(t_list **list, int *x, int *y)
{
	char	c;
	int		ret;

	while ((ret = read(0, &c, 1)) != 0 && ret != -1)
	{
		if (c == '\n')
			*y = *y + 1;
		else
			*x = *x + 1;
		if (is_valid(c))
			ft_list_push_back(list, c);
		else
		{
			ft_puterror("aucune\n");
			return (1);
		}
	}
	*x = *x / *y;
	if (ret == -1)
		return (1);
	return (0);
}

int		main(void)
{
	t_list	*list;
	char	*str_rush = "o-o-o-o-o-o-o-\n";
	int		x;
	int		y;

	x = 0;
	y = 0;
	list = NULL;
	if (read_list(&list, &x, &y))
		return (1);
	str_rush = 	
	print_list(list);
	printf("x = %d y = %d\n", x,  y);
	printf("Is eq? %d\n", ft_listcmp(list, str));
	return (0);
}
