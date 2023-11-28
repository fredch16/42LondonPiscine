/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkearney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:47:13 by jkearney          #+#    #+#             */
/*   Updated: 2023/10/22 22:05:44 by jkearney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	rush_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}
*/
char	*doubles(char *str)
{
	char	mult_ten[3];
	char	unit;

	mult_ten = str;
	mult_ten[1] = '0';
	unit = str[1];
	/*
	 * Somehow open dict, read it, pick it up flip it and reverse it,
	 * in the words of Missy Elliott.
	 */
	return (/*string of numeral of composite number*/)
}
