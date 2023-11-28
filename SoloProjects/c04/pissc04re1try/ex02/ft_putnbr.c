/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:06:00 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/16 17:08:13 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
	
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr(nb / -10);
			ft_putchar('8');
		}
		else
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
			
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}
