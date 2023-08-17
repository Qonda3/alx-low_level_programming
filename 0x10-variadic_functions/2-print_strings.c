#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, m;
	char *retr;
	va_list each;

	va_start(each, n);
	m = n - 1;
	for (i = 0; i < n; i++)
	{
		retr = va_arg(each, char *);
		if (retr == NULL)
			printf("%s", "(nil)");
		if (retr != NULL)
			printf("%s", retr);
		if (i < m && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(each);
}
