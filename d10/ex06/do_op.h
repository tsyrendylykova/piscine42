/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:57:52 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/04 19:57:54 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_sum(int a, int b);
int		ft_subtract(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_mul(int a, int b);

#endif
