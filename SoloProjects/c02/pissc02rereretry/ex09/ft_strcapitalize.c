/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:19:20 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/11 17:16:54 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char *str)
{
	if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		return (0);
	return (1);
}

int	ft_isnum(char *str)
{
	if (*str && !(*str >= '0' && *str <= '9'))
		return (0);
	return (1);
}

char	*str_tolower(char *str)
{
	char	*stupidpointer;

	stupidpointer = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (stupidpointer);
}

char	*ft_strcapitalize(char *str)
{
	int		capnext;
	char	*idiotpointer;

	capnext = 1;
	str_tolower(str);
	idiotpointer = str;
	while (*str)
	{
		if (ft_isalpha(str))
		{
			if (capnext)
			{
				*str = *str - 32;
				capnext = 0;
			}
		}
		else if (ft_isnum(str))
			capnext = 0;
		else
			capnext = 1;
		str++;
	}
	return (idiotpointer);
}
