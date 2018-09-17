/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:26:26 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 05:26:28 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# define TRUE 1
# define CLOSE 0
# define OPEN 1
# define EXIT_SUCCESS 0

typedef	int		t_ft_bool;
typedef	struct	s_door
{
	int state;
}				t_door;

void			ft_putstr(char *str);
ft_bool			close_door(t_door *door);
ft_bool			open_door(t_door *door);
ft_bool			is_door_open(t_door *door);
ft_bool			is_door_close(t_door *door);

#endif
