#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: Array
 * @height: Array height
 *
 * Return: pointer to array or NULL if it fails
 * or NULL if hight or width <= 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
