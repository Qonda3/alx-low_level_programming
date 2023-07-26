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

	while (s[i] != 0)
	{
		count += 1;
		i++;
	}
	for (k = count - 1; k >= 0; k--)
	{
		_putchar(s[k]);
		s[k] = 0;
	}
	_putchar('\n');
}
