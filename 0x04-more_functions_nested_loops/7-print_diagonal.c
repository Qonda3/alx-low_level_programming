#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: integer
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			i = i + 1;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
