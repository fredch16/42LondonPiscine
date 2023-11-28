/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:46:37 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/09 23:13:55 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			return 1;
		else
			return 0;
	}
	return 1;
}

int	main(void)
{
	printf("result is %d", ft_str_is_alpha("iojawfwdajpfioaw"));
	printf("result is %d", ft_str_is_alpha("IKWDAWDAWHIODA"));
	printf("result is %d", ft_str_is_alpha("091289210913awddwadwa"));
	return(0);
}
