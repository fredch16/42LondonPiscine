/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:13:34 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/09 22:23:29 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	strlen;

	strlen = 0;
	while (*str)
	{
		str++;
		strlen++;
	}
	printf("%u", strlen);
	return (strlen);
}
