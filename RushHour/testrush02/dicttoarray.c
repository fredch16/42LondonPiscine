/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicttoarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:17:21 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/22 19:52:31 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;
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
	return c == ' ';
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
	char	*dictstr = (char*)calloc((50*50) , sizeof(char));

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

char **processRow(char *file_str)
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

	//FOR ONE ROW
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

int main() {
    char *tempstore = test_read(); // Your input string
    char ***rows;
    int num_rows = 41; // Number of rows in your input string
	int i = 0;
	int found = 0;
    rows = (char ***)malloc(num_rows * sizeof(char *));

    // Split the input into rows and store them in the 'rows' array
    char *current_position = tempstore;
    for (int i = 0; i < num_rows; i++) {
        rows[i] = processRow(current_position);
        if (rows[i] == NULL) {
            break; // Stop if there are no more rows
        }
        current_position = strchr(current_position, '\n');
        if (current_position) {
            current_position++; // Move past the newline character
        } else {
            break; // Stop if there are no more rows
        }
    }

    // Now you have 'rows' containing all the rows from your input
    // You can access the key and value of each row using rows[i][0] and rows[i][1]

    // Remember to free the allocated memory when you're done
	char *findthis;
	findthis = "19";
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

    for (int i = 0; i < num_rows; i++) {
        free(rows[i]);
    }
    free(rows);

    return 0;


}
