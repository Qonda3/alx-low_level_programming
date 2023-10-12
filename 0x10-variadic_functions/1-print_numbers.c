#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers -  prints numbers
 * @separator: string between numbers.
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t j, num;
	va_list ap;

	va_start(ap, n);

	j = 0;
	while (j < n)
	{
		num = va_arg(ap, const unsigned int);
		printf("%ld", num);
		if (j < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
