/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:45:35 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/11 22:26:49 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	result;

	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	else
	{
		result = *s1 - *s2;
		return (result);
	}
}

int main()
{
    char *str1 = "2004";
    char *str2 = "2005";
    int n = 4;

    int result = ft_strncmp(str1, str2, n);

    printf("Result is: %d\n", ft_strncmp(str1, str2, n));
    return result;
}

