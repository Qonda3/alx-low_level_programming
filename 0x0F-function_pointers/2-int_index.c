#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
