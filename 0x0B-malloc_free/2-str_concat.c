#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * str_concat - concatenates two strings
 * @s1: a pointer to the array of char.
 * @s2: a pointer to the array of char.
 * Return: a pointer to joined s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int i, j, n;
	int count = 0;
	int count2 = 0;

	i = 0;
	while (s1[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		count2++;
		i++;
	}
	n = count + count2;
	add = malloc((n * sizeof(char)) + 1);
	if (add == NULL)
		return (NULL);
	for (j = 0; j < count; j++)
	{
		add[j] = s1[j];
	}
	for (j = 0; j < count2; j++)
	{
		add[count] = s2[j];
		count++;
	}
	return (add);
}
