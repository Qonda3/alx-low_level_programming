#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: a pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}
	if (count % 2 == 0)
	{
		n = count / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		n = count / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
		 n++;
		}
		_putchar('\n');
	}
}
