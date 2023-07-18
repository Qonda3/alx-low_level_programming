#include <stdio.h>
#include "main.h"

/**
 * main - print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char word[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	for (i = 0; i <= 8; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
