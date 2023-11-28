/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:31:06 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/24 23:12:22 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 9
#define MAX_COLS 19

void print_map_intarray(int **intmap)
{
    for (int y = 0; y < MAX_ROWS; y++) {
        for (int x = 0; x < MAX_COLS; x++) {
            printf("%2d ", intmap[y][x]);
        }
        printf("\n");
    }
}


int isobstacle(int y, int x, char premap[MAX_ROWS][MAX_COLS], char obstaclefield)
{
    if (premap[y][x] == obstaclefield)
        return (1);
    else
        return (0);
}

int checkleft(int y, int x, int **intmap)
{
    if (x == 0)
        return (0);
    else
        return (intmap[y][x - 1]);
}

int checkup(int y, int x, int **intmap)
{
    if (y == 0)
        return (0);
    else
        return (intmap[y - 1][x]);
}

int checkdiag(int y, int x, int **intmap)
{
    if (x == 0 || y == 0)
        return (0);
    else
        return(intmap[y - 1][x - 1]);
}

int getcurrentfield(int y, int x, int **intmap, char obstaclefield, char premap[MAX_ROWS][MAX_COLS])
{
    int currentfield;

    currentfield = checkleft(y, x, intmap)
    + checkup(y, x, intmap) 
    - checkdiag(y, x, intmap)
    + isobstacle(y, x, premap, obstaclefield);
    return (currentfield);
}

void    intmapper(char premap[MAX_ROWS][MAX_COLS], int **intmap, char obstaclefield)
{
    int x;
    int y;


    x = 0;
    y = 0;
    while (y < MAX_ROWS)
    {
		x = 0;
        while (x < MAX_COLS)
        {
            intmap[y][x] = getcurrentfield(y, x, intmap, obstaclefield, premap);
            x++;
        }
        y++;
    }
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
            row[inindex] = 1;
            inindex++;
        }
        intmap[index] = row;
        index++;
    }

    char    freefield = '.';
    char    obstaclefield = 'o';
    print_map_intarray(intmap);
	
	printf("What's my current field? %d\n", getcurrentfield(8, 17, intmap, obstaclefield, premap));

    return (0);
}
