#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index <= 63)
	{
		value = (n >> index) & 1;
		return (value);
	}
	return (-1);
}
