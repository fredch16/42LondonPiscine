/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:14:29 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/07 18:19:35 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

static const char	g_new_line = '\n';

void	select_char(int col, int row, int x, int y)
{
	int	max_col;
	int	max_row;

	max_col = x - 1;
	max_row = y - 1;
	if ((col == 0 && row == 0)
		|| ((col == max_col && row == max_row) && y > 1 && x > 1))
		ft_putchar('/');
	else if (((col == 0 && row == max_row) || (row == 0 && col == max_col)))
		ft_putchar('\\');
	else if (col == 0 || col == max_col || row == 0 || row == max_row)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	max_col;
	int	max_row;
	int	col;
	int	row;

	max_col = x - 1;
	max_row = y - 1;
	col = 0;
	row = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= max_row)
	{
		while (col <= max_col)
		{
			select_char(col, row, x, y);
			col++;
		}
		ft_putchar(g_new_line);
		col = 0;
		row++;
	}
}
