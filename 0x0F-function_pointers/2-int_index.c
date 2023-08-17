#include <stddef.h>
/**
 * int_index - searches for an int
 * @array: pointer to a array of int
 * @size: number of elements in the array
 * @cmp:compare values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
