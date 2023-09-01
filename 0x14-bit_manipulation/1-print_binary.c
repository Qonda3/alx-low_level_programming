#include <stddef.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	int position = 63;
	int zeros = 0;
	unsigned long int bit;

	while (position >= 0)
	{
		bit = n >> position;
		if (bit & 1)
		{
			_putchar('1');
			zeros++;
		}
		else if (zeros != 0)
		{
			_putchar('0');
		}
		position--;
	}
	if (zeros == 0)
		_putchar('0');
}
