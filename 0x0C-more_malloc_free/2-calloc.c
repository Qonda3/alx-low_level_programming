#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: The number of elements you want to allocate memory for.
 * @size: The size of each element in bytes.
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *set;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	set = (unsigned char *)ptr;
	while (i < nmemb * size)
	{
		set[i] = 0;
		i++;
	}
	return (ptr);
}
