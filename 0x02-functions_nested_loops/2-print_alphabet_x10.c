#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabets lowercase x10
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int i;
	int times = 0;

	while (times < 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		times++;
		_putchar('\n');
	}
}
