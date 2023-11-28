/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:13:59 by algarrig          #+#    #+#             */
/*   Updated: 2023/10/07 14:40:07 by algarrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define STDOUT (1)

void	ft_putchar(char c)
{
	unsigned int	size;

	size = 1;
	write(STDOUT, &c, size);
}
