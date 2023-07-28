#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @wrd: a pointer on a char
 * Return: character
 */
char *string_toupper(char *wrd)
{
	int i = 0;
	int k;
	int count = 0;

	while (wrd[i] != '\0')
	{
		count++;
		i++;
	}
	for (k = 0; k < count ; k++)
	{
		if (wrd[k] >= 'a' && wrd[k] <= 'z')
		{
			wrd[k] = wrd[k] - 32;
		}
	}
	return (wrd);
}
