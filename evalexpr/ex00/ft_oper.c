/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:51:30 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/09 18:51:32 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		doop(int num1, int num2, char oper)
{
	if (oper == '+')
		return (num1 + num2);
	else if (oper == '-')
		return (num1 - num2);
	else if (oper == '/')
		return (num1 / num2);
	else if (oper == '%')
		return (num1 % num2);
	else if (oper == '*')
		return (num1 * num2);
	return (0);
}

int		make_oper(t_stack **stack_num, t_stack **stack_oper)
{
	char	*oper;
	int		num1;
	int		num2;
	int		res;

	//oper[1] = '\0';
	oper = ft_stack_pop(stack_oper);
	num1 = ft_atoi(ft_stack_pop(stack_num));
	num2 = ft_atoi(ft_stack_pop(stack_num));
	res = doop(num1, num2, oper[0]);
	ft_stack_push(stack_num, ft_itoa(res));
	return (res);
}

void	open_bracket(t_stack **stack_oper, int *nbr, int *flag)
{
	char	oper[2];

	oper[1] = '\0';
	oper[0] = '(';
	*flag = 1;
	*nbr = 0;
	ft_stack_push(stack_oper, ft_strdup(oper));
}

void	close_bracket(t_stack **stack_num, t_stack **stack_oper, int *nbr, int *flag)
{
	int num1;

	num1 = 0;
	if (*nbr == 1)
	{
		num1 = ft_atoi(ft_stack_pop(stack_num));
		ft_stack_push(stack_num, ft_itoa(num1 * (*flag)));
		ft_stack_pop(stack_oper);
		if (*flag == -1)
			ft_stack_pop(stack_oper);
		*nbr = 0;
	}
	else
	{
		while(ft_stack_get_last(*stack_oper)[0] != '(')
		{
			make_oper(stack_num, stack_oper);
		}
		ft_stack_pop(stack_oper);
	}
	ft_stack_push(stack_oper, "(");
}

void	number(t_stack **stack_num, t_stack **stack_oper, char c, int *flag)
{
	char op[2];

	if (*flag == 1 && c == '-')
		*flag = -1;
	if (*stack_oper == NULL || prior(ft_stack_get_last(*stack_oper)[0]) < prior(c))
	{
		op[0] = c;
		op[1] = '\0';
		ft_stack_push(stack_oper, op);
	}
	else if (prior(ft_stack_get_last(*stack_oper)[0]) >= prior(c))
		while (prior(ft_stack_get_last(*stack_oper)[0] >= prior(c)))
			make_oper(stack_num, stack_oper);
		op[0] = c;
		op[1] = '\0';
		ft_stack_push(stack_oper, op);
}
