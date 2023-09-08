#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a number
 * @index: index
 * Return: integer (1) success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	return (-1);
}