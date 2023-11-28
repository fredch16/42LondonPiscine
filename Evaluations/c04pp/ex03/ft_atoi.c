/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:21:11 by ppatel            #+#    #+#             */
/*   Updated: 2023/10/17 22:09:40 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 2;
	x = 0;
	while ((str[i] != '\0') && (!(str[i] >= '0' && str[i] <= '9')))
	{
		while ((str[i] == ' ') || (str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				j++;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			x = (x * 10) + (str[i] - '0');
			i++;
		}
		i++;
	}
	if (j % 2 != 0)
		return (-x);
	return (x);
}

int	main(void)
{
char	str[]= "    	---34awd";
	printf("%d", ft_atoi(str));
}
