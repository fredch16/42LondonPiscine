/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkearney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:53:01 by jkearney          #+#    #+#             */
/*   Updated: 2023/10/22 22:09:09 by jkearney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	num_groups(char *str)
{
	int	len;

	len = ft_len(str);
	if (len < 3)
		return (0);
	return (len / 3);
}

int	num_outlier(char *str)
{
	return (ft_len(str) % 3);
}

int	char_comp(char ipt, char ref)
{
	return (ipt - ref);
}

void	nonzeros(char *str, char ***rows)
{
	int	i;
	int	j;
	int	lenref;
	int	k;
	char	nonzero_char;

	i = 0;
	j = 0;
	lenref = ft_len(str) - (ft_len(str) % 3); // length of reference, e.g. input 20200 --> 1000
	if (ft_len(str) > 3 && ft_len(str) % 3 != 0) // check whether number is 1000 or higher
	{
		i++; // move the counter where the remaining str length equals the reference length
	}
	k = 0;
	while (ft_len(rows[k][0]) < lenref)
		k++;
	while (j < lenref)
	{
		nonzero_char = char_comp(str[i], rows[k][0][j]) + '0';
		i++;
		j++;
		write(1, &nonzero_char, 1);
	}
}
