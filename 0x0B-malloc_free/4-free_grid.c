#include <stdlib.h>
#include <limits.h>
/**
 * free_grid - frees a 2D
 * @grid: address of the 2D grid
 * @height: number of rows in 2D array
 * Return: void
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
