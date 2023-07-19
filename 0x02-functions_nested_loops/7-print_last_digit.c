#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * Return: last digit
 */
int print_last_digit(int last)
{
	int res;
	int c;

	res = last % 10;
	c = res + 48;
	_putchar(c);
	return (res);
}
