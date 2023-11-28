/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:07:44 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/12 19:01:41 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	int	length;

	length = 0;
	while (*string)
	{
		length++;
		string++;
	}
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;
	int	length;

	index = 0;
	length = ft_strlen(src);
	while (ft_strlen(dest) != length)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
