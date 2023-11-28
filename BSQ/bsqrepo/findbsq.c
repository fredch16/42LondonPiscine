/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findbsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:39:00 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/25 22:12:34 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "helperfunction.h"

#define MAX_ROWS 9
#define MAX_COLS 19

int	getcurrentfield(int *crds, int **intmap, char obstaclefield,
	char premap[MAX_ROWS][MAX_COLS])
{
	int	currentfield;

	currentfield = checkleft(crds, intmap)
		+ checkup(crds, intmap)
		- checkdiag(crds, intmap)
		+ isobstacle(crds, premap, obstaclefield);
	return (currentfield);
}

void	intmapper(char premap[MAX_ROWS][MAX_COLS], int **intmap,
	char obstaclefield)
{
	int	*crds;

	crds = malloc(sizeof(int) * 2);
	crds[0] = 0;
	while (crds[0] < MAX_ROWS)
	{
		crds[1] = 0;
		while (crds[1] < MAX_COLS)
		{
			intmap[crds[0]][crds[1]] = getcurrentfield(crds, intmap, 
			obstaclefield, premap);
			crds[1]++;
		}
		crds[0]++;
	}
	free(crds);
}

int	validsq(int sidelen, int *tmpcrds, int **intmap)
{
	int	result;
	//sidelen = sidelen - 1;

	result = intmap[tmpcrds[0] + sidelen][tmpcrds[1] + sidelen]
		- intmap[tmpcrds[0] + sidelen][tmpcrds[1]]
		- intmap[tmpcrds[0]][tmpcrds[1] + sidelen]
		+ intmap[tmpcrds[0]][tmpcrds[1]];
	if (result == 0)
		return (1);
	else
		return (0);
}

int	findbsqlen(int **intmap, int maxcol, int maxrow)
{
	int	sidelen;
	int	*tmpcrds;

	print_map_intarray(intmap);
	tmpcrds = malloc(sizeof(int) * 2);
	tmpcrds[0] = 0;
	sidelen = 1;
	while (tmpcrds[0] < maxrow)
	{
		tmpcrds[1] = 0;
		while (tmpcrds[1] < maxcol)
		{
			while ((validsq(sidelen + 1, tmpcrds, intmap) == 1) && 
				((tmpcrds[0] + sidelen + 1) < 9) && 
				((tmpcrds[1] + sidelen + 1) < 19))
			{
				sidelen++;
			}
			tmpcrds[1]++;

		}
		tmpcrds[0]++;
	}
	printf("Sidelen :%d\n", sidelen + 1);
	free(tmpcrds);
	return (sidelen);
}

int	**createintmap(int maxcol, int maxrow)
{
	int **intmap;
	int	index;
	int	inindex;
	int	*row;

	index = 0;
	intmap = malloc(sizeof(int *) * maxrow);
	while (index < maxrow)
	{
		row = malloc(sizeof(int) * maxcol);
		inindex = 0;
		while (inindex < maxcol)
		{
			row[inindex] = 0;
			inindex++;
		}
		intmap[index] = row;
		index++;
	}
	return (intmap);
}


int main(void)
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
	int 	maxcol;
	int 	maxrow;
	char	obstaclefield = 'o';

	maxcol = MAX_COLS;
	maxrow = MAX_ROWS;
	int **intmap;

	intmap = createintmap(maxcol, maxrow);
	intmapper(premap, intmap, obstaclefield);
	printf("Biggest square length:%d\n", findbsqlen(intmap, maxcol, maxrow));
	print_map_charray(premap);
	print_map_intarray(intmap);
	

	return (0);
}

