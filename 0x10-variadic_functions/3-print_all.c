#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char ch;
	va_list ap;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		ch = format[i];
		if (i > 0 && (ch == 'i' || ch == 'c' || ch == 'f' || ch == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
