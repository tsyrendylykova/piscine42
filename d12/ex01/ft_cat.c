/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcressen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:07:42 by mcressen          #+#    #+#             */
/*   Updated: 2018/09/06 14:07:45 by mcressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

#define BUF_SIZE 28000

#define SNS(s) (s),(sizeof(s)-1)
#define UNUSED(x) ((void)(x))
#define EACCES_MSG ": Permission denied\n"
#define ENOENT_MSG ": No such file or directory\n"
#define EISDIR_MSG ": Is a directory\n"
#define EBADF_MSG ": Bad file number\n"
#define EAGAIN_MSG ": Resource temporarily unavailable\n"
#define EINTR_MSG ": Interrupted function call\n"
#define EIO_MSG ": Input/output error\n"
#define EINVAL_MSG ": Invalid argument\n"

unsigned	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (*end)
		++end;
	return ((unsigned)(end - str));
}

void		ft_err(char *file)
{
	UNUSED(write(2, SNS("cat: ")));
	UNUSED(write(2, file, ft_strlen(file)));
	if (errno == EACCES)
		UNUSED(write(2, SNS(EACCES_MSG)));
	else if (errno == ENOENT)
		UNUSED(write(2, SNS(ENOENT_MSG)));
	else if (errno == EISDIR)
		UNUSED(write(2, SNS(EISDIR_MSG)));
	else if (errno == EBADF)
		UNUSED(write(2, SNS(EBADF_MSG)));
	else if (errno == EAGAIN)
		UNUSED(write(2, SNS(EAGAIN_MSG)));
	else if (errno == EINTR)
		UNUSED(write(2, SNS(EINTR_MSG)));
	else if (errno == EIO)
		UNUSED(write(2, SNS(EIO_MSG)));
	else if (errno == EINVAL)
		UNUSED(write(2, SNS(EINVAL_MSG)));
	else
		UNUSED(write(2, SNS(": Unknown error\n")));
}

int			ft_cat(int fd)
{
	char	buf[BUF_SIZE];
	long	ret;

	if (fd == -1)
		return (fd);
	while ((ret = read(fd, buf, BUF_SIZE)) != 0 && ret != -1)
		if (write(1, buf, (unsigned)ret) == -1)
			return (1);
	if (ret == -1)
		return (1);
	if (fd != 0)
		close(fd);
	return (0);
}

int			main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		return (ft_cat(0));
	}
	i = 1;
	while (i < argc)
	{
		if (ft_cat(open(argv[i], O_RDONLY)) != 0)
			ft_err(argv[i]);
		i++;
	}
	return (0);
}
