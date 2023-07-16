#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 113 || i == 101)
		{
			i += 1;
		}
		else
		{
			putchar(i);
			i += 1;
		}
	}
	putchar('\n');
	return (0);
}
