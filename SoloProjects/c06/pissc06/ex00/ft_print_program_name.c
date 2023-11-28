/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:52:53 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/15 21:45:24 by fcharbon         ###   ########.fr       */
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
	char	*program_name;

	program_name = argv[0];
	write(1, program_name, ft_strlen(program_name));
	return (0);
}
