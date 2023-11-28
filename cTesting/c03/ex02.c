/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:13:30 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/11 22:22:48 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}

int main() 
{
    char dest[50] = "Hello, ";
    char *src = "World!";

    ft_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
