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
			while (j < n)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else if (j < i)
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
