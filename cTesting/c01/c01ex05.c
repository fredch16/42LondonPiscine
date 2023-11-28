/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01ex05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:41:39 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/10 12:54:35 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	ft_putstr("thestring");
	return(0);
}
