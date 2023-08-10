#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to a array of char
 * @s2: pointer to a array of char
 * @n: number of char to concatenate from s2;
 * Return: a pointer to array of char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, num;
	unsigned int j;
	unsigned int count;
	char *add;

	count = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	}
	num = count + n;
	add = malloc(num + 1);
	if (add == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		add[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		add[i] = s2[j];
		i++;
	}
	return (add);
}
