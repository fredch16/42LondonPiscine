/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:37:56 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/16 19:10:22 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
