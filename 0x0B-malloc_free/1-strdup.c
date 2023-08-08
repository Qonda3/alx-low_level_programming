#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * _strdup - duplicate the string given as a parameter
 * @str: a pointer of the array of char
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0;
	int count = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			count++;
			i++;
		}
		newstr = malloc(count * sizeof(char));
		if (newstr == NULL)
			return (NULL);
		for (j = 0; j < count; j++)
		{
			newstr[j] = str[j];
		}
	}
	return (newstr);
}
