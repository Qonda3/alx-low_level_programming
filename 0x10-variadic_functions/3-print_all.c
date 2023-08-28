#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * format: an array of character
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list arg;

	i = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		j = 1;
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				printf("%s", va_arg(arg, char *));
				break;
			default:
				j = -1;
				break;
		}
		i++;
		if ((format[i] != '\0') && (j != -1))
			printf(", ");
	}
	printf("\n");
	va_end(arg);
}
