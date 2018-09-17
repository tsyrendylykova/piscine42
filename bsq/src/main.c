/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marthur- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:53:34 by marthur-          #+#    #+#             */
/*   Updated: 2018/09/11 19:53:36 by marthur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		if (!bsq_without_arg(0))
			write(2, "map error\n", 10);
	}
	while (i < argc)
	{
		reset();
		if (!get_file(argv[i]))
			write(2, "map error\n", 10);
		else
		{
			bsq();
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
