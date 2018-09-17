/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:14:36 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/28 14:30:17 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_correct(char *base)
{
	int i;
	int j;
	int length;

	length = 0;
	while (base[length] != '\0')
		length++;
	if (length == 0 || length == 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] == 127)
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print(int nbr, char *base, int numeric_base)
{
	if (nbr == -2147483648)
	{
		ft_print(nbr / numeric_base, base, numeric_base);
		ft_putchar(base[nbr % numeric_base] + 1);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr > numeric_base - 1)
			ft_print(nbr / numeric_base, base, numeric_base);
		ft_putchar(base[nbr % numeric_base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (ft_check_correct(base))
		return ;
	else
		ft_print(nbr, base, i);
}
