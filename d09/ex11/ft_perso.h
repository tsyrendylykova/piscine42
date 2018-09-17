/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 04:24:38 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/31 04:24:41 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "Agent"

typedef struct	s_perso
{
	char	*name;
	int		life;
	int		age;
	char	*profession;
}				t_perso;

#endif
