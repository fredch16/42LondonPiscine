/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:27:01 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/10 17:04:01 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str && !(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("is numeric %d \n", ft_str_is_numeric("03098208"));
	printf("is numeric %d \n", ft_str_is_numeric("oaiwjdjiodawjiod"));
	printf("is numeric %d \n", ft_str_is_numeric("000aaa"));
		}
