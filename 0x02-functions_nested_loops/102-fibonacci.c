#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int i;
	long int  sum = 0;

	printf("%ld, %ld", a, b);
	for (i = 1; i <= 48; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
