/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkearney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:42:41 by jkearney          #+#    #+#             */
/*   Updated: 2023/10/21 16:48:49 by jkearney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*ptr;
	int	len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	ptr = str;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (str);
}
