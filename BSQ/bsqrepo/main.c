/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:29:53 by cralarco          #+#    #+#             */
/*   Updated: 2023/10/25 18:00:17 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "handle_errors.h"
#define SIZE 1025


void    print_map_charray(char **premap, int rows,int columns)
{
    for (int y = 0; y < rows; y++) {
        for (int x = 0; x < columns; x++) {
            printf("%c", premap[y][x]);
        }
    //    printf("\n");
    }
}

int	ft_get_file_size(char *path)
{
	int size;
	int	fd;
	char buff;

        size = 0;
	fd = open(path, O_RDONLY);
	ft_handle_open_error(fd);
        while (read(fd, &buff, 1) > 0)
        {
                size++;
        }
//	printf("%d", size);
//	printf("close value: %d\n", close(fd));
//	ft_handle_close_error(fd);
	return (size);
}

void	ft_build_map(char *path)
{
	char **map;
	int i;
	int j;
	char buff;
	int	size;
	int	fd;
	int	columns;
	
	i = 0;
	j = 0;
	size = ft_get_file_size(path);
	map = (char**)malloc(sizeof (char*) * size);
	ft_handle_memory_error(map);
	fd = open(path, O_RDONLY);
        ft_handle_open_error(fd);
	map[0] = (char*)malloc(sizeof(char) * size);

	while (read(fd, &buff, 1) > 0)
	{
		if (buff == '\n')
		{
			buff = 0;
			columns = j;
			i++;
                        j = 0;
			map[i] = (char*)malloc(sizeof(char) * size);

		}
		map[i][j] = buff;
		j++;
	}
	close(fd);
  //      ft_handle_close_error(fd);i
	print_map_charray(map, i, columns);

}

int	main(int argc, char **argv)
{
	char	*path;
	int		fd;
	char  buff;
	int size;

	if (argc != 2)
	{
		write(2, "Usage: ./readfile <filename>\n", 29);
		return (1);
	}
	path = argv[1];
	ft_build_map(path);
}
