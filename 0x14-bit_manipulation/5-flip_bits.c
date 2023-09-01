#include "main.h"
/**
 * flip_bits - returns the number of bits.
 * @n: number
 * @m: number
 * Return: unsigned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, count = 0;
	unsigned long int value;

	value = n ^ m;
	while (i <= 63)
	{
		count += (value >> i) & 1;
		i++;
	}
	return (count);
}
