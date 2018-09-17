/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:20:48 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/08 23:20:50 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_stack
{
	struct s_stack	*next;
	char			*data;
}				t_stack;

t_stack		*ft_create_elem(char *data);
void		ft_stack_push(t_stack **begin_stack, char *data);
char		*ft_stack_pop(t_stack **begin_stack);
char		*ft_stack_get_last(t_stack *begin_stack);
void		print_list(t_stack *stack);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
char		*ft_itoa(int value);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
char		*ft_strdup(char *str);
int			eval_expr(char *str);
int			prior(char c);
int			doop(int num1, int num2, char oper);
void		open_bracket(t_stack **stack_oper, int *nbr, int *flag);
void		close_bracket(t_stack **stack_num, t_stack **stack_oper, int *nbr, int *flag);
void		number(t_stack **stack_num, t_stack **stack_oper, char c, int *flag);

#endif
