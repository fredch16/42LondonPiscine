/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:14:29 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/07 18:21:52 by algarrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

static const char	g_upper_a = 'A';
static const char	g_upper_b = 'B';
static const char	g_upper_c = 'C';
static const char	g_space = 0x20;
static const char	g_new_line = '\n';

void	select_char(int col, int row, int x, int y)
{
	int	max_col;
	int	max_row;

	max_col = x - 1;
	max_row = y - 1;
	if ((col == 0 && row == 0)
		|| ((col == max_col && row == 0) && x > 1))
		ft_putchar(g_upper_a);
	else if (((col == 0 && row == max_row) && y > 1)
		|| (row == max_row && col == max_col))
		ft_putchar(g_upper_c);
	else if (col == 0 || col == max_col || row == 0 || row == max_row)
		ft_putchar(g_upper_b);
	else
		ft_putchar(g_space);
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (row < y)
	{
		while (col < x)
		{
			select_char(col, row, x, y);
			col++;
		}
		ft_putchar(g_new_line);
		col = 0;
		row++;
	}
}
