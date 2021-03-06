/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 21:09:56 by mcressen          #+#    #+#             */
/*   Updated: 2018/08/29 21:10:00 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		ft_putstr(*tab);
		ft_putchar('\n');
		tab++;
	}
}

int		ft_count_words(char *str)
{
	int i;
	int number;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		&& str[i] != '\0')
		{
			i++;
		}
		if (str[i] != '\0')
			number += 1;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
		&& str[i] != '\0')
		{
			i++;
		}
	}
	return (number);
}

int		ft_get_next_word_pos(char *str, int pos)
{
	while (str[pos] == '\n' || str[pos] == '\t' || str[pos] == ' ')
	{
		pos++;
	}
	return (pos);
}

int		ft_get_word_length(char *str, int pos)
{
	int len;

	len = 0;
	while (str[pos + len] != '\n' && str[pos + len] != '\t'
	&& str[pos + len] != ' ' && str[pos + len] != '\0')
		len++;
	return (len);
}

int		fill_array(char **res, char *str, int pos, int i)
{
	int length;
	int next_word_pos;
	int j;

	j = 0;
	next_word_pos = ft_get_next_word_pos(str, pos);
	length = ft_get_word_length(str, next_word_pos);
	res[i] = (char *)malloc(sizeof(**res) * length + 1);
	while (j < length)
	{
		res[i][j] = str[next_word_pos + j];
		j++;
	}
	res[i][j] = '\0';
	return (next_word_pos + length);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		num_words;
	int		i;
	int		p;

	num_words = ft_count_words(str);
	res = (char **)malloc(sizeof(*res) * (num_words + 1));
	i = 0;
	p = 0;
	while (i < num_words)
	{
		p = fill_array(res, str, p, i);
		i++;
	}
	res[i] = 0;
	return (res);
}

int main(int argc, char **argv)
{
	char **arr;
	char str[] = "\n\tmy name\t\t  Erzhena\n";
	arr = ft_split_whitespaces(str);
	ft_print_words_tables(arr);
	return (0);
}
