/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:37 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/26 18:40:54 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char *const	cat_string = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (cat_string);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

int	total_array_len(int size, char **strs, char *sep)
{
	int	total;
	int	index;

	index = 0;
	total = 0;
	while (index < size)
	{
		total += ft_strlen(strs[index]);
		index++;
	}
	total += (size - 1) * ft_strlen(sep) + 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*empty;
	char	*mem;
	int		index;

	index = 0;
	if (size <= 0)
	{
		empty = malloc(1);
		*empty = '\0';
		return (empty);
	}
	len = total_array_len(size, strs, sep);
	mem = malloc(sizeof(char) * len);
	mem[0] = '\0';
	while (index < size)
	{
		ft_strcat(mem, strs[index]);
		if (index < size - 1)
			ft_strcat(mem, sep);
		index++;
	}
	return (mem);
}
