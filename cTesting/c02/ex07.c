/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:33:18 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/10 18:43:02 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char *original = str;

	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (str);
}

int	main(void)
{
	char myString[] = "thiss string is sm0Ll";
	
	printf("Old string is %s ", myString);
	printf("New string is %s ", ft_strupcase(myString));
	return (0);	
}
