/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicttoarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:17:21 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/22 21:55:38 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	check_space(char c)
{
	return (c == ' ');
}

char	*trim_spaces(char *str)
{
	char	*end;

	while (check_space(*str))
	{
		str++;
	}
	if (*str == 0)
		return (str);
	end = str + ft_strlen(str) - 1;
	while (end > str && check_space(*end))
		end--;
	*(end + 1) = 0;
	return (str);
}

int	ft_is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int	is_valid_number(char *str)
{
	while (*str)
	{
		if (!(ft_is_digit(*str)) || check_space(*str))
		{
			return (0);
		}
	}
	return (1);
}

char	*dicttostr(void)
{
	int	fd;
	int	bytesread;
	char	*dictstr = (char*)calloc((50*50), sizeof(char));

	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		perror("-1");
		exit(1);
	}
	bytesread = read(fd, dictstr, (50*50));
	//printf("called read(%d, c, 10). return that %d bytes were read. \n", fd, bytesread);
	dictstr[bytesread] = '\0';
	//printf("Those bytes are as follows:\n%s\n", dictstr);
	return (dictstr);
}

char **processrow(char *file_str)
{
	char	*buffer;
	char	*buffer2;
	char	*dest;
	char	*dest2;
	char	**row;
	int		i;

	row = (char **)malloc(2 * sizeof(char *));
	buffer = (char *)malloc(38 * sizeof(char));
	buffer2 = (char *)malloc(38 * sizeof(char));
	dest = buffer;
	dest2 = buffer2;
	i = 0;
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
	file_str += 2;
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
	row[1] = dest2;
	return (row);
}

int main(void)
{
	char	*tempstore;
	char	***rows;
	int		num_rows;
	int		i;
	int		found;
	char	*current_position;
	char	*findthis;

	tempstore = dicttostr();
	current_position = tempstore;
	num_rows = 41;
	i = 0;
	found = 0;
	rows = (char ***)malloc(num_rows * sizeof(char *));
	while (i < num_rows)
	{
		rows[i] = processrow(current_position);
		if (rows[i] == NULL)
			break ;
		current_position = strchr(current_position, '\n');
		if (current_position)
			current_position++;
		else
			break ;
		i++;
	}
	i = 0;
	findthis = "90";
	while (!found && i < num_rows)
	{
		if (strcmp(findthis, rows[i][0]) == 0)
		{
			printf("Your input was:%s.\nThe corresponding written number is:%s\n",
				findthis, rows[i][1]);
			found = 1;
		}
		i++;
	}
	i = 0;
	while (i < num_rows)
	{
		free(rows[i]);
		i++;
	}
	free(rows);
	return (0);
}
