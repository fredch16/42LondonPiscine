/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:12:33 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/16 21:40:19 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (nb >= (i * i))
	{
		if (nb > (i * i))
			i++;
		if (nb == (i * i))
			return (i);
		if (nb < (i * i))
			return (0);
	}
	return (0);
}
