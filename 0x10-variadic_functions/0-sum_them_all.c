#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	size_t sum = 0;
	size_t i;
	va_list ap;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		if (n == 0)
			return (0);
		sum = sum + va_arg(ap, const unsigned int);
		i++;
	}
	va_end(ap);
	return (sum);
}
