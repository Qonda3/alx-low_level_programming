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

	while (str[len] != '\0')
		len++;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
