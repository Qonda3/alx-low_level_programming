#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: a pointer the string we want to print in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;
	int k;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	for (k = count; k >= 0; --k)
	{
		_putchar(s[k]);
	}
}
