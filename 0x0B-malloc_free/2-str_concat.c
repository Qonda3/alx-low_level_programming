#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: array of char.
 * @s2: array of char.
 * Return: an concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	len = len1;
	i = 0;
	while (s2[i++] != '\0')
		len1++;
	ptr = malloc(len1 * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	len1 -= len;
	while (i < len1)
	{
		ptr[len++] = s2[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
