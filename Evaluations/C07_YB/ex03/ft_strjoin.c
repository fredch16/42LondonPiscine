/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:37 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/18 22:12:37 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (original_dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*original;

	original = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (original);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*strcatter(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i]);
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*result;

	total_len = 0;
	i = 0;
	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result != NULL)
			result[0] = '\0';
		return (result);
	}
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep) + 1;
	result = (char *)malloc(total_len);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, strs[0]);
	strcatter(size, strs, sep, result);
	return (result);
}
