#include  "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  2 dimensional grid .
 * @grid: pointer to array.
 * @height: number of rows.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
