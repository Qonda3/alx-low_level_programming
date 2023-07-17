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

	while (i < 57)
	{
		while (j < 57)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			i += 1;
			j += 1;
		}
	}
	putchar('\n');
	return (0);
}
