#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: integer variable.
 * @max: integer variable.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, diff;

	if (min > max)
		return (NULL);
	diff = (max - min) + 1;
	ptr = malloc(diff * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i < diff)
	{
		ptr[i] = min;
		min = min + 1;
		i++;
	}
	return (ptr);
}
