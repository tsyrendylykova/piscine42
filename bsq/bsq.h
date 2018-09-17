/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marthur- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:54:28 by marthur-          #+#    #+#             */
/*   Updated: 2018/09/11 19:54:29 by marthur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_points
{
	int			fd;
	int			size_map;
	char		*map;
	char		empty;
	char		obstacle;
	char		full;
	int			x;
	int			y;
	int			size_sq;
}				t_points;

t_points		g_cell;

int				get_file(char *path);
char			*get_grid();
int				parse_param(char *str, int l);
char			*read_param(void);
int				bsq_without_arg(int fd);
int				bsq(void);
char			*ft_strcpy(char *dest, char *src);
void			reset();
int				check_grid(char *str, int first);
int				len_first(char *str);
int				ft_strlen(char *str);
int				check_index(unsigned short **arr, int i, int j);
int				find_min(int a, int b, int c);
int				check_n(char *str);

#endif
