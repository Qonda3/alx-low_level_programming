#include <stdlib.h>
/**
 * alloc_grid - return a pointer.
 * @width: integer.
 * @height: integer.
 * Return: a pointer to an integer.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(ptr[j]);
				j++;
			}
			free(ptr);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
