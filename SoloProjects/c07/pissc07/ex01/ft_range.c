/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:12 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/18 15:48:11 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	count;

	count = max - min;
	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == 0)
		return (0);
	i = 0;
	while (i < count)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
