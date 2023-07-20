#include <stdio.h>

/**
 * main - sums numbers multiple of 3 and 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 3;
	int b = 5;
	int sum = 0;
	int i; 

	for (i = 1; i < 1024; i++)
	{
		if ((i % a) == 0 || (i % b) == 0)
		{
			sum = sum  + i;
		}
	}
	printf("The sum of these multiples %d\n", sum);
	return (0);
}
