#include "main.h"
#include<stdlib.h>
/**
 * free_grid- frees a 2 dimensional grid created by ur
 * @grid:P1 2D array
 * @height:P2
 * Return:void
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
