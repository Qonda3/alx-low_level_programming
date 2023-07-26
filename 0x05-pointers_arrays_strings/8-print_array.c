#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of an array of integer
 * @a: a pointer
 * @n: a integer var
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
