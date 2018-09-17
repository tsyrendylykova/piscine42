/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:48:30 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/29 10:04:19 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar(argv[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_print_program_name(argv[0]);
	}
	return (0);
}
