#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative - prints if integer is positive or negative
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
