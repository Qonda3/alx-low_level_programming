#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: a pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int k;
	char sub;

	while (s[i] != 0)
	{
		count += 1;
		i++;
	}
	for (k = 0; k < count; k++)
	{
		count--;
		sub = s[k];
		s[k] = s[count];
		s[count] = sub;
	}
}
