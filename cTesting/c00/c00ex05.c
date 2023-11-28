/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:24:21 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/05 11:54:01 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
        int     i;
        int     j;
        int     k;
        char    combination[5];

        i = 0;
        while (i < 8)
        {
                j = i + 1;
                while (j < 9)
                {
                        k = j + 1;
                        while (k < 10)
                        {
                                combination[0] = '0' + i;
                                combination[1] = '0' + j;
                                combination[2] = '0' + k;
                                combination[3] = ' ';
                                combination[4] = '\0';
                                write(1, combination, 4);

                                k++;
                        }
                        j++;
                }
                i++;
        }
}
int main(void)
{
        ft_print_comb();
        return (0);
}

