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

	while (i <= 57)
	{
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			j += 1;
		}
		i += 1;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
