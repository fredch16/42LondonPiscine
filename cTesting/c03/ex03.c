/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:13:30 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/11 22:39:58 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
		dest++;
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (original_dest);
}

int main() 
{
    char dest[50] = "Hello, ";
    char *src = "World!";
    unsigned int nb = 3;

    ft_strncat(dest, src, nb);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
