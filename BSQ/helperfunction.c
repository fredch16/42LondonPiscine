/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfunction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:32:17 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/25 13:12:57 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define MAX_ROWS 9
#define MAX_COLS 19

void	print_map_charray(char premap[MAX_ROWS][MAX_COLS])
{
	for (int y = 0; y < MAX_ROWS; y++) {
		for (int x = 0; x < MAX_COLS; x++) {
			printf("%c ", premap[y][x]);
		}
		printf("\n");
	}
}

void	print_map_intarray(int **intmap)
{
	for (int y = 0; y < MAX_ROWS; y++) {
		for (int x = 0; x < MAX_COLS; x++) {
			printf("%2d ", intmap[y][x]);
		}
		printf("\n");
	}
}

int	isobstacle(int *crds, char premap[MAX_ROWS][MAX_COLS],
		char obstaclefield)
{
	if (premap[crds[0]][crds[1]] == obstaclefield)
		return (1);
	else
		return (0);
}

int	checkleft(int *crds, int **intmap)
{
	if (crds[1] == 0)
		return (0);
	else
		return (intmap[crds[0]][crds[1] - 1]);
}

int	checkup(int *crds, int **intmap)
{
	if (crds[0] == 0)
		return (0);
	else
		return (intmap[crds[0] - 1][crds[1]]);
}

int	checkdiag(int *crds, int **intmap)
{
	if (crds[1] == 0 || crds[0] == 0)
		return (0);
	else
		return (intmap[crds[0] - 1][crds[1] - 1]);
}
