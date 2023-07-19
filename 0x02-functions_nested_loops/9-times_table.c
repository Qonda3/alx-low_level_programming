#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;
	int j;
	int time;
	int a;

	while (i <= 9)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		j = 1;
		while (j <= 9)
		{
			time = i * j;
			a = time / 10;

			if (a != 0)
			{
				_putchar((time / 10) + '0');
				_putchar((time % 10) + '0');
				if ( j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			else
			{
				_putchar(' ');
				_putchar((time % 10) + '0');
				if ( j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
