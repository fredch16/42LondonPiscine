/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:52:36 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/11 23:33:26 by fcharbon         ###   ########.fr       */
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
