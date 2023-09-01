#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index: index
 * Return: integer (1) success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n |= 1UL << index;
		return (1);
	}
	return (-1);
}
