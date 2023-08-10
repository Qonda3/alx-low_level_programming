#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: amount of bytes
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	long unsigned int elements;
	int *arr;
	long unsigned int i;

	if (nmemb == 0 && size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	elements = sizeof(*arr) * size;
	for (i = 0; i < elements; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
