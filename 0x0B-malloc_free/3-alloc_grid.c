#include <limits.h>
#include <stdlib.h>
/**
 * alloc_grid - initialize 2 dimensional array of integers to 0
 * @width: number of columns in 2D array
 * @height: number of rows in 2D array
 * Return: a pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
