/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findbsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:39:00 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/25 13:06:28 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "helperfunction.h"

#define MAX_ROWS 9
#define MAX_COLS 19

/*
void print_map_charray(char premap[MAX_ROWS][MAX_COLS]) 
{
    for (int y = 0; y < MAX_ROWS; y++) {
        for (int x = 0; x < MAX_COLS; x++) {
            printf("%c ", premap[y][x]);
        }
        printf("\n");
    }
}

void print_map_intarray(int **intmap) 
{
    for (int y = 0; y < MAX_ROWS; y++) {
        for (int x = 0; x < MAX_COLS; x++) {
            printf("%2d ", intmap[y][x]);
        }
        printf("\n");
    }
}


int isobstacle(int *crds, char premap[MAX_ROWS][MAX_COLS], char obstaclefield)
{
	if (premap[crds[0]][crds[1]] == obstaclefield)
		return (1);
	else
		return (0);
}


int checkleft(int *crds, int **intmap)
{
	if (crds[1] == 0)
		return (0);
	else
		return (intmap[crds[0]][crds[1] - 1]);
}

int checkup(int *crds, int **intmap)
{
	if (crds[0] == 0)
		return (0);
	else
		return (intmap[crds[0] - 1][crds[1]]);
}

int checkdiag(int *crds, int **intmap)
{
	if (crds[1] == 0 || crds[0] == 0)
		return (0);
	else
		return(intmap[crds[0] - 1][crds[1] - 1]);
}
*/
int	getcurrentfield(int *crds, int **intmap, char obstaclefield, char premap[MAX_ROWS][MAX_COLS])
{
	int currentfield;

	currentfield = checkleft(crds, intmap) 
	+ checkup(crds, intmap) 
	- checkdiag(crds, intmap)
	+ isobstacle(crds, premap, obstaclefield);

	return (currentfield);
}

void	intmapper(char premap[MAX_ROWS][MAX_COLS], int **intmap, char obstaclefield)
{
	int *crds;
	crds = malloc(sizeof(int) * 2);

	crds[0] = 0;
	while (crds[0] < MAX_ROWS)
	{
		crds[1] = 0;
		while (crds[1] < MAX_COLS)
		{
			intmap[crds[0]][crds[1]] = getcurrentfield(crds, intmap, obstaclefield, premap);
			crds[1]++;
		}
		crds[0]++;
	}
	free(crds);
}

int	main(void) 
{
	char premap[MAX_ROWS][MAX_COLS] = 
	{
			"...................",
			"....o..............",
			"............o......",
			"...................",
			"....o..............",
			"...............o...",
			"...................",
			"......o......o.....",
			"..o.......o........",
	};
	int **intmap;
	int *row;
	int index;
	int inindex;
	
	index = 0;
	intmap = malloc(sizeof(int *) * MAX_ROWS);

	while (index < MAX_ROWS)
	{
		row = malloc(sizeof(int) * MAX_COLS);
		inindex = 0;
		while (inindex < MAX_COLS)
		{
			row[inindex] = 0;
			inindex++;
		}
		intmap[index] = row;
		index++;
	}

	char	freefield = '.';
	char	obstaclefield = 'o';
	intmapper(premap, intmap, obstaclefield);
	print_map_charray(premap);
	print_map_intarray(intmap);

	return(0);
}

