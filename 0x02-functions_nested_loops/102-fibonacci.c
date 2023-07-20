#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i;
	int  sum = 0;

	printf("%d, %d", a, b);
	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		printf(", %d", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
