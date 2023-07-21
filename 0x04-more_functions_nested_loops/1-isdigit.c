#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int i = 48;
	int result = 0;

	while (i <= 57)
	{
		if (i == c)
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
