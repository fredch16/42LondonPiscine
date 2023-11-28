/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:55:58 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 14:46:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

static const int	g_ascii_zero = '0';
static const int	g_ascii_nine = '9';
static const int	g_decimal_radix = 10;

static inline bool	ft_is_number(char c)
{
	return ((c >= g_ascii_zero) && (c <= g_ascii_nine));
}

static inline bool	ft_is_sign(char c)
{
	return ((c == '-') || (c == '+'));
}

static inline bool	ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t')
		|| (c == '\n') || (c == '\v') || (c == '\f') || (c == '\r'));
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	neg;

	i = 0;
	nbr = 0;
	neg = 1;
	while (ft_is_space(str[i]))
		i++;
	while (ft_is_sign(str[i]))
		if (str[i++] == '-')
			neg *= -1;
	while (ft_is_number(str[i]))
	{
		nbr *= g_decimal_radix;
		nbr += str[i++] - g_ascii_zero;
	}
	if (neg < 0)
		return (-nbr);
	else
		return (nbr);
}
