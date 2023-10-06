#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: array of characters.
 * @s2: array of characters.
 * @n: number of char to extract from s2.
 * Return: concatenated string else NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j, count1 = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	ptr = malloc(count1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < count1)
	{
		ptr[i] = s1[i];
		i++;
	}
	if (count2 <= n)
	{
		j = 0;
		while (s2[j] != '\0')
			ptr[i++] = s2[j++];
	}
	else
	{
		j = 0;
		while (j <= n)
			ptr[i++] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}
