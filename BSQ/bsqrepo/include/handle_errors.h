/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:28 by cralarco          #+#    #+#             */
/*   Updated: 2023/10/24 18:03:51 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef handle_errors_h
#define handle_errors_h

void	ft_handle_open_error(int fd)
{	
        if(fd == -1)
        {
                write(2, "Error opening file", 11);
                exit(EXIT_FAILURE);
        }
}
void	ft_handle_memory_error(char *filebuff)
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
                write(2, "Error closing file", 11);
                exit(EXIT_FAILURE);
        }
}
void	ft_handle_read_eror(int	rd, char *filebuff)
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
