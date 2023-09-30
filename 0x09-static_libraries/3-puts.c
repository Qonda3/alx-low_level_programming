#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer the string we want to print
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
