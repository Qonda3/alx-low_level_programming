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
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
