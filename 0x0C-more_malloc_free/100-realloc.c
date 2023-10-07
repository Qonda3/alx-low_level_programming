#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc & free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size in bytes.
 * @new_size: new size in bytes.
 * Return: void *.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *set;
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);
	set = (char *)ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = set[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = set[i];
	}
	free(ptr);
	return (new_ptr);
}
