/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:40:53 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/08 18:33:41 by drdraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	char			data;
}				t_list;

t_list		*ft_create_elem(char data);
void		ft_list_push_back(t_list **begin_list, char data);
int			ft_listcmp(t_list *list_1, char *str);

#endif
