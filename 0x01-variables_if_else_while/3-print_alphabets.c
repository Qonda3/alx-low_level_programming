#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i += 1;
	}
	while (j <= 90)
	{
		putchar(j);
		j += 1;
	}
	putchar('\n');
	return (0);
}
