#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: unsigned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, count = 0;
	unsigned long int exclusive = n ^ m;

	while (i <= 63)
	{
		count += (exclusive >> i) & 1;
		i++;
	}
	return (count);
}
