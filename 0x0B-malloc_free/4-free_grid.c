#include "holberton.h"
/**
 * free_grid - This function frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: double pointer
 * @height: int
 * Return: grid
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
