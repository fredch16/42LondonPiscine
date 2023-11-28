/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:24:21 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/08 20:41:10 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	madnessandbadness(int j, int k, int i)
{
	char	combination[6];

	combination[0] = '0' + i;
	combination[1] = '0' + j;
	combination[2] = '0' + k;
	combination[3] = ',';
	combination[4] = ' ';
	if (i == 7 && j == 8 && k == 9)
		write(1, combination, 3);
	else
		write(1, combination, 5);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				madnessandbadness(j, k, i);
				k++;
			}
			j++;
		}
		i++;
	}
}
