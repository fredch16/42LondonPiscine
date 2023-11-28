/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:52:36 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/12 21:27:15 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*tf;
	char	*s;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		tf = to_find;
		while (*tf != '\0' && *s == *tf)
		{
			s++;
			tf++;
		}
		if (*tf == '\0')
			return (str);
		str++;
	}
	return (0);
}

int main() 
{
    char str[] = "Hello, World! This is a test.";
    char to_find[] = "World";

    char *result = ft_strstr(str, to_find);

    if (result != 0) 
    {
        printf("found at position: %ld\n", result - str);
    } else {
        printf("not found in the haystack.\n");
    }

    return 0;
}
