#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: amount of space allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
