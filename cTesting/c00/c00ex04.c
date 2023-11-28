/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:27:27 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/04 22:39:40 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_is_negative(int n)
{
        if (n >= 0)
        {
                write(1, &"P", 1);
        }
        else
        {
                write(1, &"N", 1);
        }
}

int     main(void)
{
        ft_is_negative(0);
        ft_is_negative(1);
        return (0);
}
