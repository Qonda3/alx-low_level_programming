#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *s;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
