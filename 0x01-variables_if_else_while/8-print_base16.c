#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int alpha = 97;

	while (num <= 57)
	{
		putchar(num);
		num += 1;
	}
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha += 1;
	}
	putchar('\n');
	return (0);
}
