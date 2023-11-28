/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thisisepic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:17:21 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/21 20:05:58 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	while (*str)
	{
		i++;
		str++
	}
	return (i);
}

int	check_space(char c)
{
	return c == ' ';
}

char	*trim_spaces(char *str)
{
	char	*end;

	while (checkspace(*str))
	{
		str++;
	}
	if (*str == 0)
		return (str);
	end = str + ft_strlen(str) - 1;
	while (end > str && check_space(*end)
		end--;
	*(end + 1) = 0;
	return (str);
}

int	ft_is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int is_valid_number(char *str)
{
	while (*str)
	{
		if(!(ft_is_digit(*str)) || check_space(*str))
		{
			return (0);
		}
	}
	return (1);
}

char	*test_read(void)
{
	int fd;
	int bytesread;
	char	*c = (char*)calloc((50*50) , sizeof(char));

	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}
	bytesread = read(fd, c, (50*50));
	printf("called read(%d, c, 10). return that %d bytes were read. \n", fd, sz);
	c[bytesread] = '\0';
	printf("Those bytes are as follos: %s\n", c);
	return (c);
}

char **store_value(char *file_str)
{
	char	*buffer;
	char	*buffer2;
	char	*dest;
	char	*dest2;
	char	**row;

	row = (char **)malloc(2 * sizeof(char *));
	buffer = (char **)malloc(10 * sizeof(char *));
	buffer2 = (char **)malloc(10 * sizeof(char *));
	dest = buffer;
	dest2 = buffer2;

	//FOR ONE ROW
	while (*file_str)
	{
		if (*file_str == ':')
			break;
		*buffer = *file_str;
		file_str++;
		buffer++;
	}

	buffer++;
	*buffer = '\0';
	row[0] = dest;
	file_str++;
	while (*file_str)
	{
		if (*file_str == '\n')
			break;
		*buffer2 = *file_str;
		file_str++;
		buffer2++;
	}
	buffer2++;
	*buffer2 = '\0';
	row[1] = dest2
	return (row)
}
