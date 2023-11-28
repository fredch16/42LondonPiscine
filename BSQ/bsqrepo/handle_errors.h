/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:28 by cralarco          #+#    #+#             */
/*   Updated: 2023/10/25 15:06:27 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef HANDLE_ERRORS
# define HANDLE_ERRORS

void	ft_handle_open_error(int fd)
{
	if (fd == -1)
	{
		write(2, "Error opening file", 11);
		exit(EXIT_FAILURE);
	}
}
void	ft_handle_memory_error(char **filebuff)
{
        if (filebuff == NULL)
	{
		write(2, "Memory allocation error\n", 24);
		exit(EXIT_FAILURE);
	}
}
void	ft_handle_close_error(int fd)
{
	if (close(fd) < 0)
	{
		printf("%d",fd);
		write(2, "Error closing file\n", 19);
		exit(EXIT_FAILURE);
	}
}
void	ft_handle_read_error(int rd, int fd, char *filebuff)
{
	if (rd == -1)
	{
		write(2, "Error reading file\n", 18);
		free(filebuff);
		close(fd);
		exit(EXIT_FAILURE);
	}
}
#endif
