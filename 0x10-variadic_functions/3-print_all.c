#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * string - print string
 * @str: array of char
 */
void string(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - prints anything
 * @format: an array of character
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list arg;

	if ((format == NULL))
	{
		va_end(arg);
		return;
	}
	va_start(arg, format);
	while (format[i] != '\0')
	{
		j = 1;
		switch (format[i])
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
				string(va_arg(arg, char *));
				break;
			default:
				j = -1;
				break;
		}
		i++;
		while ((j != -1) && (format[i] != '\0'))
		{
			printf(", ");
			j = -1;
		}
	}
	printf("\n");
	va_end(arg);
}
