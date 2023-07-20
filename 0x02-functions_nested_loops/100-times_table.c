#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: n times table
 */
void print_times_table(int n)
{
	int i, j, a, b, times;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				times = i * j;
				a = times / 10;
				_putchar(',');
				_putchar(' ');
				if (a != 0)
				{
					b = times / 100;
					if (b != 0)
					{
						times = times - 100;
						_putchar(49);
						_putchar((times / 10) + '0');
						_putchar((times % 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar((times / 10) + '0');
						_putchar((times % 10) + '0');
					}
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((times % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
