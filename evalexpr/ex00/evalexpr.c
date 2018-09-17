/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:27:23 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/09 15:27:25 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>

int check_is_oper(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '%' || c == '*')
		return (1);
	return (0);
}

int check_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int prior(char c)
{
	if (c == '(' || c == ')')
		return (0);
	else if (c == '+' || c == '-')
		return (1);
	else if (c == '*' || c == '/' || c == '%')
		return (2);
	return (-1);
}

int	

int eval_expr(char *str)
{
	t_stack	*stack_num;
	t_stack	*stack_oper;
	int		i;
	int		num;
	//int		len;
	char	oper[2];
	//int		*fl;
	//int		*nbr;

	printf("in evalexpr");
	stack_num = NULL;
	stack_oper = NULL;
	i = 0;
	num = 0;
	oper[1] = '\0';
	//fl = NULL;
	//nbr = NULL;
	printf("in evalexpr");
	printf("%s\n", str);
	/*
	while (str[i])
	{
		printf("in while");
		len = 1;
		if (check_is_oper((str[i])))
		{
			oper[0] = str[i];
			ft_stack_push(&stack_oper, ft_strdup(oper));
		}
		else if (str[i] == '(')
			open_bracket(&stack_oper, nbr, fl);
		else if (str[i] == ')')
			close_bracket(&stack_num, &stack_oper, nbr, fl);
		else if (check_is_num(str[i]))
		{
			*nbr += 1;
			num = ft_atoi(str + i);
			len = ft_strlen(ft_itoa(num));
			ft_stack_push(&stack_num, ft_itoa(num));
		}
		i = i + len;
	}
	*/
	print_list(stack_num);
	print_list(stack_oper);
	return (0);
}
