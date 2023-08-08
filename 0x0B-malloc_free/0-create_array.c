#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: integer variable
 * @c: character variable
 * Return: pointer to the charater.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		i = 0;
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}
	else
	{
		return ('\0');
	}
	return (arr);
}
