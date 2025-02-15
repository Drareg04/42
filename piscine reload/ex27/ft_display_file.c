/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:35:31 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/13 23:23:22 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024  // Buffer size for reading the file

void	openf(int fd)
{
	ssize_t	bytesread;
	char	buffer[BUFFER_SIZE];

	if (fd == -1)
	{
		write(2, "Cannot read file.", 17);
		write(1, "\n", 1);
		close(fd);
	}
	bytesread = read(fd, buffer, BUFFER_SIZE);
	while (bytesread > 0)
	{
		write(1, buffer, bytesread);
		bytesread = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(2, "File name missing.", 18);
		write(1, "\n", 1);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		write(1, "\n", 1);
		return (1);
	}
	openf(open(argv[1], O_RDONLY));
	return (0);
}
