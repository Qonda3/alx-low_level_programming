#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate a string.
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	ptr = malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
