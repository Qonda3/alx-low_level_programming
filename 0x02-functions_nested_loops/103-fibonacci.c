#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0;
	long int i;
	
	printf("%ld", b);
	for (i = 1; i <= 48; i++)
	{
		sum = a + b;
		if (sum < 4000000)
		{
			if (sum % 2 == 0)
			{
				printf(", %ld", sum);
			}
		}
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
