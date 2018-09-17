/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:24:09 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/27 22:03:07 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			*dst = src[i];
			dst++;
		}
		i++;
	}
	*dst = '\0';
	return (i);
}
