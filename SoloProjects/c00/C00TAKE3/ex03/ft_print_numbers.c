/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:51:27 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/08 20:01:53 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digitchar;

	digitchar = '0';
	while (digitchar <= '9')
	{
		write(1, &digitchar, 1);
		digitchar++;
	}
}
