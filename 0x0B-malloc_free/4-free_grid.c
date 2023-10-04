#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid: double pointer to an integer.
 * @height: integer;
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
