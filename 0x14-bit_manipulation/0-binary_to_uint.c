#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0, i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			output = (b[i] - '0') + output * 2;
		else
			return (0);
		i++;
	}
	return (output);
}
