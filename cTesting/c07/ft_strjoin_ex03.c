/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ex03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:37 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/19 13:12:09 by fcharbon         ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		leni;
	int		total_len;
	int		i;
	char	*result;

	total_len = 0;
	leni = 0;
	i = 0;
	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result != NULL)
			result[0] = '\0';
		return (result);
	}
	while (leni < size)
	{
		total_len += ft_strlen(strs[leni]);
		leni++;
	}
	total_len += (size - 1) * ft_strlen(sep) + 1;
	result = (char *)malloc(total_len);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, strs[0]);
	while (i < size)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i]);
		i++;
	}
	return (result);
}

int main() {
    char *strs[] = {"Hello", "World", "C", "Programming"};
    char *separator = "";
    int size = 4;

    char *result = ft_strjoin(size, strs, separator);
    if (result != NULL) {
        printf("Concatenated String: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
