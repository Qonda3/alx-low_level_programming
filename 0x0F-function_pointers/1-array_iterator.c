#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: number of elements to print.
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
