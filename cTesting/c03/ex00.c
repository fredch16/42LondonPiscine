/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:45:35 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/11 20:53:23 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	int result = *s1 - *s2;
	return result;
}

int main() 
{
    char *str1 = "200";
    char *str2 = "300";

    int result = ft_strcmp(str1, str2);

    printf("Result is: %d\n", ft_strcmp(str1, str2));
    return result;
}
