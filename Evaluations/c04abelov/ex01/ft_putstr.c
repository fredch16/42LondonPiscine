/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:31:19 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 14:50:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	char *const	ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

void	ft_putstr(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}
