/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:15:55 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/12 12:13:10 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

int	main(void)
{
	char	dest[] = "1234567";
	char	src[] = "stiner";
	ft_strncpy(dest, src,7);
	printf("My string outputs: %s\n", dest);
	return(0);
}
