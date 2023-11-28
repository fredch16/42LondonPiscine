/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:42:55 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/15 21:30:41 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printer(int board[4][4])
{
	int	rig;
	int	col;

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[rig][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		rig++;
	}
}
