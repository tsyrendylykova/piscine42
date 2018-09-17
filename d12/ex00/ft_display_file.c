/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:54:37 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/05 17:54:40 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 0;
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)) && ret != -1)
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
