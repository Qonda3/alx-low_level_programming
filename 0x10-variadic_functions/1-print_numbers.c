#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, m;
	va_list each;

	va_start(each, n);
	m = n - 1;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(each, int));
		if ((i < m) && separator != NULL)
			printf("%s", separator);
	}
	va_end(each);
	printf("\n");
}
