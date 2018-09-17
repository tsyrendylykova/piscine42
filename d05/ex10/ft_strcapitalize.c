/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 16:54:41 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/27 18:06:49 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_is_alpha_num(char c)
{
	if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || \
		(c >= 'a' && c <= 'z')))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || ft_check_is_alpha_num(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
