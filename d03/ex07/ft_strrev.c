/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:35:17 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/24 18:13:21 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		n;
	int		length;
	char	temp;

	n = 0;
	length = 0;
	while (str[length] != '\0')
		length++;
	while (n < length / 2)
	{
		temp = str[n];
		str[n] = str[length - n - 1];
		str[length - n - 1] = temp;
		n++;
	}
	return (str);
}
