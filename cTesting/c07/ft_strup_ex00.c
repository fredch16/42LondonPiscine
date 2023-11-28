/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:12:44 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/17 17:26:16 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	length;

	length = 0;
	while (*string++)
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*originaldest;

	originaldest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (originaldest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup_str;

	if (src == 0)
		return (0);
	len = ft_strlen(src);
	dup_str = (char *)malloc(len + 1);
	if (dup_str == 0)
		return (0);
	ft_strcpy(dup_str, src);
	return (dup_str);
}

int main() {
    char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Don't forget to free the memory when you're done with the duplicate
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
