/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:43:48 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/05 20:58:49 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	charmaker(char digchar)
{
	write(1, &digchar, 1);
}

void	ft_print_comb2(void)
{
	int	dig1;
	int	dig2;	

	dig1 = 0;
	while (dig1 <= 98)
	{
		dig2 = dig1 +1;
		while (dig2 <= 99)
		{
			charmaker((dig1 / 10) + '0');
			charmaker((dig1 % 10) + '0');
			charmaker(' ');
			charmaker((dig2 / 10) + '0');
			charmaker((dig2 % 10) + '0');
			if (!(dig1 == 98 && dig2 == 99))
			{
				charmaker(',');
				charmaker(' ');
			}
			dig2++;
		}
		dig1++;
	}
}
