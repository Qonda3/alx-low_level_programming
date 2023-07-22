#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int i = 2;
	long int factor = 0;

	while (num != 1)
	{
		if (num % i == 0)
		{
			while (num % i  == 0)
			{
				num = num / i;
			}
			factor = num;
		}
		i++;
	}
	printf("%ln", &factor);
	return (0);
}
