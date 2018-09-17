/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:43:37 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/04 19:43:40 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		calculate(int a, int b, char oper)
{
	if (oper == '+')
		return (ft_sum(a, b));
	else if (oper == '-')
		return (ft_subtract(a, b));
	else if (oper == '/')
		return (ft_div(a, b));
	else if (oper == '%')
		return (ft_mod(a, b));
	else if (oper == '*')
		return (ft_mul(a, b));
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*operation;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	operation = argv[2];
	if (b == 0 && *operation == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (b == 0 && *operation == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(calculate(a, b, *operation));
	write(1, "\n", 1);
	return (0);
}
