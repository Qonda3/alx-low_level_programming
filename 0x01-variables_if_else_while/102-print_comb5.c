#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, m, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (n = 48; n <= 57; n++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i != 57 && j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
