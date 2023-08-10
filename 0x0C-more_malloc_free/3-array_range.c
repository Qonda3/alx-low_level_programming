#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int count = 0;
	
	if (min > max)
		return (NULL);
	for (i = min; i < max; i++)
		count++;

	arr = malloc(count * sizeof(*arr));
	if (arr == NULL)
		return (0);
	for(i = 0; i <= count; i++)
		arr[i] = min;
	return (arr);
}
