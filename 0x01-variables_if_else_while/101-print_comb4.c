#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
				k += 1;
			}
			j += 1;
			k = j + 1;
		}
		j = i + 1;
		i += 1;
	}
	putchar('\n');
	return (0);
}
