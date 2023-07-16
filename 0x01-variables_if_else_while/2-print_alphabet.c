#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i < 122)
	{
		i += 1;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
