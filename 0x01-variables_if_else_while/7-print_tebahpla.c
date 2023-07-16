#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j = 122;

	while (j >= 97)
	{
		putchar(j);
		j--;
	}
	putchar('\n');
	return (0);
}
