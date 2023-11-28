/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:53:07 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/21 16:08:48 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	input;
	char *input_str;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (0);
	}

	input_str = argv[1];
	input = atoi(argv[1]);

	if (input < 0 || input > 9)
		{
			printf("Fuck you shit input. Give better number\n");
			return (0);
		}

	int fd = open("testnum.dict", 0_RDONLY);


	if (dict_file == NULL)
	{
		printf("Dictionairy not working :( // Dict Error \n");
		return (0);
	}

    while ((nread = read(dict_file, line, sizeof(line))) > 0) {
        // Null-terminate the line to work with it as a C string
        line[nread] = '\0';

        int number;
        char word[MAX_LINE_LENGTH];
        
        // Extract the number and word using manual string operations
        if (sscanf(line, "%d %s", &number, word) == 2) {
            if (number == input) {
                printf("You entered: %s\n", word);
                break;  // We found the word, so we can exit the loop
            }
        }
    }

	close(dict_file);

	return (0);
}
