/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:05:32 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/17 12:13:05 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char *pointer)
{
	int	length;

	length = 0;
	while (*pointer != 0)
	{
		length++;
		pointer++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	new_s;
	int	size_dest;
	unsigned int	data;

	i = 0;
	new_s = n - 1;
	size_dest = get_length(dest);
	while (*src != 0 && new_s > 0)
	{
		dest[i + size_dest] = src[i];
		new_s--;
		i++;
	}
	dest[i + size_dest] = 0;
}
