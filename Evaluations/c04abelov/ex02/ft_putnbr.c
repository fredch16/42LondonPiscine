/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:57:42 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 14:50:02 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

static const int	g_decimal_radix = 10;

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= g_decimal_radix)
	{
		ft_putnbr(nb / g_decimal_radix);
		nb = nb % g_decimal_radix;
	}
	if (nb < g_decimal_radix)
		ft_putchar(nb + 48);
}
