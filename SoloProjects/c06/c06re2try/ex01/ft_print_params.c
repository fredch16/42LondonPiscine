/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:13:15 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/12 20:14:45 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *string)
{
	int	length;

	length = 0;
	while (*string)
	{
		length++;
		string++;
	}
	return (length);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			arg = argv[i];
			write(1, arg, ft_strlen(arg));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
